class Solution {
public:
    void wiggleSort(vector<int>& nums) {

        if(nums.size() == 2){

            if(nums[0] > nums[1]){
                swap(nums[0], nums[1]);
            }
            return;
        }
        
        int c = 1;

        while(c > 0){

            c = 0;

            for(int i = 1; i < nums.size() - 1; i++){

                if(i % 2 == 1){
                    
                    if(nums[i] < nums[i - 1]){
                        swap(nums[i], nums[i - 1]);
                        c++;
                    }

                    if(nums[i] < nums[i + 1]){
                        swap(nums[i], nums[i + 1]);
                        c++;
                    }

                }
                else{
                    if(nums[i] > nums[i - 1]){
                        swap(nums[i], nums[i - 1]);
                        c++;
                    }

                    if(nums[i] > nums[i + 1]){
                        swap(nums[i], nums[i + 1]);
                        c++;
                    }
                }
            }
        }


    }
};
