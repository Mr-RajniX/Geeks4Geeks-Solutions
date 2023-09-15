string toLower(string S) {
    for(int i=0; i<S.length(); i++){
        if(S[i] > 64 && S[i] < 91) S[i] = S[i] + 32;
    }return S;
}
