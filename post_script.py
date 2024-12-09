import struct
import sys
import pandas as pd
sys.path.append("./")
sys.path.append("./msg/")


from msg import traffic_pb2,location_pb2,common_pb2



def read_one(pblog_handle):
    try:
        t_size = struct.unpack('i',pblog_handle.read(4))[0]
        # print(t_size)
        p_size = struct.unpack('i',pblog_handle.read(4))[0]
        # print(p_size)
        time_stamp = struct.unpack('q',pblog_handle.read(8))[0]
        # print(time_stamp)
        topic = pblog_handle.read(t_size).decode()
        print(topic)
        payload = pblog_handle.read(p_size)
        if topic =="traffic":
            msg = traffic_pb2.Traffic()
            msg.ParseFromString(payload)
            car_t.append(time_stamp)
            car_x.append(msg.cars[0].x)
            car_y.append(msg.cars[0].y)
            car_velx.append(msg.cars[0].v)
        elif topic =="location":
            msg = location_pb2.Location()
            msg.ParseFromString(payload)
            ego_t.append(time_stamp)
            print(msg)
            pose_x.append(msg.pos.x)
            pose_y.append(msg.pos.y)
            vel_x.append(msg.vel.x)


    except Exception as e:
        print('end file!')
        return False
    return True

if __name__ == "__main__":
    file = "/home/saic/c++demo/traffic_flow/output.pblog"
    pblog_handle = open(file,'rb')
    pblog_handle.seek(0)
    ego_t,pose_x, pose_y,vel_x = [], [],[],[]
    car_t,car_x,car_y,car_velx  = [], [],[],[]
    while read_one(pblog_handle):
        pass
    pblog_handle.close()
    df_list_ego = pd.DataFrame({
        "time": ego_t,
        "pos_x": pose_x,
        "pos_y": pose_y,
        "vel_x": vel_x,
    })
    df_list_car = pd.DataFrame({
        "time": car_t,
        "pos_x": car_x,
        "pos_y": car_y,
        "vel_x": car_velx,
    })
    df_list_ego.to_csv('./ego.csv')
    df_list_car.to_csv('./car.csv')

