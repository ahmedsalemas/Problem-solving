#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a, b;
    cin>>a>>b;
    while(a < b){

    b -= (b & -b);
}
cout<< b;
}
