#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int N;
   cin>>N;
   while(N--){
    int x,y;
    int N1,N2,D1,D2;
    char opr,sl1,sl2;
    cin>>N1>>sl1>>D1>>opr>>N2>>sl2>>D2;

    switch (opr)
    {
        case '+':
            x= ((N1*D2) + (N2*D1));
            y= (D1*D2);
            break;
        case '-':
            x= ((N1*D2) - (N2*D1));
            y= (D1*D2);
            break;
        case '*':
            x= (N1*N2);
            y= (D1*D2);
            break;
        case '/':
            x= (N1*D2);
            y= (N2*D1);
            break;

    }
cout<<x<<"/"<<y<<" = ";

int ans= __gcd(x,y);
if(ans<0){
    ans=abs(ans);
}
x=x/ans;
y=y/ans;


cout<<x<<"/"<<y<<endl;
   }
   }
