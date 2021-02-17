class Solution{
    public:
    vector<int> Kclosest(vector<int>arr, int n, int x, int k) 
    { 
        sort(arr.begin(),arr.end());
        vector<pair<int,int> >vect;
        for(int i=0;i<n;i++)
        {
            vect.push_back(make_pair(abs(arr[i]-x),i));
        }
        sort(vect.begin(),vect.end());
        vector<int>res;
        for(int j=0;j<k;j++)
        {
            res.push_back(arr[vect[j].second]);
        }
        sort(res.begin(),res.end());
        return res;
    }  
};
