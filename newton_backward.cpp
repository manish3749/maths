/* THIS PROGRAM IMPLEMENTS THE NEWTON'S BACKWARD INTERPOLATION */

#include<bits/stdc++.h>
using namespace std;
double m[100][100];
int main()
{
    cout<<"Enter the number of points\n";
    int n;
    cin>>n;
    cout<<"Enter the value of abscissas and their corresponding functional values\n";
    double x[n+1],y[n+1],xin,yout=0.0,sum;
    for(int i=1;i<=n;i++) cin>>x[i]>>y[i];
    cout<<"Enter the value of x for which y is desired\n";
    cin>>xin;

    for(int i=1;i<=n;i++) m[i][0]=y[i];
    for(int j=1;j<n;j++){
        for(int i=1;i<=n-j;i++){
            m[i][j]=m[i+1][j-1]-m[i][j-1];
        }
    }
    cout<<"The difference table for given values is\n\n";
    for(int i=1;i<=n;i++){
        cout<<x[i]<<"\t";
        for(int j=0;j<n;j++){
            cout<<m[i][j]<<"\t";
        }
        cout<<endl;
    }

    double xn=x[1],yn=y[1];
    int k=1;
    for(int i=2;i<=n;i++)
        if(x[i]<=xin) xn=x[i],yn=y[i],k=i;
    double h=x[2]-x[1];
    double u=(xin-xn)/h;
    yout=yn;
    yout += (u*m[k-1][1]) + ((u*(u+1.0)/2.0)*m[k-2][2]) + ((u*(u+1.0)*(u+2.0)/6.0)*m[k-3][3]);;
    cout<<"\n\nf("<<xin<<") = "<<yout<<endl;
}

