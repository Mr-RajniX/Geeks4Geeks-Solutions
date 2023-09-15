vector<int> findIndex(int a[], int n, int key){
    vector<int> v;
    v.push_back(firstOccurance(a, n, key));
    v.push_back(lastOccurance(a, n, key));
    return v;
}
int firstOccurance(int a[], int n, int key){
    for(int i = 0; i<n; i++)
        if(a[i] == key) return i;
    return -1;
}
int lastOccurance(int a[], int n, int key){
    for(int i = n-1; i>=0; i--)
        if(a[i] == key) return i;
    return -1;
}
