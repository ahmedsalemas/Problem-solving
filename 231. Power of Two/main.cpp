class Solution {
public:
    bool isPowerOfTwo(int n) {
if(n>=0){
                return (n && !(n & (n - 1)));}
        else return false;

    }
};
