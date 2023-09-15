int convertFive(int n){
    int ans = 0;
    while(n){
        int rem = n % 10;
        if(rem == 0) ans = (ans*10) + 5;
        else ans = (ans*10) + rem;
        n /= 10;
    }
    int s = 0;
    while(ans){
        int rem = ans % 10;
        s = (s * 10)+ rem;
        ans = ans / 10;
    }
    return s;
}
