class Solution {
public:
    int rot_index(vector<int>&a,int l,int r,int n){
        while(l<=r){
            int mid=l+(r-l)/2;
            if(a[mid]>a[n-1]&&a[mid+1]<=a[n-1])
                return mid;
            else if(a[mid]<a[n-1])
                r=mid-1;
            else
                l=mid+1;
        }
      return -1;
    }
    int findMin(vector<int>& nums) {
        int n=nums.size();
        if(nums[0]<=nums[n-1])
            return nums[0];
        int ans=rot_index(nums,0,n-1,n);
        return nums[ans+1];
    }
};
