#include <iostream>
#include <bits/stdc++.h>
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
c4=0;

 if (c3>=c1){
        no_taxi+=c3;
    c3=0;
    c1=0;
}
else if (c3<c1){
        c1-=c3;
        no_taxi+=c3;
    c3=0;
}

    if(c2%2==0){
      c2 = c2/2;

        no_taxi+=c2;
        c2=0;

    }
    else  if(c2%2==0){
        c2 = c2/2;
        no_taxi+=c2;
        c1+=2;
    }


        c1 = ceil((double)c1/4);
        no_taxi+=c1;


cout<<no_taxi;
    return 0;
}
