class Solution {
public:
    int maxProfit(vector<int>& v) {
        int n = v.size();
        int cur_min = v[0], ans = 0;
        for(int i =0; i < n; i++)
        {
            cur_min = min(v[i], cur_min);
            ans = max(ans, v[i]-cur_min);
        }
        return ans;
    }
};