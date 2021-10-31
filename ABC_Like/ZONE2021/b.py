

def calc_b(a,x,y):
    ret = y - a*x
    return ret


def main():
    N,D,H = map(int,input().split())
    ans = 0
    for _ in range(N):
        d,h = map(int,input().split())
        ans = max(calc_b((H-h)/(D-d),D,H), ans)
    print(f"{ans:.10f}")
    return


if __name__ == "__main__":
    main()