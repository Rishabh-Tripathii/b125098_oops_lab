#include <iostream>
using namespace std;
class PrinterManager;
class Printer {
private:
    string printerName;
    int pagesPrinted;
    int inkLevel;
    bool powerStatus;
public:
    void input() {
        cout << "Enter printer name: ";
        getline(cin, printerName);
        cout << "Enter pages printed: ";
        cin >> pagesPrinted;
        cout << "Enter ink level (%): ";
        cin >> inkLevel;
        cout << "Enter power status (1 = ON, 0 = OFF): ";
        cin >> powerStatus;
        cin.ignore();
    }
    friend class PrinterManager;
};
class PrinterManager {
public:
    void displayInfo(Printer &p) {
        cout << "\n--- Printer Information ---\n";
        cout << "Printer Name: " << p.printerName << endl;
        cout << "Pages Printed: " << p.pagesPrinted << endl;
        cout << "Ink Level: " << p.inkLevel << "%" << endl;
        cout << "Power Status: "
             << (p.powerStatus ? "ON" : "OFF") << endl;
    }
    void turnOn(Printer &p) {
        p.powerStatus = true;
        cout << "Printer turned ON." << endl;
    }
    void turnOff(Printer &p) {
        p.powerStatus = false;
        cout << "Printer turned OFF." << endl;
    }
    void checkInk(Printer &p) {
        cout << "Ink Level: " << p.inkLevel << "%" << endl;
    }
    void resetPageCount(Printer &p) {
        p.pagesPrinted = 0;
        cout << "Page count reset." << endl;
    }
};
int main() {
    Printer p;
    PrinterManager manager;
    p.input();
    manager.displayInfo(p);
    manager.checkInk(p);
    manager.turnOn(p);
    manager.resetPageCount(p);
    manager.displayInfo(p);
    return 0;
}