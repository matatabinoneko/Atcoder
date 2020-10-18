def main():
    s = input()
    t = input()
    mincount = 1e9
    
    for i in range(len(s)-len(t)+1):
        count = 0
        for j in range(len(t)):
            if(s[i+j] != t[j]):
                count+= 1
        mincount = min(mincount,count) 
    print(mincount)
    return
    

if __name__ == "__main__":
    main()