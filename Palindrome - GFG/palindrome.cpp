//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    //Optimized Code here.
		    int num = n;
		    int rev =0;
		    while(n>0){
		        int ld =n % 10;
		        rev = rev * 10 + ld ;
		        n = n/10;
		    }
		    if(num == rev )
		    cout<<"Yes";
		    else 
		    cout<<"No";
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends