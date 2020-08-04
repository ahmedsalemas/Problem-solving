#include <bits/stdc++.h>

using namespace std;

bool cpr(pair<pair<string,char>,string> a, pair<pair<string,char>,string> b){
	if(a.first.first == b.first.first){

        if(a.first.second == b.first.second) return a.second < b.second;

        else return a.first.second > b.first.second;

    }else{

        return a.first.first < b.first.first;

    }
}

int main()
{
	int N;
    cin>>N;

    while(N!=0){

	string name, color;
	char siz;
    vector<pair<pair<string,char>,string> > g1;


for(int i=0;i<N;i++){
	cin.ignore();
    getline(cin, name);
   	cin>>color>>siz;
	g1.push_back(make_pair(make_pair(color,siz),name));

}
    sort(g1.begin(), g1.end(), cpr);



for(int i=0;i<N;i++){

cout<<g1[i].first.first<<" ";
cout<<g1[i].first.second<<" ";
cout<<g1[i].second<<"\n";

}

cin>>N;
if(N) cout<<"\n";
}
}
