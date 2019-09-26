#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[101],fi=0,la=0,minn;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     minn=(abs(arr[0]-arr[n-1]));
fi=1;
la=n;
    for(int i=0;i<=n;i++){
        if((abs(arr[i]-arr[i+1]))<minn){
        minn=(abs(arr[i]-arr[i+1]));
        fi=i+1;
        la=i+2;}

    }
    cout<<fi<<" "<<la;
    return 0;
}
