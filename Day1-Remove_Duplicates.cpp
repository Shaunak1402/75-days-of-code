class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        int n = v.size();
        vector<int> a;
        a.push_back(v[0]);
        for(int i = 1; i < n; i++)
        {
            if(v[i]==a.back()) continue;
            else a.push_back(v[i]);
        }
        for(int i = 0; i < a.size(); i++)
        {
            v[i] = a[i];
        }
        return a.size();
    }
};