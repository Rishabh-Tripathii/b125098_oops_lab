#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array:"<<endl;
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter "<< n << " elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else odd++;
    }
    cout<<"No. of even: "<<even<<endl;
    cout<<"No. of odd: "<<odd<<endl;
    delete[] arr;
    return 0;
}