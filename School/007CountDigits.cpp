int evenlyDivides(int N){
        if( N < 10) return 1;
        int t = N, count = 0;
        while(t>0){
            int digit = t%10;
            if( (digit != 0) && (N % digit == 0)) count++;
            t = t/10;
        }return count;
    }
int main(){
  cout << evenlyDivides(22074) << endl;
}
