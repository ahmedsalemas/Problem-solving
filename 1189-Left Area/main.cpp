#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c;
    double M[12][12],sum=0;
    char t;
int cnt=0;
    cin>>t;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin>>M[i][j];
        }
    }
        cout <<fixed<<setprecision(1);

     for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            if(i>j&&i+j<11){
            sum+=M[i][j];
            cnt++;}
        }
}
 if(t=='S'){cout<<sum<<endl;}
else if(t=='M'){cout<<sum/cnt<<endl;}



    return 0;
}
