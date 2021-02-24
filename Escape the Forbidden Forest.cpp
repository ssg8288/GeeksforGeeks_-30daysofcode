class Solution
{
    public:
    int build_bridges(string str1, string str2)
    {
        int n=str1.size(),m=str2.size();
vector<vector<int>> a(n+1,vector<int> (m+1,0));
int i,j;
for(i=1;i<=n;i++)
{
for(j=1;j<=m;j++)
{
if(str1[i-1]==str2[j-1])
a[i][j]=1+a[i-1][j-1];
else
a[i][j]=max(a[i-1][j],a[i][j-1]);
}
}
return a[n][m];

    }
};
