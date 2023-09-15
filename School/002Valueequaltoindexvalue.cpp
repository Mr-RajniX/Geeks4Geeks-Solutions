vector<int> valueEqualToIndex(int arr[], int n) {
  vector<int> v;
	for(int i = 0; i < n; i++){
	    if( i+1 == arr[i]) v.push_back(i+1);
	}return v;
}
int main(){
  int arr[] = {15, 2, 45, 12, 7};
  vector<int> ans = valueEqualToIndex(arr, 5);
  for(int i=0; i<ans.size(); i++){
    cout << ans[i] << " ";
  }cout << endl;
}
