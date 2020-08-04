class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {


        int a = 0, b = nums.size()-1;

while (a <= b) {

int k = (a+b)/2;
if (nums[k] == target) {
        return k;

}

else if (nums[k] < target) a = k+1;

else b = k-1;

}
        return b+1;
    }

};
