#include <iostream>

using namespace std;

int main()
{
    int n,k,score[51],c=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>score[i];
    }
    for(int i=0;i<n;i++){
        if(score[i]>=score[k-1] && score[i]>0){
            c++;
        }
    }
    cout <<c<< endl;
    return 0;
}
