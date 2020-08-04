#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s,t;
  char ans;
  cin>>s>>t;
   sort(s.begin(), s.end());
  sort(t.begin(), t.end());

cout<<s<<endl<<t<<endl;
  for(int i=0;i<t.size();i++){
    if(s[i]!=t[i]){ans=t[i];break;}
  }

  cout<<ans;
}
