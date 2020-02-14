def main():
    n = int(input())
    for i in range(1,n+1):
        sita = i%10
        ue = i
        while(10<ue):
            ue = ue//10
        

        print(ue,sita)
    return 

if __name__ == "__main__":
    main()