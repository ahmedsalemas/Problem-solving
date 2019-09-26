#include <iostream>

using namespace std;

int main()
{
    int n,arr[3],c1=0,c0=0,ct=0;
    cin>>n;
    for(int i=0;i<n;i++){
            for(int j=0;j<3;j++){
        cin>>arr[j];}
        for(int k=0;k<3;k++){
        if (arr[k]>0){c1++;}
        else{c0++;}
        }
        if(c1>c0){ct++;}
        c1=0;
        c0=0;
    }

    cout <<ct<< endl;
    return 0;
}
