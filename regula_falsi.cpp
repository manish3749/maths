/* THIS PROGRAM IMPLEMENTS THE REGULA-FALSI METHOD */

#include<bits/stdc++.h>
using namespace std;

double f(double x) {
    return double(x*x*x-5*x+1);
}

int main()
{
    cout<<"enter the number of iteration \n";
    double a1=0,a2=0,b1=0,b2=0,it,x,a,b;
    cin>>it;
    while(f(a1)>=0 && f(a2)>=0) a1+=1,a2-=1;
    while(f(b1)<=0 && f(b2)<=0) b1+=1,b2-=1;

    (f(a1)<0)?(a=a1):a=a2;
    (f(b1)>0)?(b=b1):b=b2;

    if(a>b) swap(a,b);
    cout<<"a= "<<a<<"\t"<<"b= "<<b<<endl;
    if(f(a)*f(b)>0) cout<<"error\n";
    else{
        while(it--){
            b-=((b-a)/(f(b)-f(a)))*f(b);
            printf("b=%0.7f\tf(b)=%0.7f\n",b,f(b));
        }
    }
}
