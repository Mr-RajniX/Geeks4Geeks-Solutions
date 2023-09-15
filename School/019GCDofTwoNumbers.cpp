int gcd(int A, int B) 
	{ 
	    if(A==B) return A;
	    if(A==0) return B;
	    if(B==0) return A;
	   // int ans = min(A,B);
	   // if(ans > 1){
	   //     if(A%ans==0 && B%ans==0) return ans;
	   //     ans--;
	   // }return 1;
	   while(B != 0){
	       int t = B;
	       B = A%B;
	       A = t;
	   }return A;
	} 
