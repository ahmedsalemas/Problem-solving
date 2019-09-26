#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int k;
cin>>k;
getchar();
while(k--){

int f=0;
    stack<char> s;
    string c;

     getline(cin,c);
     int l=c.length();

        if (c.compare("\n")==0){ cout<<"Yes\n"; continue;}
        if (c.size()==1|| c.size()%2!=0){cout<<"No\n"; continue;}

for(int i=0;i<l;i++){

if(c[i]=='(' || c[i]=='[')
{
s.push(c[i]);
}
 else if (c[i]==')'&&!s.empty()&&s.top()=='(')
                s.pop();
            else if (c[i]==']'&&!s.empty()&&s.top()=='[')
                s.pop();
            else f=1;

        }


if(s.empty()&&f ==0 )
{cout<<"Yes"<<endl;}

else
{cout<<"No"<<endl;}

}

}
