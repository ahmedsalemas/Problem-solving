#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0,sum=0,arr[100000];
        cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    /* for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }*/
   for (int i = 0; i < n; i++)
        if (arr[i] >= c)
        {
            sum++;
            c += arr[i];
        }

    cout << sum << endl;
    return 0;
}
