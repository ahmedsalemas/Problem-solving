#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,k,arrneed[100001],arrhas[100001],low,high,mid,cnt=0,lo,mid,hi;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>arrneed[i];
    }
     for(int i=0;i<n;i++){
        cin>>arrhas[i];
    }
      for(int i =0;i<n;i++){
        if(arrhas[i]>=arrneed[i]){

        }
      }
      while(k>=0)
        {
            for(int i=0; i<n; i++)
            {
                if(arrhas[i]>=arrneed[i])
                {
                    arrhas[i]-=arrneed[i];
                }
                else
                {
                    k=k-(arrneed[i]-arrhas[i]);
                    arrhas[i]=0;
                }
            }
            if(k>=0)
                cnt++;

        }
        cout<<cnt<<endl;

    return 0;
}

