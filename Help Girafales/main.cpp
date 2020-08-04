#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    cin>>N;

    while(N!=0){
     int M,ans=0;
        string name,sign;
     map <string,string> org;


for(int i=0;i<N;i++){
    cin>>name>>sign;
    org.insert({ name, sign });
}

cin>>M;
for(int i=0;i<M;i++){
    cin>>name>>sign;
    string str=org[name];
    int cnt=0;
    for (int j=0;j<sign.size();j++){
        if (sign[j]!=str[j]){cnt++;}
    }
if(cnt>1){ans++;}
}
cout<<ans<<endl;
        cin>>N;
    }
}
