#include <bits/stdc++.h>
#define isON(p,o) (((p)>>(o))&1)
using namespace std;
    long long  n, l, r, x,arr[1000001],ans=0;

int main()
{
    cin>> n>>l>>r>>x;


            for(int K=0;K<n;K++){
                cin>>arr[K];
            }


              for(int i=0; i<(1<<n); i++){
                   long long maxx=-1,minn=1000000,sum=0;
            for(int j=0; j<n; j++)
            {
                if(isON(i,j))      //   if(i&(1<<j))
                {
                    sum+=arr[j];
                    maxx=max(maxx,arr[j]);
                    minn=min(minn,arr[j]);
                }
            }

            if(sum>=l && sum<=r && (maxx-minn)>=x){
                ans++;
        }
            }

    cout <<ans<< endl;
    return 0;
}
