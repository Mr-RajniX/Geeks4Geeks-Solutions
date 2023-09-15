string modify (string s){
    string str="";
    for(int i=0; i<s.length(); i++){
        if(s[i] != ' ') str.push_back(s[i]);
    }return str;
}
