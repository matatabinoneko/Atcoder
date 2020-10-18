import queue

def main():
    n = int(input())
    A = list(map(int,input().split()))
    A = sorted(A,reverse=True)
    q = queue.PriorityQueue()
    q.put([-1*A[0],-1*A[0]])
    ans = 0
    for a in A[1:]:
        _min, _max = map(lambda x:-1*x,q.get())
        ans += _min
        q.put([-1*a,-1*_min])
        q.put([-1*a,-1*_max])
    print(ans)
    return 

if __name__ == "__main__":
    main()