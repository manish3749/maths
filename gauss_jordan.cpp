/* THIS PROGRAMS IMPLEMENTS THE GAUSS JORDAN METHOD */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=3;
    double a[n][n],b[n];
    cout<<"enter the first matrix (3*3)\n";
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    cout<<"enter the second matrix (3*1)\n";
    for(int i=0;i<n;i++) cin>>b[i];
    int k=0;
    while(k<2){
        double pivot=a[k][k];
        for(int i=k+1;i<n;i++){
            double var=((1.0*a[i][k])/pivot);
            for(int j=0;j<n;j++){
                a[i][j]+=(-1.0*var)*a[k][j];
            }
            b[i]+=(-1.0*var)*b[k];
        }
        k++;
    }
    k=n-1;
    while(k){
        double pivot=a[k][k];
        for(int i=k-1;i>=0;i--){
            double var=((1.0*a[i][k])/pivot);
            for(int j=0;j<n;j++){
                a[i][j]+=(-1.0*var)*a[k][j];
            }
            b[i]+=(-1.0*var)*b[k];
        }
        k--;
    }
    double x3=(1.0*b[2])/a[2][2];
    double x2=(1.0*b[1])/a[1][1];
    double x1=(1.0*b[0])/a[0][0];
    cout<<"\nfirst array after the operations \n\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<fixed<<setprecision(2)<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<"\nsecond array after the operations \n\n";
    for(int i=0;i<n;i++)
        cout<<fixed<<setprecision(2)<<b[i]<<" ";
    printf("\n\nx1 = %0.2f\nx2 = %0.2f\nx3 = %0.2f\n",x1,x2,x3);
}


