/* THIS PROGRAM IMPLEMENTS THE EULAR'S METHOD */

#include<bits/stdc++.h>
using namespace std;

double f(double x,double y)
{
    return (y-x)/(y+x);
}

int main()
{
    cout<<"Enter the value of x and y \n";
    double x,y,h;
    cin>>x>>y;
    cout<<"Enter the value to be find\n";
    cin>>h;
    int steps=10;
    double k=h/10;
    h/=steps;
    cout<<"x\t\ty\t\tdy/dx\t\tnew y\n";
    for(int i=1;i<=steps+1;i++){
        double var=f(x,y);
        cout<<x<<"\t\t"<<y<<"\t\t"<<var<<"\t\t";
        y=y+k*(var);
        cout<<y<<endl;
        x+=k;
    }
}
