int countOfElements(int arr[], int n, int x) {
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] <= x) count++;
        else break;
    }
    return count;
}
int main(){
  int arr[] = {9,10 78, 89, 670};
  int x = 90;
  cout << countOfElements(arr, 5, x) << endl;
}
