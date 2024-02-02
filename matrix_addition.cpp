#include<iostream>
using namespace std;
int main(){
    system("cls");
    int i,j,r,l,a[100][100],b[100][100],c[100][100];
    cout<<"Enter the no. of rows: ";
    cin>>r;
    cout<<"Enter the no. of columns: ";
    cin>>l;
    cout<<"Enter the elements of first matrix:"<<endl;
    for(i=1;i<=r;i++){
       for(j=1;j<=l;j++){
       cin>>a[i][j];
       }
    }
    cout<<"Enter the elements of second matrix:"<<endl;
    for(i=1;i<=r;i++){
       for(j=1;j<=l;j++){
        cin>>b[i][j];
       }
    }
    for(i=1;i<=r;i++){
       for(j=1;j<=l;j++){
    c[i][j]=a[i][j]+b[i][j];
       }
    }
    cout<<"The final matrix is: "<<endl;
    for(i=1;i<=r;i++){
    for(j=1;j<=l;j++){
        cout<<c[i][j]<<" ";
        cout<<endl;
    }
    }
    return 0;
}