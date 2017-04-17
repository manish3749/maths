/* THIS PROGRAM IMPLEMENTS THE SIMPSON'S 1/3 rd RULE */

#include<bits/stdc++.h>
using namespace std;

double f(double x)
{
    return 1/(1+x*x);
}

int main()
{
    cout<<"Enter the interval as (l,r)\n";
    double l,r,n;
    cin>>l>>r;
    cout<<"enter the no. of parts\n";
    cin>>n;
    double h=(r-l)/(n);
    double x[100],y[100];
    int k=0;
    for(double i=l;i<=r;i+=h){
        x[k]=i;
        y[k++]=f(i);
    }
    cout<<"k = "<<k<<endl;
    double ansr=y[0]+y[k-1];

    for(int i=2;i<=k-3;i+=2)
        ansr+=2*y[i];
    for(int i=1;i<=k-2;i+=2)
        ansr+=4*y[i];
    cout<<ansr*h/3.0;
}

