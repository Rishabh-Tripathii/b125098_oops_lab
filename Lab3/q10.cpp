#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter number of rows:";
    cin>>m;
    cout<<"Enter number of columns:";
    cin>>n;
    int **A=new int*[m];
    for(int i=0;i<m;i++){
        A[i]=new int[n];
    }
    int **B=new int*[m];
    for(int i=0;i<m;i++){
        B[i]=new int[n];
    }
    int **C=new int*[m];
    for(int i=0;i<m;i++){
        C[i]=new int[n];
    }
    cout<<"Enter elements of matrix A:\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    cout<<"Enter elements of matrix B:\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>B[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    cout<<"\nResultant Matrix:\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++){
        delete[] A[i];
        delete[] B[i];
        delete[] C[i];
    }
    delete[] A;
    delete[] B;
    delete[] C;
    return 0;
}