#include <iostream>
//#include <iomanip>
using namespace std;

int main()
{
    float x,y;
    cin>>x>>y;
    //cout<<fixed<<setprecision(1);
    //cin>>fixed>>setprecision(1);

    if(x==0.0 && y==0.0){
        cout<<"Origem"<<endl;}
    else if (y==0.0)
        {cout<<"Eixo X"<<endl;}
    else if (x==0.0)
        {cout<<"Eixo Y"<<endl;}
    else if (x>0.0 && y>0.0)
        {cout<<"Q1"<<endl;}
    else if (x<0.0 && y>0.0)
       {cout<<"Q2"<<endl;}
    else if (x<0.0 && y<0.0)
        {cout<<"Q3"<<endl;}
    else
        {cout<<"Q4"<<endl;}

    return 0;
}