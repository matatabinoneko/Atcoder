def main():
    d,t,s = map(int,input().split())
    if t*s < d:
        print("No")
    else:
        print("Yes")

if __name__ == "__main__":
    main()