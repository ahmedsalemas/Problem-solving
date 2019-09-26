#include <bits/stdc++.h>
#define isON(p,o) (((p)>>(o))&1)

using namespace std;

int main()
{
    int t,n,p,sum=0,flag=0;


    cin>>t;

    while(t--){
            int arr[22];
        cin>>n>>p;
    for(int i=0;i<p;i++){
        cin>>arr[i];
    }
     for(int i=0; i<(1<<p); i++){


for(int j=0; j<p; j++)
            {
                if(isON(i,j))      //   if(i&(1<<j))
                {
                    sum+=arr[j];
                }

            }
 if(sum==n){flag=1;break;}
             else{flag=0;}
            sum=0;
            }
         if(flag==1)  cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
    }
    return 0;
}
