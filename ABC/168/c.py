import math


def main():
    a, b, h, m = map(int, input().split())
    short = m*360//60
    long = (h*360//12 + (360//12)*(m/60)) % 360
    angle = min(abs(short-long), 360-(abs(short-long)))
    # print(short, long, angle)
    # print(2*a*b*math.cos(angle*math.pi/360))
    ans = (pow(a, 2) + pow(b, 2) - 2*a*b*math.cos(angle*math.pi/180))**(1/2)
    print("{: .13f}".format(ans))
    return


if __name__ == "__main__":
    main()
