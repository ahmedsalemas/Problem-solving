#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,c2=0,c1=0;
    bool f1=false,f2=false,f3=false;
    string s1;
    cin>>s1;
    l=s1.length();

    if(islower(s1[0])){f3=true;}

    for(int i=1;i<l;i++){
       if(isupper(s1[i])){c2++;}
    }
if(c2==(l-1)){f2=true;}



      for(int i=0;i<l;i++){
       if(isupper(s1[i])){
       c1++;}
       }
       if(c1==l){f1=true;}

if((f3==true)&&(f2==true)){
    s1[0]=toupper(s1[0]);
     for(int i=1;i<l;i++){
      s1[i]=tolower(s1[i]);
    }
    cout<<s1<<endl;
}

else if(f1==true){
    for(int i=0;i<l;i++){
      s1[i]=tolower(s1[i]);
    }
      cout<<s1<<endl;
}
else{cout<<s1<<endl;}



       return 0;
}
