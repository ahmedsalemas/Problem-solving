#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,cntt;
    cin>>N;

    while(N!=0){

int arr[N],ar[N];
int Carlos=0,Marcelo=0,cnt=0;

for(int i=0;i<N;i++){
        cin>>arr[i];
        ar[i]=arr[i];
}

sort(ar,ar+N);

while(cntt!=N){
        cntt=0;
for(int i=0;i<N-1;i++){

    if(arr[i]>arr[i+1]){cnt++;swap(arr[i],arr[i+1]);}
    if(cnt%2!=0 &&cnt>0){Marcelo++;}
    else if(cnt%2==0 &&cnt>0){Carlos++;}
}

for(int i=0;i<N;i++){
        if(arr[i]==ar[i]){cntt++;}
        else if (arr[i]!=ar[i]) {break;}
}
    }

if(Marcelo>Carlos){cout<<"Marcelo"<<endl;}
else{cout<<"Carlos"<<endl;}
    cin>>N;

    }
}
