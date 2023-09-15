int find_median(vector<int> v){
    sort(v.begin(), v.end());
    int n = v.size();
    if(n % 2 == 0) {
        int n1 = n / 2;
        int n2 = n1 + 1; 
        int mid = (v[n1-1] + v[n2-1] )/2; 
        return mid;
    }else{
        int mid = v.size() / 2;
        return v[mid];
    }
}
int main(){
  vector<int> arr = {90, 100, 78, 89, 67};
  cout << find_median(arr) << endl;
}
