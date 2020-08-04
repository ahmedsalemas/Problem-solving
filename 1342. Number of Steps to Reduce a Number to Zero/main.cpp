#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
 int num,cnt=0;
 cin>>num;
 while(num!=0){
 if(num%2==0){num=num/2;cnt++;}
 else  if(num%2!=0){num=num-1;cnt++;}

}
cout<<cnt<<endl;
}
