//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++


class Solution{
public:
long long findNth(long long N)
{

long long ans=0;
int i=0;
while(N) {
ans+=(pow(10,i)*(N%9));
N/=9;
i++;
}
return ans;
}
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n , ans;
		cin>>n;
		Solution obj;
		ans = obj.findNth(n);
		cout<<ans<<endl;
	}
}

  // } Driver Code Ends
