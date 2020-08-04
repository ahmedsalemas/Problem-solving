class Solution {
public:
    vector<int> ret;
	vector<int> twoSum(vector<int>& nums, int target) {
        int head = 0;
        int tail = nums.size() - 1;

        for (;;){
            int sum = nums[head] + nums[tail];
            if (sum > target)
                tail--;
            else if (sum < target)
                head++;
            else {
                ret.push_back(head + 1);
                ret.push_back(tail + 1);
                return ret;
            }

        }
    }
};
