import re    

def main():   
    text = "-34ac"
    reg = list(re.search(r"([+-]\d*)([a-z]+)", text).groups())
    if len(reg[0])==1: reg[0]=1
    else: reg[0] = int(reg[0])
    print(reg)


if __name__ == "__main__":
    main()

