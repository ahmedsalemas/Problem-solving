#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long a = 0, b = 1e10,k;
vector<int>stalls;
int N,C;

bool valid(long long k){
int cows =C-1;
int s=stalls[0];
for(int i=1;i<N;i++){

if(stalls[i]-s>=k){
        s=stalls[i];
cows--;

}
}
if(cows<=0){return true;}
else return false;
}

int main()
{
  int n;
  cin>>n;

  while(n--){

    cin>>N>>C;

    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        stalls.push_back(x);
    }

    sort(stalls.begin(),stalls.end());

while (a <= b) {
 k = (a+b)/2;
if (valid(k)) a=k+1;
else b = k-1;
}
if(valid(b))cout<<b<<endl;
else cout<<a<<endl;
stalls.clear();
a = 0, b = 1e10;
  }
}
