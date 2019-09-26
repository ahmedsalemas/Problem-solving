#include <iostream>

using namespace std;

int main()
{
    int n,m,s=0,i;

    while(n>0 && m>0){
            cin>>n>>m;
if (n>0 && m>0){
       if(n<m){
    for (int i =n;i<=m;i++){
s+=i;
        cout<<i<<" ";}

cout<<"Sum="<<s<<endl;
s=0;}
else {
    for (int i =m;i<=n;i++){
s+=i;

        cout<<i<<" ";}
        cout<<"Sum="<<s<<endl;
        s=0;}
    }}
    return 0;
}
