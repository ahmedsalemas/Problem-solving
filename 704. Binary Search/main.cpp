class Solution {
public:
    int search(vector<int>& nums, int target) {

        int a = 0, b = nums.size()-1,flag=0,o;
while (a <= b) {
int k = (a+b)/2;
if (nums[k] == target) {
flag =1;
    o=k;
}
if (nums[k] < target) a = k+1;
else b = k-1;
}
       if(flag==1) return o;
        else return -1;
    }
};
