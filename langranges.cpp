/* THIS PROGRAM WILL IMPLEMENTS THE LAGRANGE'S METHOD*/

#include<bits/stdc++.h>
using namespace std;

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
    for(int i=1;i<=n;i++){
        sum=y[i];
        for(int j=1;j<=n;j++){
            if(i!=j) sum*=(xin-x[j])/(x[i]-x[j]);
        }
        yout+=sum;
    }
    printf("Lagrange interpolation based on %d point id\n",xin);
    cout<<"f("<<xin<<") = "<<yout<<endl;

}

