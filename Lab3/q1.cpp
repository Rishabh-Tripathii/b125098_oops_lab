#include <iostream>
using namespace std;
int main(){
    int *a=new int;
    int *b=new int;
    cout<<"Enter two integers: ";
    cin>>*a>>*b;
    cout<<"Sum="<<(*a+*b)<<endl;
    cout<<"Difference="<<(*a-*b)<<endl;
    cout<<"Product="<<(*a * *b)<<endl;
    if(*b!=0) cout<<"Quotient="<<(double)(*a)/ *b<<endl;
    else cout<<"Division by zero is not possible"<<endl;
    delete a;
    delete b;
    return 0;
}