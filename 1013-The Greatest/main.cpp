#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A,B,C,D,great;
    cin>>A>>B>>C;
    D=((A+B+(abs(A-B)))/2);

    if (D==A){
    if (A>C)
    {great=A;}
    else{great=C;}}

    else{
    if (B>C)
    {great=B;}
    else{great=C;}}

    cout <<great<< " eh o maior" << endl;
    return 0;
}
