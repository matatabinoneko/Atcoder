def main():
    abc = ["a",'b','c']
    cnt = 0
    n = int(input())
    for a in range(3):
        word = abc[a]
        for b in range(3):
            word1 = word + abc[b]
            for c in range(3):
                word2 = word1 + abc[c]
                for d in range(3):
                    word3 = word2 + abc[d]
                    for e in range(3):
                        word4 = word3  + abc[e]
                        for f in range(3):
                            word5 = word4 + abc[f]
                            for g in range(3):
                                word6 = word5 + abc[g]
                                for h in range(3):
                                    word7 = word6 + abc[h]
                                    print(word7[-1*n:])
                                    cnt += 1
                                    if cnt == pow(3,n):
                                        return 
        

    return 

if __name__=="__main__":
    main()