#include <bits/stdc++.h>
using namespace std;


 const int len = 1e4 + 5;
  int f[len];
   int t, n, x, mx = 0;


    int main(){

         cin >> t;

          while(t--){
                scanf("%d", &n);
          fill(f, f+len, 0);
           for(int i = 0; i < n; i++){
                    cin >> x;
                     f[x]++; }

           for(int j = 0; j < 10001; j++){
                if(f[j] + f[j + 1] > mx) mx = f[j] + f[j + 1]; }

           cout << mx << endl; mx = 0; }


           return 0;
           }
