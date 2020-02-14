import re

def main():
    calc = input()
    calc = re.split(r'[\+\-]',calc)
    cnt  = 0
    for term in calc:
        # print(term.split("*"))
        if '0' not in term.split('*'):
            cnt += 1
    print(cnt)
    return

if __name__=="__main__":
    main()


