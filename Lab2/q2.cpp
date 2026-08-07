#include <iostream>
using namespace std;
class Square{
    int length,area,perimeter;
    public:
        void input(){
            cout<<"Enter side length: ";
            cin>>length;
        }
        void Area(){
            area=length*length;
        }
        void Perimeter(){
            perimeter=4*length;
        }
        void Display(){
            cout<<"Area is "<<area<<endl;
            cout<<"Perimeter is "<<perimeter<<endl;
        }
};
int main(){
    Square s;
    s.input();
    s.Area();
    s.Perimeter();
    s.Display();
    return 0;
}