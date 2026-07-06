class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int sum = 0;

        for(int i = 0; i < nums.size(); i++){

            sum += nums[i];

        }



        int half = sum / 2;

        int j = 0;

        int lsum = 0;

        for(j = 0; j < nums.size(); j++){

            sum -= nums[j];

            if(sum == lsum){
                break;
            }

            lsum += nums[j];

        }

        if(j == nums.size()){
            return -1;
        }

        return j;
    }
};