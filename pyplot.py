from matplotlib import pyplot as plt
import numpy as np

# x_list = np.arange(0,100,1)

car_L = 4
car_w = 1

def plot_car(x,y,yaw):
    yaw = yaw*np.pi/180
    x1 = x + car_w*np.sin(yaw)
    y1 = y - car_w*np.cos(yaw)
    x2 = x1 + car_L*np.cos(yaw)
    y2 = y1 + car_L*np.sin(yaw)
    x4 = x - car_w*np.sin(yaw)
    y4 = y + car_w*np.cos(yaw)
    x3 = x4 + car_L*np.cos(yaw)
    y3 = y4 + car_L*np.sin(yaw)
    # plt.xlim(0,50)
    # plt.ylim(0,50)
    plt.grid(True)
    plt.plot([x1,x2,x3,x4,x1],[y1,y2,y3,y4,y1])

def update(x,y,yaw,v,w):
    dt = 1
    yaw = np.deg2rad(yaw)
    x_post = x+v*dt*np.cos(yaw)
    y_post = y+v*dt*np.sin(yaw)
    yaw = yaw+w*dt
    yaw = np.rad2deg(yaw)
    if yaw >90:
        yaw = yaw-90
    print(x_post,y_post,yaw)
    return x_post,y_post,yaw

def main():
    x0, y0, yaw = 3, 3, 15
    x_end,y_end = 100,100
    # x_list = np.arange(x0,x0+30,1)
    # y_list = np.arange(y0,y0+30,1)
    # yaw_list = np.array([yaw]*30)
    x_list,y_list,yaw_list = [],[],[]
    x_list.append(x0)
    y_list.append(y0)
    yaw_list.append(yaw)
    for i in range(100):
        x0,y0,yaw = update(x0,y0,yaw,0.5,0.2)
        x_list.append(x0)
        y_list.append(y0)
        yaw_list.append(yaw)
    # plt.plot([x0-2,x_end+5],[y0-2,y_end+5],'ro')
    for x,y,yaw in zip(x_list,y_list,yaw_list):
        plt.cla()
        plt.plot([3, x_end + 5], [3, y_end + 5], 'ro')
        plot_car(x,y,yaw)
        plt.pause(0.0001)
    # plt.axis('equal')
    # plot_car(x, y, yaw)

    plt.show()

if __name__ == '__main__':
    main()


# plt.xlim(0,11)
# plt.ylim(0,11)

