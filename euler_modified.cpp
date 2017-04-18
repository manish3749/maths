/* THIS PROGRAM IMPLEMENTS THE EULER'S MODIFIED FORMULA */

#include<bits/stdc++.h>
using namespace std;

double f(double x,double y)
{
    return double(x+y);
}
int main()
{
    cout<<"Enter the value x and y\n";
    double x,y,xin,h;
    cin>>x>>y;
    cout<<"enter the value of x for which you want to calculate the y\n";
    cin>>xin;
    cout<<"Enter the value of h\n";
    cin>>h;
    while(x<=xin){
        double var1=y+h*f(x,y);
        double var2=y+(h/2.0)*(f(x,y) + f(x+h,var1));
        x=x+h;
        y=var1;
        cout<<"\n\nf("<<xin<<") = "<<y<<endl;
    }
}
