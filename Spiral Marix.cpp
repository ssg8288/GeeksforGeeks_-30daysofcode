#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{

public:
int findK(vector<vector<int>> &a, int n, int m, int k)
{
// Your code goes here
vector<int>v;
int top = 0;
int bottom = n - 1;
int right = m - 1;
int left = 0;
int side = 0;
int constexpr total_sides = 4;
while(top <= bottom && left <= right){
if(side == 0){
for(int i = left;i<=right;++i){
v.push_back(a[top][i]);
}
top++;
}
if(side == 1){
for(int i = top;i<=bottom;++i){
v.push_back(a[i][right]);
}
right--;
}
if(side == 2){
for(int i = right;i>=left;--i){
v.push_back(a[bottom][i]);
}
bottom--;
}
if(side == 3){
for(int i = bottom;i>=top;--i){
v.push_back(a[i][left]);
}
left++;
}
side = (side + 1) % total_sides;
}
return v[k-1];

}

};

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}  // } Driver Code Ends
