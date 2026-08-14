#include <iostream>
using namespace std;
int main(){
    int n,search;
    cout<<"Enter size of array:"<<endl;
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter "<< n << " elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to Search:";
    cin>>search;
    bool found=false;
    for(int i=0;i<n;i++){
        if(arr[i]==search){
            cout<<"Element found at "<<i+1<<endl;
            found=true;
        }
    }
    if(!found) cout<<"Element not found"<<endl;
    return 0;
}