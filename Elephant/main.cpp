#include <iostream>

using namespace std;

int main()
{
    int x,minn=0;
    cin>>x;
    minn=minn+x/5;
    x=x%5;
     minn=minn+x/4;
    x=x%4;
     minn=minn+x/3;
    x=x%3;
     minn=minn+x/2;
    x=x%2;
     minn=minn+x/1;
    x=x%1;
    cout <<minn<< endl;
    return 0;
}
