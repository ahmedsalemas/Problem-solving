#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long n,magic;
vector<long long>need;
vector<long long>has;
long long a = 0, b = 2e9+1 ,k;


bool valid(long long k){
long long powder = magic;

for(int i=0;i<n;i++){

    if(has[i]>=k*need[i])
    {
        continue;
    }
        else powder-=k*need[i]-has[i];

    if(powder<0){return false;}
    else{return true;}

}
}
int main()
{
cin>>n>>magic;


for(int i=0;i<n;i++){
        int x;
        cin>>x;
    need.push_back(x);
}
for(int i=0;i<n;i++){
        int x;
        cin>>x;
    has.push_back(x);
}

while (a <= b) {
k= (a+b)/2;
if (valid(k)) {a=k+1;}
else b=k-1;
}
cout<<--k<<endl;
}
