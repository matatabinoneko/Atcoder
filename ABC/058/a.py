def main():
    a,b,c = map(int,input().split())
    if (b-a) == (c-b):
        print("YES")
    else:
        print("NO")
    return

if __name__ == "__main__":
    main()