#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    string str;
    cin>>N;

    for(int i=0;i<N;i++){

        cin>>str;
        int x=0,y=0;
        for(int j=0;j<str.size();j++){
            if(str[j]=='<'){x++;}
            if(str[j]=='>'&&x>0){y++;x--;}
        }
        cout<<y<< endl;
    }

}
