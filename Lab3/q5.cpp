#include <iostream>
#include <string>
using namespace std;
class Book{
private:
    int bookID;
    string title;
    string author;
    double price;
public:
    void accept(){
        cout<<"Enter Book ID:";
        cin>>bookID;
        cin.ignore();
        cout<<"Enter Book Title:";
        getline(cin,title);
        cout<<"Enter Author: ";
        getline(cin,author);
        cout<<"Enter Price:";
        cin>>price;
    }
    void display(){
        cout<<"Book ID: "<<bookID<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main(){
    Book *b=new Book;
    b->accept();
    b->display();
    delete b;
    return 0;
}
