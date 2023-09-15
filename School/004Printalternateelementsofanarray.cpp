void print(int ar[], int n){
    for(int i=0; i<n; i+=2){
        if(i<n) cout << ar[i] << " ";
    }
}
int main(){
  int arr[] = {15, 2, 45, 12, 7};
  print(arr, 5);
}
