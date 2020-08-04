#include <iostream>

using namespace std;

int main()
{
  int n,start,ans=0;
  cin>>n>>start;
int nums[n];
for(int i=0;i<n;i++){
    nums[i]=start + 2*i;
}
for(int i=0;i<n;i++){
    ans=ans^nums[i];

}
cout<<ans;
}
