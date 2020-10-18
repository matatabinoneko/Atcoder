def gcd(a,b):
    if a < b:
        a,b = b,a
    a = a%b
    return gcd(b,a) if a!= 0 else b

# def prime_list(a):
#     for i in range(2,a):
#         if a < i**2:
#             break
#         if a%i == 0:
#             yield i
#             if i != a//i:
#                 yield a//i
#     yield a



def main():
    n = int(input())
    A = list(map(int,input().split()))
    counter = [0 for i in range(int(1e6+1))]

    setwise = A[0]
    for a in A:
        counter[a] += 1
        setwise = gcd(a,setwise)

    for i in range(2,len(counter)):
        if 1 < sum(counter[i::i]):
            if setwise == 1:
                print("setwise coprime")      
            else:
                print("not coprime")
            return
        else:
            print("pairwise coprime")
            return 


    # prime = [True for i in range(int(1e6+2))]
    # setwise = A[0]
    # pairwise = True
    # prime_set = set()
    # for a in A:
    #     if pairwise:
    #         for p in prime_list(a):
    #             if p not in prime_set:
    #                 prime_set.add(p)
    #             else:
    #                 pairwise = False


        #     if pairwise and prime[p] == True:
        #         prime[p] = False
        #         index = p
        #         while index < len(prime):
        #             prime[index] = False
        #             index += p
        #     else:
        #         pairwise = False
        #         break

        # setwise = gcd(setwise,a)

    # pairwise = True
    # setwise = A[0]
    # for a in A[1:]:
    #     if pairwise and gcd(A[0],a) != 1:
    #         pairwise = False

    #     setwise = gcd(setwise,a)
    # if pairwise:
    #     print("pairwise coprime")
    # elif setwise == 1:
    #     print("setwise coprime")      
    # else:
    #     print("not coprime")
    # return

if __name__ == "__main__":
    main()