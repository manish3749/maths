/* THIS PROGRAM IMPLEMENTS THE RUNGE-KUTTA METHOD */

#include<bits/stdc++.h>
using namespace std;

double f(double x,double y)
{
    return (y*y-x*x)/(y*y+x*x);
}

int main()
{
    cout<<"Enter the value of x and y \n";
    double x,y,v,h;
    cin>>x>>y;
    cout<<"Enter the value to be find\n";
    cin>>v;
    cout<<"Enter the value of h\n";
    cin>>h;
    while(true){

        double ansr=y;
        double k=0,k1=0,k2=0,k3=0,k4=0;
        k1=h*f(x,y);
        k2=h*f(x+h/2.0,y+k1/2.0);
        k3=h*f(x+h/2.0,y+k2/2.0);
        k4=h*f(x+h,y+k3);
        k=(k1+2.0*k2+2.0*k3+k4)/6.0;
        ansr+=k;
        cout<<"f("<<v<<") = "<<ansr;
        int ch;
        cout<<"\n\npress 1 to continue and 0 to exit\n";
        cin>>ch;
        if(!ch) break;
        x=v;y=ansr;
        cout<<"Enter the value to be find\n";
        cin>>v;
    }
}

