#include <iostream>
using namespace std;
class HotelRoom{
    int roomnumber;
    char GuestName[50];
    int StayDays;
    float CostPerDay,TotalRent;
    public:
        void accept(){
            cout<<"Enter Room Number ";
            cin>>roomnumber;
            cout<<"Enter Guest Name ";
            cin>>GuestName;
            cout<<"Enter number of stay days: ";
            cin>>StayDays;
            cout<<"Enter Cost per day";
            cin>>CostPerDay;
        }
        void RoomRentTotal(){
            TotalRent=StayDays*CostPerDay;
        }
        void display(){
            cout<<"Room Number "<<roomnumber<<endl;
            cout<<"Guest Name "<<GuestName<<endl;
            cout<<"number of stay days: "<<StayDays<<endl;
            cout<<"Cost per day"<<CostPerDay<<endl;
            cout<<"Total Rent"<<TotalRent;
        }
};
int main(){
    HotelRoom R;
    R.accept();
    R.RoomRentTotal();
    R.display();
    return 0;
}