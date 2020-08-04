#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countDivisibles(int A, int B, int M)
{
    // Add 1 explicitly as A is divisible by M
    if (A % M == 0)
        return (B / M) - (A / M) + 1;

    // A is not divisible by M
    return (B / M) - (A / M);
}
int main()
{
int y,k;
long long n;
cin>>y>>k>>n;

cout << countDivisibles(y, n, k) << endl;


}
