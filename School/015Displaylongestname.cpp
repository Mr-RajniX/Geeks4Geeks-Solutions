string longest(string names[], int n){
    int mx = 0, index = 0;
    for(int i=0; i<n; i++){
        if(names[i].length() > mx) {
            mx = names[i].length();
            index = i;
        }
    }return names[index];
}
