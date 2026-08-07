#include <iostream>
using namespace std;
class Temperature{
    float tempC,tempF;
    public:
        void accept(){      //To accept the temp
            cout<<"Enter Temp in Celcius: ";
            cin>>tempC;
        }
        void convert(){     //To convert the temp to fahrenheit
            tempF=(1.8*tempC) + 32;
        }
        void display(){
            cout<<"Temp in Celcius is: "<<tempC<<endl;
            cout<<"Temp in Fahrenheit is: "<<tempF<<endl;
        }
};
int main(){
    Temperature T;
    T.accept();
    T.convert();
    T.display();
    return 0;
}