class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);

        int left=0;
        int right=n-1;
        int k=n-1;

        while(left<=right){
            if(abs(nums[left])> abs(nums[right])){
                ans[k]=pow(nums[left],2);
                left++;
            }

            else{
                ans[k]=pow(nums[right],2);
                right--;
            }
            k--;
        }

       return ans; 
    }
};