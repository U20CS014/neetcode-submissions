class Solution {
public:

    static bool comparator(string &a, string &b){
        return a + b > b + a;
    }

    string largestNumber(vector<int>& nums) {
        

        vector<string> ans;

        for(auto it : nums){
            ans.push_back(to_string(it));
        }

        sort(ans.begin(), ans.end(), comparator);

        string res = "";

        for(auto it : ans){
            res += it;
        }

        return res[0] == '0' ? "0" : res;
    }
};