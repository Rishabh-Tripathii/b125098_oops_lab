#include <iostream>
#include <string>
using namespace std;
class Product{
    int productID;
    string ProductName;
    double price;
    int quantity;
public:
    void accept(){
        cout<<"Enter Product ID:";
        cin>>productID;
        cin.ignore();
        cout<<"Enter Product Name";
        cin>>ProductName;
        cout<<"Enter Price:";
        cin>>price;
        cout<<"Enter Quantity:";
        cin>>quantity;
    }
    double getCost(){
        return price*quantity;
    }
    void display(){
        cout<<"ID:"<<productID<<endl;
        cout<<"Name:"<<ProductName<<endl;
        cout<<"Price:"<<price<<endl;
        cout<<"Quantity:"<<quantity<<endl;
        cout<<"Total Cost:"<<getCost()<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter number of products:";
    cin>>n;
    Product *products = new Product[n];
    for(int i=0;i<n;i++){
        cout<<"\nEnter Details of Product "<<i+1<<endl;
        products[i].accept();
    }
    double inventoryValue=0;
    cout<<"\nProduct Details:\n";
    for(int i=0;i<n;i++){
        products[i].display();
        inventoryValue+=products[i].getCost();
    }
    cout<<"Overall Inventory Value="<<inventoryValue<<endl;
    delete[] products;
    return 0;
}