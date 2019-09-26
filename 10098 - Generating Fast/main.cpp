#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s1;
        sort(s1.begin(),s1.end());
        do{
		cout<<s1<<endl;
	}while(next_permutation(s1.begin(), s1.end()));

    cout<<endl;}
    return 0;
}
