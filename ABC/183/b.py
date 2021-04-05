def main():
    Sx, Sy, Gx, Gy = map(int, input().split())
    Sy *= -1
    print((0-Sy)*(Gx-Sx)/(Gy-Sy) + Sx)
    return


if __name__ == '__main__':
    main()
