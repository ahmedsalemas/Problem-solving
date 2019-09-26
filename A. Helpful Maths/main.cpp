#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len,b;
    string x;
    cin>>x;
   len= x.length();

    sort(x.begin(),x.end());
    for(int i=0;i<len-1;i++){

        if(x[i]=='+'){
            continue;}
        else {cout <<x[i]<<"+";}


    }
    cout <<x[len-1];
    return 0;
}
