#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x,s=0,a;
    int c;
    for (int i =1;i<=6;i++){
    cin>>x;
    if(x>0){
    c++;
    s+=x;}
    }
    a=s/c;
cout<<fixed<<setprecision(1);
    cout <<c<< " valores positivos" << endl;
    cout <<a<< endl;

    return 0;
}
