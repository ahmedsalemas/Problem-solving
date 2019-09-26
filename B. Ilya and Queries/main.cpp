#include <bits/stdc++.h>

using namespace std;
    string s;

int main()
{
      cin>>s;
    int l,r,m,sum[100001];
    cin>>m;


         for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i+1])
        {
            sum[i+1] = sum[i] + 1;
        }
        else
        {
            sum[i+1] = sum[i];
        }
    }
    while(m--)  {
             cin>>l>>r;
            cout <<sum[r-1]-sum[l-1]<< endl;
    }
    return 0;
}
