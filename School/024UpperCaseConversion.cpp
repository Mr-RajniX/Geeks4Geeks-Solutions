string transform(string s){
    if(s[0]>='a' && s[0]<='z') s[0]= s[0] - 32;
    
    for(int i =1; i< s.length(); i++){
        if(s[i] == ' ' && s[i+1] >= 'a' && s[i+1] <= 'z'){
            s[i+1] = s[i+1] - 32;
        }
    }return s;
}
