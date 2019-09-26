#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum[100000],x,y,q,ans=0,summ[100000]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>sum[i];
    }
    for(int i=0;i<n;i++){
            summ[i]=sum[i];
            if(i==0){continue;}
        summ[i]+=summ[i-1];
    }
    cin>>q;
    for(int i=0;i<q;i++){
    cin>>x>>y;
    if(x==0 || y==0){
        ans=summ[y];
        cout<<ans<<endl;
    }
    else{
    ans=summ[y]-summ[x-1];
    cout<<ans<<endl;
    }
    }


    return 0;
}
