#include <iostream>

using namespace std;

int main()
{
   int a,b;
   cin>>a>>b;
   if(a==b && a!=0 && b!=0){
    cout<<"Yes";
   }
   else if (abs(a-b)==1)
    cout<<"YES"<<endl;
   else {
    cout<<"NO"<<endl;
   }
}
