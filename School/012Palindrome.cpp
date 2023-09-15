string is_palindrome(int n){
		    int t = n, rev = 0;
		    while(t){
		        int rem = t%10;
		        rev = (rev * 10) + rem;
		        t = t/10;
		    }if(rev == n) return "Yes";
		    return "No";
		}
