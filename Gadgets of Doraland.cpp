class Solution{
    public:
    vector<int> TopK(vector<int>& array, int k)
    {
        map<int ,int >mp;
        
        for (int i=0;i<array.size();i++)
        {
            mp[array[i]]++;
        }
        
        vector<pair<int ,int >>v;
        
        for ( auto i:mp)
        {
            v.push_back({i.second,i.first});
        }
        
        sort(v.begin(),v.end(),greater<pair<int ,int>>());
        
        vector<int >ans;
        
        for (auto i : v)
        {
            if (k>0)
            {
                ans.push_back(i.second);
                k--;
            }
        }
        return ans;
        
        
    }
};
