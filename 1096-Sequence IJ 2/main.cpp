#include <iostream>

using namespace std;

int main()
{
    int i=1;
    //for(int i=1;i<=9;i+=3){
    for(int j=60;j>=0;j-=5){
    cout << "I="<<i<<" "<<"J="<<j << endl;
    i+=3;
    }
    return 0;
}
