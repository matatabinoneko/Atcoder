OFFSET = 97
def main():
    n,m,k = map(int,input().split())
    A = list(map(int,input().split()))
    B = list(map(int,input().split()))

    total = 0
    a_index = 0
    b_index = 0
    while a_index != len(A):
        if total + A[a_index] <= k:
            total += A[a_index]
            a_index += 1
        else:
            break
    
    
    while b_index != len(B):
        if total + B[b_index] <= k:
            total += B[b_index]
            b_index += 1
        else:
            break

    
    ans = a_index + b_index 
    a_index -= 1
    while a_index != -1:
        total -= A[a_index]
        a_index -= 1
        while b_index != len(B):
            if total + B[b_index] <= k:
                total += B[b_index]
                b_index += 1
            else:
                break

        if ans < a_index + 1 + b_index :
            ans = a_index + 1 + b_index

    print(ans)



    


if __name__ == '__main__':
    main()