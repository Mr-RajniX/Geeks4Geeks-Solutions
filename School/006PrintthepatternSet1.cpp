void printPat(int n){
    for(int i=n; i > 0; i--){
        for(int j = n; j >0; j--){
            for(int k = 0; k < i; k++){
                cout << j << " ";
            }
        }cout << endl;
    }
}
int main(){
  printPat(3);
}
