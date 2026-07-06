class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> umap;

        for(int i = 0; i < s.length(); i++){

            umap[s[i]]++;

        }

        int e = INT_MAX, o = INT_MIN;

        for(auto it : umap){

            if(it.second % 2 == 0){
                e = min(e, it.second);
            }

            if(it.second % 2 != 0){
                o = max(o, it.second);
            }

        }

        return o - e;
    }
};