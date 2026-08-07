#include <iostream>
using namespace std;
class Car{
    public:
        int CarNumber;
        char BrandName[50];
        int ModelYear;
        void accept(){
            cout<<"Enter Car Number";
            cin>>CarNumber;
            cout<<"Enter Brand Name";
            cin>>BrandName;
            cout<<"Enter ModelYear";
            cin>>ModelYear;
        }
        void display(){
            cout<<"Car Number "<<CarNumber<<endl;
            cout<<"BrandName "<<BrandName<<endl;
            cout<<"ModelYear "<<ModelYear;
        }
};
int main(){
    Car c1;
    c1.accept();
    c1.display();
    return 0;
}