import re

def simplify(poly):
    print(poly)

    if (poly[0]!='-'): poly = "+"+poly

    all = re.findall(r"[-+]\d*[a-z]+", poly)
    monomials = []
    for monomial in all:
        mono = list(re.search(r"([+-]\d*)([a-z]+)", monomial).groups())
        if len(mono[0])==1: mono[0]+='1'
        mono[0] = int(mono[0])
        mono[1] = ''.join(sorted(mono[1]))

        monomials.append(mono)

    monomials_sum = {}
    for monomial in monomials:
        if monomial[1] in monomials_sum:
            monomials_sum[monomial[1]] += monomial[0]
        else:
            monomials_sum[monomial[1]] = monomial[0]

    
    monomials_vars = sorted(list(monomials_sum), key = lambda item: (len(item), item))
    
    result = ""
    for var in monomials_vars:
        idx = monomials_sum[var]
        if idx==0:
            continue
        if idx > 0:
            result+="+"+('' if idx==1 else str(idx))+var
        else:
            result+=('-' if idx==-1 else str(idx))+var
    if result[0] == '+':
        result = result[1:]

    print(result)
    return result