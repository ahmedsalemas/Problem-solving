#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l;
    string str;
    cin>>n>>str;
    l=str.length();
    sort(str.begin(),str.end());
    cout <<str<< endl;
    return 0;
}
