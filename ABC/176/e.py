def main():
    H,W,M = map(int,input().split())
    row = [0 for i in range(H)]
    col = [0 for i in range(W)]
    target  = set()

    for _ in range(M):
        h,w = map(lambda x: int(x)-1,input().split())
        row[h] += 1
        col[w] += 1
        target.add((h,w))
    max_r = max(row)
    max_w = max(col)

    candidate_r = []
    for i,r in enumerate(row):
        if r == max_r:
            candidate_r.append(i)
    candidate_c = []
    for i,c in enumerate(col):
        if c == max_w:
            candidate_c.append(i)

    for idx_r in candidate_r:
        for idx_c in candidate_c:
            if (idx_r,idx_c) not in target:
                print(max_r+max_w)
                return
    print(max_r+max_w-1)
    return

if __name__ == '__main__':
    main()