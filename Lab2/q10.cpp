#include<iostream>
#include<string>
using namespace std;
class WaterBill
{
    int ConsumerNumber;
    string ConsumerName;
    int WaterConsumption;
    double Bill;
public:
    void accept()
    {
        cout<<"Enter Consumer Number: ";
        cin>>ConsumerNumber;
        cin.ignore();
        cout<<"Enter Consumer Name: ";
        getline(cin,ConsumerName);
        cout<<"Enter Water Consumption (in litres): ";
        cin>>WaterConsumption;
    }
    void calculateBill()
    {
        if(WaterConsumption<=500)
            Bill=WaterConsumption*2;
        else if(WaterConsumption<=1000)
            Bill=(500*2)+((WaterConsumption-500)*3);
        else
            Bill=(500*2)+(500*3)+((WaterConsumption-1000)*5);
    }
    void display()
    {
        cout<<"\n----- Water Bill -----"<<endl;
        cout<<"Consumer Number: "<<ConsumerNumber<<endl;
        cout<<"Consumer Name: "<<ConsumerName<<endl;
        cout<<"Water Consumption: "<<WaterConsumption<<" litres"<<endl;
        cout<<"Total Bill: Rs. "<<Bill<<endl;
    }
};

int main()
{
    WaterBill w;
    w.accept();
    w.calculateBill();
    w.display();
    return 0;
}