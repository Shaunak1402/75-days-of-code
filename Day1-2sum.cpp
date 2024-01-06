class Solution {
public:
    vector<int> twoSum(vector<int>& v, int k) {
        int n = v.size();
        map<int,int> mp;
        for(int i = 0; i < n; i++)
        {
            mp[v[i]] = i+1;
        }
        vector<int> ans;
        int flg = 0;
        for(int i = 0; i < n; i++)
        {
            if(mp[k-v[i]]!=0 && mp[k-v[i]]!=(i+1))
            {
                ans.push_back(i);
                ans.push_back(mp[k-v[i]]-1);
                break;
            }
        }
        return ans;
    }
};