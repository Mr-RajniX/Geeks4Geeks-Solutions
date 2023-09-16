bool fascinating(int n) {
    string a = to_string(n);
    string b = to_string(n*2);
    string c = to_string(n*3);
    
    string s = a + b + c;
   // cout << s << " | ";
    sort(s.begin(), s.end());
    if( s == "123456789") return true;
    return false;
}
