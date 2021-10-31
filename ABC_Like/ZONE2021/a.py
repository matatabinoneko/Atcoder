def main():
    S = input()
    ZONE = "ZONe"
    cnt = 0
    for i in range(0,len(S)-len(ZONE)+1):
        if S[i:i+len(ZONE)] == ZONE:
            cnt+=1
    print(cnt)
    return


if __name__ == "__main__":
    main()