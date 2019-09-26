#include <iostream>

using namespace std;

int main()
{
    int n,x,y,z,xs=0,ys=0,zs=0;
    cin>>n;
    for(int i=1;i<=n;i++){
       cin>>x;
       cin>>y;
       cin>>z;
       ys+=y;
        xs+=x;
        zs+=z;
    }
     if (xs == 0 && ys == 0 && zs == 0){
            cout << "YES" << endl;
       }
       else{
            cout << "NO" << endl;
       }
    return 0;
}
