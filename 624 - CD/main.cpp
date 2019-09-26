#include <bits/stdc++.h>
#define isON(p,o) (((p)>>(o))&1)

using namespace std;


int main()
{
    int n,notracks,ans;

    while(~scanf("%d%d",&n,&notracks)){

int maxx=0,arr[21]={0};

    for(int k=0;k<notracks;k++){
         cin>>arr[k];
    }

      for(int i=0; i<(1<<notracks); i++){
               int sum=0;
            for(int j=0; j<notracks; j++)
            {
                if(isON(i,j))      //   if(i&(1<<j))
                {
                    sum+=arr[j];
                }
            }

 if(sum<=n && sum>maxx){
            maxx=sum;
                ans=i;
        }
            }
            for(int j=0; j<notracks;j++){
             if(isON(ans,j)){
                         cout<<arr[j]<<" ";
                    }
        }

              cout<<"sum:"<<maxx<<endl;
    }

    return 0;
}
