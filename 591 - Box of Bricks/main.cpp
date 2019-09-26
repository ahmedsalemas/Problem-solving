#include <iostream>

using namespace std;

int main()
{
    int n,h[101],x,c=0,ans=0,p=1;
    cin>>n;

    while(n!=0){

  for(int i=0;i<n;i++){
    cin>>h[i];
    c+=h[i];
}
x=c/n;
for(int i=0;i<n;i++){
    if(h[i]>x){ans+=h[i]-x;}
}
  cout <<"Set #"<<p<<endl;
  cout <<"The minimum number of moves is "<<ans<<"."<< endl;
  cout<<endl;
p++;
ans=0;
c=0;
x=0;
cin>>n;
}

    return 0;
}

