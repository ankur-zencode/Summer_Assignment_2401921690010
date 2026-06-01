*136. Single Number*                                                                                                                                                                                                class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int answer = 0;

        for (int arr : nums) {
            answer ^= arr;   // XOR operation
        }

        return answer;
    }
};                                                                                                                                                                                                                           description-                                                                                                                                                                                                               The same numbers cancel each other out:
a ^ a = 0
And:
a ^ 0 = a