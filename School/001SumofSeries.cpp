long long seriesSum(int n) {
  long long ans  =(long)(n * ((long)n+1))/2 ;
  return ans;
}
int main(){
  int n;
  cin >> n;
  cout << seriesSum(n) << endl;
}
