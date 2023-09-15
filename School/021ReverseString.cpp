string revStr(string S) {
    int s = 0, e = S.length()-1;
    while( s <= e){
        swap(S[s], S[e]);
        s++; e--;
    }return S;
}
