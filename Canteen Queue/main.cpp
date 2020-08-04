#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,M;
    cin>>N;

    for(int i=0;i<N;i++){
        cin>>M;
        int arr1[M],arr2[M],cnt=0;
            for(int j=0;j<M;j++){
        cin>>arr1[j];
        arr2[j]=arr1[j];
            }
            sort(arr1,arr1+M,greater<int>());
                        for(int j=0;j<M;j++){
                            if(arr1[j]==arr2[j]){cnt++;}
                        }
cout<<cnt<<endl;
    }

}
