#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int o=0;
int main()
{
    vector<vector<int> > grid;

    grid =  {{3,-1,-3,-3,-3},{2,-2,-3,-3,-3},{1,-2,-3,-3,-3},{0,-3,-3,-3,-3}};


        for(int i=0;i<grid.size();i++){

        int a = 0, b = grid[i].size()-1;

while (a <= b) {

int k = (a+b)/2;

if (grid[i][k] < 0 && (grid[i][k-1]>=0 || k ==0)) {
o+=(grid[i].size()-k);
        cout<<o<<endl;
}

 if (grid[i][k] >= 0) a = k+1;
else b = k-1;

}
        }
cout<<o<<endl;
}
