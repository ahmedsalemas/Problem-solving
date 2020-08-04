#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string str;
long long rubles ;
int has[3],price[3],recipe[3]={0,0,0};
 long long a = 0, b = 1e13,k;


bool valid(long long k){
long long money =rubles;

for(int i=0;i<3;i++){

if(has[i]>=recipe[i]*k){continue;}
else{money-=(price[i] * (recipe[i]*k - has[i]));}

if(money<0){return false;}

}
return true;
}

int main()
{
 cin>>str;

 for(int i=0;i<3;i++)
    cin>>has[i];

  for(int i=0;i<3;i++)
    cin>>price[i];

 cin>>rubles ;




 for(int i=0;i<str.size();i++){
     if(str[i]=='B') recipe[0]++;
else if(str[i]=='S') recipe[1]++;
else if(str[i]=='C') recipe[2]++;
}

while (a <= b) {
k = (a+b)/2;
if (valid(k))
        a=k+1;

else  b=k-1;
}
cout<<--a<<endl;
}
