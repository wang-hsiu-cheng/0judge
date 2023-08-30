#include <iostream>
using namespace std;
int main(){
    float a,b,c,s,max,med,min;
    cin>>a>>b>>c;
    a==max;
    b==med;
    c==min;
if (b>max)
   {max=b;
    med=a;
    min=c;}
else if (b>max&&a<min)
   { max=b;
    med=c;
    min=a;}
if (c>max)
   {max=c;
    med=b;
    min=a;}
else if (c>max&&b<min)
   { max=c;
    med=a;
    min=b;}
if (a>max)
   {max=a;
    med=c;
    min=b;}
if ((med+min>max)&&(med-min<max)&&(med*med+min*min<max*max))
    {cout<<"Obtuse";}
else if ((med+min>max)&&(med-min<max)&&(med*med+min*min==max*max))
    {cout<<"Right";}
else if ((med+min>max)&&(med-min<max)&&(med*med+min*min>max*max))
    {cout<<"Acute";}
else
    {cout<<"No";}
    return 0;}
