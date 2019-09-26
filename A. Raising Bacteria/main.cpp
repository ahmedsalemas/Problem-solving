#include <iostream>
using namespace std;

int main()
{
    int x, ans=0;

    cin >> x;

    x = x*2;

    while (x = x / 2)
        ans = ans + (x % 2);

    cout << ans << endl;
    return 0;
}
