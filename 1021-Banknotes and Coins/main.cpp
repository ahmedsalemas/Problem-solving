#include <iostream>

using namespace std;

int main()
{
    int value;
    float c1,c50,c25,c10,c05,c01;
    int n100,n50,n20,n10,n5,n2;
    cin>>value;


    n100= (value/100);
    value=value%100;
    n50= (value/50);
    value=value%50;
    n20=(value/20);
    value=value%20;
    n10=(value/10);
    value=value%10;
    n5=(value/5);
    value=value%5;
    n2=(value/2);
    value=value%2;

    c1=((float)value/1);
    value=value%1;
    c50=((float)value/50);
    value=value%50;
    c25=((float)value/25);
   value=value%25;
    c10=((float)value/10);
   value=value%10;
    c05=((float)value/05);
   value=value%05;
    c01=((float)value/01);
   value=value%01;

     cout << "NOTAS:" << endl;
     cout <<n100<< " nota(s) de R$ 100.00" << endl;
     cout <<n50<< " nota(s) de R$ 50.00" << endl;
     cout <<n20<< " nota(s) de R$ 20.00" << endl;
     cout <<n10<< " nota(s) de R$ 10.00" << endl;
     cout <<n5<< " nota(s) de R$ 5.00" << endl;
     cout <<n2<< " nota(s) de R$ 2.00" << endl;
     cout << "MOEDAS:" << endl;
     cout <<c1<< "moeda(s) de R$ 1.00" << endl;
     cout <<c50<< "moeda(s) de R$ 0.50" << endl;
     cout <<c25<< "moeda(s) de R$ 0.25" << endl;
     cout <<c10<< "moeda(s) de R$ 0.10" << endl;
     cout <<c05<< "moeda(s) de R$ 0.05" << endl;
     cout <<c01<< "moeda(s) de R$ 0.01" << endl;



    return 0;
}
