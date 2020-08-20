import math

def main():
    # a,b = map(float,input().split())
    input_line = input().split()
    a = int(input_line[0])
    b = float(input_line[1])
    ans = int(math.floor(a*b))
    print(ans)


if  __name__ == "__main__":
    main()