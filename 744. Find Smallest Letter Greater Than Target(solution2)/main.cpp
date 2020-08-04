class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {




        int a = 0, b = letters.size()-1;

while (a <= b) {
int k = (a+b)/2;
    if(target>=letters[letters.size()-1] || target<letters[0])
    {return letters[0];}

else if (letters[k] <= target) a = k+1;
else b = k-1;
}
        return letters[a];
    }
};
