#include <iostream>

using namespace std;


int zero(int x){
 int n=0,ans=0,pow=1;

  while(x!=0){

    n=x%10;
    x=x/10;
     if(n!=0){
        ans+=n*pow;
        pow*=10;
     }

  }
  return ans;}



int main()
{
  int a,b,c=0,ans=0;
  cin>>a>>b;
  c=a+b;
  a=zero(a);
  b=zero(b);
  c=zero(c);
  ans=a+b;
  if(ans==c){cout<<"YES"<<endl;}
  else{cout<<"NO"<<endl;}
}
