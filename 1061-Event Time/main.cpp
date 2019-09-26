#include <iostream>

using namespace std;

int main()
{
    int SD,ED,start,endd,time;
    int SH,SM,SS;
    int EH,EM,ES;
    int d,h,m,s;
    char X ;
    cout<<"Dia ";
    cin>>SD;
    cin>>SH>>X>>SM>>X>>SS;
cout<<"Dia ";
    cin>>ED;
    cin>>EH>>X>>EM>>X>>ES;

   start=((SD*86400)+(SH*3600)+(SM*60)+(SS));
   endd=((ED*86400)+(EH*3600)+(EM*60)+(ES));
time=endd-start;
d=time/86400;
time=time%86400;
h=time/3600;
time=time%3600;
m=time/60;
time=time%60;
s=time;
    cout<<d<<" dia(s)"<<endl;
    cout<<h<<" hora(s)"<<endl;
    cout<<m<<" minuto(s)"<<endl;
    cout<<s<<" segundo(s)"<<endl;
    cout<<endl;
    return 0;
}
