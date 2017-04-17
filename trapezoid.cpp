/* THIS PROGRAM IMPLEMENTS TRAPEZOIDAL RULE */

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
    double ansr=y[0]+y[k-1];
    for(int i=1;i<k-1;i++){
        ansr+=2*y[i];
    }
    cout<<ansr*h/2.0;
}
