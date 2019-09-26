#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int aa,bb,c1=0,c2=0;
    string s1,s2;
    cin>>s1>>s2;
   aa=s1.length();


   for(int i=0;i<aa;i++){
    s1[i]=tolower(s1[i]);
   }
    for(int i=0;i<aa;i++){
    s2[i]=tolower(s2[i]);
   }
    if(s1>s2){
		cout<<"1\n";
	}else if(s1<s2){
		cout<<"-1\n";
	}else if(s1==s2){
		cout<<"0\n";
	}

 	return 0;
 }
