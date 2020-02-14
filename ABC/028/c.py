from queue import PriorityQueue

def main():
    # q = PriorityQueue()
    s = set()
    n = [int(i) for i in input().split()]
    for i in range(5):
        for j in range(i+1,5):
            for k in range(j+1,5):
                # q.put(n[i]+n[j]+n[k])
                # print(n[i]+n[j]+n[k])
                s.add(n[i]+n[j]+n[k])
    l = list(s)
    l = sorted(l,reverse=True)
    print(l[2])
    
if __name__ == "__main__":
    main()