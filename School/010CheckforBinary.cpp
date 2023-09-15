bool isBinary(string str){
   for(int i=0; i<str.length(); i++){
       if(str[i] != '0' && str[i] != '1') return 0;
   }return 1;
}
int main(){
  cout << "101010" << endl;
}
