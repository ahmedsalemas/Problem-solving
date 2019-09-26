#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string stdd;
    cin>>stdd;
    for(int i=0;i<stdd.length();i++){
            if(isupper(stdd[i])){
			stdd[i] = tolower(stdd[i]);
		}
       if(stdd[i] == 'a' || stdd[i] == 'e' || stdd[i] == 'i' || stdd[i] == 'o' || stdd[i] == 'u' || stdd[i] == 'y'){
            continue;}
            else{
 		cout<<'.' <<stdd[i];
        }
    }

    return 0;
}
