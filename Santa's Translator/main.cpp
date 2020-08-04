#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
map <string,string> data;


data.insert({"brasil","Feliz Natal!"});
data.insert({"alemanha","Frohliche Weihnachten!"});
data.insert({"austria","Frohe Weihnacht!"});
data.insert({"coreia","Chuk Sung Tan!"});
data.insert({"espanha","Feliz Navidad!"});
data.insert({"grecia","Kala Christougena!"});
data.insert({"estados-unidos","Merry Christmas!"});
data.insert({"inglaterra","Merry Christmas!"});
data.insert({"australia","Merry Christmas!"});
data.insert({"portugal","Feliz Natal!"});
data.insert({"suecia","God Jul!"});
data.insert({"turquia","Mutlu Noeller"});
data.insert({"argentina","Feliz Navidad!"});
data.insert({"chile","Feliz Navidad!"});
data.insert({"mexico","Feliz Navidad!"});
data.insert({"antardida","Merry Christmas!"});
data.insert({"canada","Merry Christmas!"});
data.insert({"irlanda","Nollaig Shona Dhuit!"});
data.insert({"belgica","Zalig Kerstfeest!"});
data.insert({"italia","Buon Natale!"});
data.insert({"libia","Buon Natale!"});
data.insert({"siria","Milad Mubarak!"});
data.insert({"marrocos","Milad Mubarak!"});
data.insert({"japao","Merii Kurisumasu!"});


string str,ans;
while(cin>>str){

ans=data[str];
if(ans==""){
    cout<<"--- NOT FOUND ---"<<endl;
}
else{
cout<<ans<<endl;
}
}
}
