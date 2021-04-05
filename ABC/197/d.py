import math


def main():
    N = int(input())
    x0, y0 = map(int, input().split())
    xn2, yn2 = map(int, input().split())
    diagonal_len = ((x0-xn2)**2 + (y0-yn2)**2) ** 0.5
    # print("diagonal_len", diagonal_len)
    if x0 == xn2:
        if y0 < yn2:
            theta = 90
        else:
            theta = 270
    elif y0 == yn2:
        if x0 < xn2:
            theta = 0
        else:
            theta = 180
    else:
        theta = math.degrees(math.atan((yn2 - y0)/(xn2 - x0)))
        if xn2 < x0:
            theta += 180

    # print("theta", theta)

    diagram_inter_degree = 360/(2*N)
    half_degree = (180 - (360/N))/2

    # print("diagram_inter_degree", diagram_inter_degree)
    # print("half_degree", half_degree)

    side_len = diagonal_len * math.sin(math.radians(diagram_inter_degree))
    # print("side_len", side_len)

    ans_x = side_len * math.cos(math.radians(theta - half_degree))
    ans_y = side_len * math.sin(math.radians(theta - half_degree))

    ans_x = ans_x + x0
    ans_y = ans_y + y0

    print(f"{ans_x:.10f} {ans_y:.10f}")
    return


if __name__ == "__main__":
    main()
