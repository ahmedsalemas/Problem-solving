#include <iostream>

using namespace std;

int main()
{
    int n,arr[11],c=0,p=0;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<10;j++){
            cin>>arr[j];
        }

    if(i==0)
    cout << "Lumberjacks:" << endl;

     for (int k = 0; k < 9; k++) {
			if(arr[k] > arr[k+1]) {
                   c++;
    }

 else if((arr[k] < arr[k+1])) {
                   p++;
		}



     }
//cout<<c<<endl;
//cout<<p<<endl;

if(p==9||c==9) {cout<<"Ordered"<<endl;}
    else{cout<<"Unordered"<<endl;}
p=0;
c=0;
    }

    return 0;
}
