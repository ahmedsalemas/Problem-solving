#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int cntu=0,cntl=0;
 string str;
 cin>>str;

 for(int i=0;i<str.size();i++){
 if(isupper(str[i])){cntu++;}
 else{cntl++;}
 }

 if(cntu>cntl){
      for(int i=0;i<str.size();i++){
            str[i] = toupper(str[i]);
      }
        cout<<str;}

 else{for(int i=0;i<str.size();i++){
            str[i] = tolower(str[i]);
 }
        cout<<str;}
}
