#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string word;
    int length;
    cin>>n;
for(int i=0;i<n;i++){

            cin>>word;
        length=word.length();
        if(length>10){
cout<<word[0]<<length-2<<word[length-1]<<endl;}
       else{cout<<word<<endl;}
}
    return 0;
}
