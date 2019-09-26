#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int freq[26]={0};
    int n,c=0;
    string k;
    cin>>n;
    cin>>k;
    for(int i=0;i<n;i++){

   k[i]= toupper(k[i]);
   }

    for(int i=0;i<n;i++){
++freq[k[i]-'A'];
   }
    for(int i=0;i<26;i++){
if(!freq[i]){
    cout<<"NO\n";
    return 0;
}
   }
    cout<<"YES"<<endl;

    return 0;
}

