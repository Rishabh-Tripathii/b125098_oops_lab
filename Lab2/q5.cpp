#include <iostream>
using namespace std;
class MobileRecharge{
    long long int mobilenumber;
    char Name[50];
    float currentBalance,Recharge_Amount;
    public:
        void accept(){
            cout<<"Enter Mobile Number:";
            cin>>mobilenumber;
            cout<<"Enter Customer Name:";
            cin>>Name;
            cout<<"Enter Current Balance";
            cin>>currentBalance;
        }
        void Recharge(){
            cout<<"Enter Recharge amount: ";
            cin>>Recharge_Amount;
            if(Recharge_Amount<=currentBalance){
                currentBalance-=Recharge_Amount;
            }
            else{
                cout<<"Enter recharge amount within balance";
                Recharge();
            }
        }
        void display(){
            cout<<"Updated Balance: "<<currentBalance;
        }
};
int main(){
    MobileRecharge M1;
    M1.accept();
    M1.Recharge();
    M1.display();
    return 0;
}