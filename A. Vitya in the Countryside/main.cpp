#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,x;
cin>>n;
vector<int>v1;
for(int i=0;i<n;i++){
        cin>>x;
    v1.push_back(x);
}
if(v1.back()==15){
        cout<<"DOWN"<<endl;

}
else if(v1.back()==0){
        cout<<"UP"<<endl;

}
else if(v1.size()==1 && v1.front()==0){
    cout<<"UP"<<endl;
}
else if(v1.size()==1 && v1.front()==15){
    cout<<"DOWN"<<endl;
}
else if(v1.size()==1){
    cout<<"-1"<<endl;
}
else if(v1.back()>v1[v1.size()-2]){
    cout<<"UP"<<endl;
}
else if(v1.back()<v1[v1.size()-2]){
    cout<<"DOWN"<<endl;
}

}
