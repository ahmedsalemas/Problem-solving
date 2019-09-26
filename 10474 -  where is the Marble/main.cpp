#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q,arrn[10000],arrq[10000],p=1,temp=0,found=0;
    cin>>n>>q;

while (n!=0 && q!=0){
        for(int i=0;i<n;i++){
            cin>>arrn[i];
        }
        sort(arrn,arrn+n);
       /* for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if(arrn[i] > arrn[j]) {
				 swap(arrn[i],arrn[j]);
			}
		}
	}*/
//for(int i=0;i<n;i++){cout<<arrn[i]<<endl; }

        for(int m=0;m<q;m++){
        cin>>arrq[m];
        }


            cout<<"CASE# "<<p<<":"<<endl;
        for(int v=0;v<q;v++){
                for(int l=0;l<n;l++){
                    if(arrn[l]==arrq[v]){

                    cout<<arrq[v]<<" found at "<<l+1<<endl;
                        found=1;

                    break;
                    }
                }

             if(found==0){ cout<<arrq[v]<<" not found"<<endl;
            }
found=0;

        }

           cin>>n>>q;
           p++;
 }
    return 0;
}
