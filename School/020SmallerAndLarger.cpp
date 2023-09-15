vector<int> getMoreAndLess(int arr[], int n, int x) {
    vector<int> v;
    int counts = 0, countr = 0;
    for(int i=0; i<n; i++){
        if(arr[i] <= x) counts++;
        if(arr[i]>=x) countr++;
    }
    v.emplace_back(counts);
    v.push_back(countr);
    return v;
}
