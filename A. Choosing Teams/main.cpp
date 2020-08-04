#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,k,x,ans;
vector<int>v1;
cin>>n>>k;
for(int i=0;i<n;i++){
    cin>>x;
    v1.push_back(x);
}
for(int i=0;i<v1.size();i++){
    if((v1.at(i))+k>5){
            v1.erase(v1.begin()+i);
i--;
}
}
ans=v1.size()/3;
cout<<ans<<endl;
}
