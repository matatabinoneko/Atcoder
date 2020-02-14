import itertools

def main():
    input_line = map(int,input().split(' '))
    n,m = input_line
    a = list(map(lambda x:int(x)//2,input().split(' ')))

    pre_j = 0
    for i in range(len(a)):
        j=0
        while(a[i]%(2**j)==0):
            j+=1
        if i==0:
            pre_j=j
        if pre_j != j:
            print(0)
            return 0

    glc = 1
    for i in range(len(a)):
        glc = a[i]*glc//GCD(a[i],glc)
    print(((m//glc)+1)//2)
    return 


def GCD(a,b):
    if a < b:
        a,b = b,a
        
    while a % b !=0 :
        n = a % b
        a = b
        b = n
    return b

if __name__ == "__main__":
    main()
