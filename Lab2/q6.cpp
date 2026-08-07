#include <iostream>
using namespace std;
class Time{
    int hours , minutes;
    public:
        void input(){
            cout<<"Enter the time hour then minute:";
            cin>>hours>>minutes;
        }
        Time add(Time t2){
            Time t3;
            t3.hours=hours+t2.hours;
            t3.minutes=minutes+t2.minutes;
            if(t3.minutes>=60){
                t3.hours=t3.minutes/60+t3.hours;
                t3.minutes=t3.minutes%60;
            }
            return t3;
        }
        void display(){
            cout<<"Resulting Time : "<<hours<<" hr "<<minutes<<" min ";
        }
};
int main(){
    Time t1,t2,t3;
    t1.input();
    t2.input();
    t3=t1.add(t2);
    t3.display();
}