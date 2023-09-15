string armstrongNumber(int n){
    int t = n;int sum = 0;
    while(t){
        int rem = t % 10 ;
        sum += (rem * rem * rem);
        t = t/10;
    }if(sum == n) return "Yes";
    return "No";
}
int main(){
  cout << armstrongNumber(153) << endl;
}
