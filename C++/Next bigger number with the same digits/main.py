for num in range(1,100):
    ab = 1
    a = 0
    b = 0
    nsq = num*num
    while (nsq>=10):
        nsq -= 10
        ab = 0 if ab else 1
        if (ab): a+=10
        if (not ab): b+=10
    if (a!=b):
        print(num)
