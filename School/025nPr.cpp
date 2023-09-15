long long nPr(int n, int r){
    long long num = fact(n)/fact(n-r);
    return num;
}
long long fact(int n){
    if ( n == 0) return 1;
    if( n==1 ) return n;
    long long a = 1;
    while(n){
        a *= n;
        n--;
    }return a;
}
