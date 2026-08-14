#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array:"<<endl;
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter "<< n << "elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array in reverse Order: ";
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    delete[] arr;
    return 0;
}