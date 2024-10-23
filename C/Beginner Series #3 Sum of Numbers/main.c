int get_sum(int a , int b) {
    int sum = 0;
    int c = a;
    a = (a>b)? b: a;
    b = (a==b)? c: b;
    
    for (; a!=b+1; a++) {
        sum+=a;
    }
    return sum;
}