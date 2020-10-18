# 全て赤にする
# 全て白にする
# 垢を左に集める

def main():
    n = int(input())
    c = input()
    all_r = c.count('R')
    all_w = c.count('W')
    trade = all_r - c[:all_r].count('R')
    print(min(all_r,all_w,trade))

    return 

if __name__ == "__main__":
    main()