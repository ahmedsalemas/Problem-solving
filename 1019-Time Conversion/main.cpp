#include <iostream>

using namespace std;

int main()
{
    int sec, h,m,s;
    cin>>sec;
    h = ((sec/3600)%3600);
    m = ((sec/60)%60);
    s = ((sec-(m*60))%60);
    cout <<h<<":"<<m<<":"<<s<< endl;
    return 0;
}
