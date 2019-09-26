#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n,m;
    long arrn[200000],arrm[200000];
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){cin>>arrn[i];}
    for(int i=0;i<m;i++){cin>>arrm[i];}
    sort(arrn,arrn+n);

    for(int i=0;i<m;i++){
     cout<<upper_bound(arrn, arrn+n, (arrm[i]))-arrn<<" ";

        }
    return 0;
}
