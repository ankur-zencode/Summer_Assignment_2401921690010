*leetcode169. Majority Element*                                                                                                                                                                                     class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ct = 0;
        int student = 0;
        for (int num : nums) {
            if (ct == 0) {
                student = num;
            }
            if (num == student) {
                ct++;
            } else {
                ct--;
            }
        }

        return student;
    }
};                                                                                                                                                                                                                              description-                                                                                                                                                                                                                  To begin with:
count = 0
candidate = none
Examine each number:
If count == 0 → choose current number as candidate
Count++ if number == candidate; otherwise, count--