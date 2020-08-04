#include <iostream>

using namespace std;

int main()
{
int N;
cin>>N;
while(N--){
    int L,arr[51],ans=0;
cin>>L;
for(int i=0;i<L;i++){
    cin>>arr[i];
}
for(int i=0;i<L-1;i++){
    for(int j=i+1;j<L;j++){
if(arr[i]>arr[j]){swap(arr[i],arr[j]);ans++;}
}
}
  cout<<"Optimal train swapping takes "<<ans<<" swaps."<<endl;
}
}
