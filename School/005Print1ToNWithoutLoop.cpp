void printNos(int N){
  if(N > 1 ) printNos(N-1);
  cout << N << " ";
}
int main(){
  int n = 10;
  printNos(n);
}
