/* THIS PROGRAM IMPLEMENTS THE GAUSS-SEIDAL ITERATION */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    double e;
    cout<<"enter the permissible error\n";
    cin>>e;
    double a[3][3],b[3];
    cout<<"enter the first matrix\n";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>a[i][j];
            
    cout<<"enter the 2nd matrix";
    for(int i=0;i<3;i++) cin>>b[i];
    
    double x=0,y=0,z=0,x1=0,y1=0,z1=0;
    int k=5;
    while(true){
        x=(b[0]-a[0][1]*y-a[0][2]*z)/a[0][0];
        y=(b[1]-a[1][0]*x-a[1][2]*z)/a[1][1];
        z=(b[2]-a[2][0]*x-a[2][1]*y)/a[2][2];
        cout<<"\nx = "<<x<<endl<<"y = "<<y<<endl<<"z = "<<z<<endl;
        if(abs(x1-x)<e && abs(y1-y)<e && abs(z1-z)<e)
            break;
        x1=x,y1=y,z1=z;
    }
}
