#include <iostream>

using namespace std;

int main()
{
    long long n,anss=0;
    cin>>n;
 if(n%2==0)
 {
     anss=n/2;
     cout<<anss;
 }
 else if (n%2){
      anss= ((((n+1)/2)*-1));

     cout<<anss;
 }
    return 0;
}
