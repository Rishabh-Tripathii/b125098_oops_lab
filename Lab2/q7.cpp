#include <iostream>
using namespace std;
class MovieTicket{
    char MovieName[50];
    float TicketPrice,TotalCost;
    int No_of_Tickets;
    public:
        void accept(){
            cout<<"Enter Movie Name";
            cin>>MovieName;
            cout<<"Enter Ticket Price";
            cin>>TicketPrice;
            cout<<"Enter Number of Tickets";
            cin>>No_of_Tickets;
        }
        void TicketCost(){
            TotalCost=TicketPrice*No_of_Tickets;
        }
        void display(){
            cout<<"Movie Name: "<<MovieName<<endl;
            cout<<"Ticket Price"<<TicketPrice<<endl;
            cout<<"Number of Tickets: "<<No_of_Tickets<<endl;
            cout<<"Total Cost:"<<TotalCost;
        }
};
int main(){
    MovieTicket M1;
    M1.accept();
    M1.TicketCost();
    M1.display();
    return 0;
}