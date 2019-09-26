#include <iostream>

using namespace std;

int main()
{
    int n,m,a;
    long long r,c;
    cin>>n>>m>>a;
    if (n%a == 0)
    {r=n/a;}
    else{r=((n/a)+1);}
    if (m%a == 0)
    {c=m/a;}
    else{c=((m/a)+1);}
    cout<<r*c<<endl;
    return 0;
}
