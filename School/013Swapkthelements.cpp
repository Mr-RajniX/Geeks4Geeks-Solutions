void swapKth(int *arr, int n, int k) {
	    int a = arr[k-1];
	    arr[k-1] = arr[n-k];
	    arr[n-k] = a;
	}
