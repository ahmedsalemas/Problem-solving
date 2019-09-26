#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,ans=0;
    cin>>a>>b;
    while(a!=0 && b!=0){
            for(int i=a;i<=b;i++){

                if(floor(sqrt(i))==(sqrt(i))){
                    ans++;}

            }
             cout <<ans<< endl;
                ans=0;
 cin>>a>>b;
            }
    return 0;
}
