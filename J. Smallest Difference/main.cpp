#include <bits/stdc++.h>

using namespace std;
 const int len = 1e4 + 5;
   int a[len],freq[len];
   int t;
       int anss=0,n;
int main()
{

    cin>>t;
    while(t--){
                    cin>>n;

          fill(a, a+len, 0);
           fill(freq, freq+len, 0);


        for(int i=0;i<n;i++){
            cin>>a[i];
        }
    for(int i=0;i<n;i++){
        ++freq[a[i]-0];
   }
for(int i=0;i<10001;i++){
    if(freq[i]+freq[i+1]>anss){anss=freq[i]+freq[i+1];}
}
cout<<anss<<endl;
anss=0;
    }

    return 0;
}
