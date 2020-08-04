#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,x,cnt=0,v,cards=0;
cin>>n>>x;
for(int i=0;i<n;i++){
    cin>>v;
    cnt+=v;
}
cnt=abs(cnt);
int o=x;
while(cnt!=0){
    if (cnt-o>=0){cards++;cnt-=o;
    }
    else o--;
}
cout<<cards<<endl;
}
