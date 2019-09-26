#include <iostream>

using namespace std;

int main()
{
   int number_of_groups, children_in_group,c4=0,c3=0,c2=0,c1=0,no_taxi=0;
    cin>>number_of_groups;
    for(int i=1;i<=number_of_groups;i++){
        cin>>children_in_group;
        if(children_in_group==4){c4++;}
        else if(children_in_group==3){c3++;}
        else if(children_in_group==2){c2++;}
        else if(children_in_group==1){c1++;}
}
no_taxi+=c4;
no_taxi+=c3;
c1-=c3;
if(c1<0){c1==0;}
no_taxi+=c2/2;
if(c2%2!=0){no_taxi++;
c1-=2;}
if(c1<0){c1==0;}
no_taxi+=c1/4;
if(c1%4){no_taxi++;}
cout<<no_taxi<<endl;
return 0;
}
