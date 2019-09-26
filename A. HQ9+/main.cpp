#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int flag=0;
    char arr [105];
    cin>>arr;
    for(int i=0;i<strlen(arr);i++){
        if (arr[i]=='H'||arr[i]=='Q'||arr[i]=='9'){
            cout<<"YES"<<endl;
            flag=1;
            break;
            }
        }
        if(flag==0){
cout<<"NO"<<endl;}
    return 0;
}
