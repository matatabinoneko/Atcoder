import math
def main():
    a,b = map(int,input().split())
    for i in range(1,100000):
        if math.floor(i*0.08)==a and math.floor(i*0.1)==b:
            print(i)
            return 
    print(-1)
    


    return 

if __name__=="__main__":
    main()