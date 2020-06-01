import queue
def main():
    q = queue.Queue()
    for i in range(1,10):
        q.put(i)
    
    k = int(input())
    q_list = []
    while(len(q_list) <= k):
        value = q.get()
        for i in [-1,0,1]:
            if 0 <= (value%10) + i and (value%10) + i <= 9:
                tmp = 10*value + (value%10) + i
                q.put(tmp)
        q_list.append(value)
    print(q_list[k-1])
    return 

if __name__ == "__main__":
    main()