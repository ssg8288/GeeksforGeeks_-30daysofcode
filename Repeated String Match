//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{

    public:
    int repeatedStringMatch(string A, string B)
{
// Your code goes here
int res=1;

int count = B.length() / A.length();
string str = A;
for (int i = 0; i <= count+2; i++)
{
if (str.find(B) != string::npos)
{
return res;;
}
else{
str=str+A;
res+=1;
}
}

return -1;
}
  
};

// { Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution obj;
        cout<<obj.repeatedStringMatch(A,B)<<"\n";
    }
    return 0;
}
  // } Driver Code Ends
