string modify (string S){
    int s = 0, e = S.length()-1;
    while( s <= e){
        if( isVowel(S[s]) && isVowel(S[e]) ){
            swap ( S[s] , S[e]);
            s++; e--;
        }else if( !isVowel(S[s])) s++;
        else e--;
    }return S;
}
bool isVowel(char c){
    if(c=='a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
    return false;
}
