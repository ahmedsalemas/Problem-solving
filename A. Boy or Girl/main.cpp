#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c=0;
    char arr[150];
    cin>>arr;
   int len= strlen(arr);
   sort(arr, arr+len);
   for(int i=0;i<len;i++){
   if(arr[i]!=arr[i+1]){
   c++;
   }
   }
   if(c%2==0){cout <<"CHAT WITH HER!"<< endl;}
   else if (c%2==1){cout <<"IGNORE HIM!"<< endl;}

    return 0;
}
