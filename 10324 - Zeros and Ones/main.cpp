#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 bool x=true;
  while (x){
int a,b,flag=0,m=1,n;

string arr;
cin>>arr;
if(arr==" "){
    x=false;
    break;
}
else{
cin>>n;

 int l=arr.length();
cout<<"Case "<<m<<":"<<endl;

for(int j=0;j<n;j++){
        cin>>a>>b;

    for(int i=a;i<b;i++){

        if(arr[i]==arr[i+1]){flag=0;}

        else{flag=1;}


        }
        if(flag==0){
            cout<<"YES"<<endl;}
        else if (flag==1){
             cout<<"NO"<<endl;}
             ;
}
  }
  }



    return 0;
}
