#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

 string str;
 int cnt=0;
 cin>>str;
 for(int i=0;i<str.size()-1;i++){

        if(str[i]==str[i+1]){cnt++;if(cnt>=6){break;}}
        else{cnt=0;}




 }
 if(cnt>=6){cout<<"YES"<<endl;}
 else{cout<<"NO"<<endl;}

}
