#include <iostream>
using namespace std;
class Borrower {
private:
    int borrowerID;
    int overdueDays;
    double fineAmount;
public:
    Borrower(int id, int days) {
        borrowerID = id;
        overdueDays = days;
        fineAmount = 0;
    }
    void calculateFine() {
        fineAmount = overdueDays * 5.0;
    }
    void calculateFine(double specialRate) {
        fineAmount = overdueDays * specialRate;
    }
    void display() {
        cout << "\nBorrower ID: " << borrowerID;
        cout << "\nOverdue Days: " << overdueDays;
        cout << "\nFine Amount: Rs. " << fineAmount << endl;
    }
    friend void compareFine(Borrower &, Borrower &);
};
void compareFine(Borrower &b1, Borrower &b2) {
    cout << "\n--- Fine Comparison ---\n";
    if (b1.fineAmount > b2.fineAmount) {
        cout << "Borrower " << b1.borrowerID
             << " has the higher fine.\n";
        cout << "Fine = Rs. " << b1.fineAmount << endl;
    }
    else if (b2.fineAmount > b1.fineAmount) {
        cout << "Borrower " << b2.borrowerID
             << " has the higher fine.\n";
        cout << "Fine = Rs. " << b2.fineAmount << endl;
    }
    else {
        cout << "Both borrowers have the same fine.\n";
    }
}
int main() {
    int id1, days1;
    int id2, days2;
    cout << "Enter Borrower 1 ID: ";
    cin >> id1;
    cout << "Enter overdue days: ";
    cin >> days1;
    cout << "\nEnter Borrower 2 ID: ";
    cin >> id2;
    cout << "Enter overdue days: ";
    cin >> days2;
    Borrower *b1 = new Borrower(id1, days1);
    Borrower *b2 = new Borrower(id2, days2);
    int choice;
    cout << "\nCalculate fine for both borrowers.\n";
    cout << "1. Normal rate\n";
    cout << "2. Special rate\n";
    cout << "Enter choice: ";
    cin >> choice;
    if (choice == 1) {
        b1->calculateFine();
        b2->calculateFine();
    }
    else {
        double rate;
        cout << "Enter special rate per day: ";
        cin >> rate;
        b1->calculateFine(rate);
        b2->calculateFine(rate);
    }
    b1->display();
    b2->display();
    compareFine(*b1, *b2);
    // Release memory
    delete b1;
    delete b2;
    return 0;
}