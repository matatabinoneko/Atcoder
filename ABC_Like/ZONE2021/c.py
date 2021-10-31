import numpy as np 
from itertools import permutations


def calc_bottle_neck(three_member):
    '''
    3人のボトルネックの人と要素のindexのリストを返す
    return 総合力, 使ったindex
    '''
    max_list = np.max(three_member, axis=0)
    ans = min(max_list)
    target_index = np.where(max_list == ans)[0].tolist()
    return ans, target_index



def main():
    N = int(input())
    member = []
    for _ in range(N):
        member.append(list(map(int,input().split())))
    member = np.asarray(member)
    ans_index_list = [0,1,2]
    ans, target_index = calc_bottle_neck(member[ans_index_list])

    for i in range(3,N):
        if np.any(ans <= member[i, target_index]):
        
            for candidate in permutations(ans_index_list,2):
                tmp_ans_index_list = [*candidate,i]
                tmp_ans, tmp_target_index = calc_bottle_neck(member[tmp_ans_index_list])
                if ans <= tmp_ans:
                    ans = tmp_ans
                    target_index = tmp_target_index
                    ans_index_list = tmp_ans_index_list
    print(ans)
    return


if __name__ == "__main__":
    main()