int sumElement(int arr[],int n){
    int s = 0, e = n-1;
    int sum = 0;
    while(s<=e){
        if(s != e){
            sum += arr[s] + arr[e];
            s++; e--;
        }else{
            sum += arr[s];
            s++;
        }
    }return sum;
}
int main(){
  int arr[] = {3 2 1};
  cout << sumElement(arr,3) << endl;
}
