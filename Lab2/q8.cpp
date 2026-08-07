#include <iostream>
using namespace std;
class HostelFee{
    char StudentName[50];
    int HostelId,No_of_months;
    float MonthlyFee,Totalfee;
    public:
        void accept(){
            cout<<"Enter Student Name:";
            cin>>StudentName;
            cout<<"Enter Hostel Id:";
            cin>>HostelId;
            cout<<"Enter Monthly Fee";
            cin>>MonthlyFee;
            cout<<"Enter Number of months:";
            cin>>No_of_months;
        }
        void Calculate(int delay){
            Totalfee=MonthlyFee*No_of_months;
            if(delay>0) Totalfee+=500;
        }
        void display(){
            cout<<"Student Name "<<StudentName<<endl;
            cout<<"Hostel Id "<<HostelId<<endl;
            cout<<"No_of_Months"<<No_of_months<<endl;
            cout<<"Total Fee "<<Totalfee<<endl;
        }
};
int main(){
    HostelFee H1;
    H1.accept();
    H1.Calculate(0);
    H1.display();
    return 0;
}

