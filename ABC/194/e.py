from queue import PriorityQueue
from collections import defaultdict


def main():
    N, M = map(int, input().split())
    A = list(map(int, input().split()))
    ans_list = []
    cnt_dict = defaultdict(int)

    q = PriorityQueue()
    for a in A[:M]:
        cnt_dict[a] += 1
    # 初期window幅に含まれない数をqueについか
    for i in range(N+1):
        if cnt_dict[i] == 0:
            q.put(i)

    for i in range(N-M):
        while True:
            min_max_value = q.get()
            if cnt_dict[min_max_value] == 0:
                ans_list.append(min_max_value)
                break

        # windowがスライド
        cnt_dict[A[i]] -= 1
        if cnt_dict[A[i]] == 0:
            q.put(A[i])

        cnt_dict[A[i+M]] += 1

    while True:
        min_max_value = q.get()
        if cnt_dict[min_max_value] == 0:
            ans_list.append(min_max_value)
            break
    print(min(ans_list))
    return


if __name__ == "__main__":
    main()
