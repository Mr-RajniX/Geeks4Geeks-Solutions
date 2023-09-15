int PalinArray(int a[], int n){
    	for(int i =0 ; i< n; i++){
    	    if(!isPalinDrome(a[i])) return 0;
    	}return 1;
    }
    bool isPalinDrome(int n){
        int rev = 0, t = n;
        while(t){
            int rem = t % 10;
            rev = rev * 10 + rem;
            t /= 10;
        }if(rev == n) return true;
        return false;
    }
int main(){
  int arr[] = {111, 222, 333};
  cout << PalinArray(arr, 3);
}
