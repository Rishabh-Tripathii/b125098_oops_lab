#include <iostream>
using namespace std;

class WalletManager;

class DigitalWallet {
private:
    string userName;
    double walletBalance;
    bool walletStatus;
public:
    void input() {
        cout << "Enter user name: ";
        getline(cin, userName);
        cout << "Enter wallet balance: ";
        cin >> walletBalance;
        cout << "Enter wallet status (1 = Active, 0 = Disabled): ";
        cin >> walletStatus;
    }
    friend class WalletManager;
};
class WalletManager {
public:
    void displayDetails(DigitalWallet &w) {
        cout << "\n--- Wallet Details ---\n";
        cout << "User Name: " << w.userName << endl;
        cout << "Wallet Balance: Rs. "
             << w.walletBalance << endl;
        cout << "Wallet Status: "
             << (w.walletStatus ? "Active" : "Disabled")
             << endl;
    }
    void addMoney(DigitalWallet &w) {
        double amount;

        cout << "Enter amount to add: ";
        cin >> amount;

        if (w.walletStatus) {
            w.walletBalance += amount;
            cout << "Money added successfully." << endl;
        }
        else {
            cout << "Wallet is disabled." << endl;
        }
    }
    void deductMoney(DigitalWallet &w) {
        double amount;
        cout << "Enter amount to deduct: ";
        cin >> amount;
        if (!w.walletStatus) {
            cout << "Wallet is disabled." << endl;
        }
        else if (amount <= w.walletBalance) {
            w.walletBalance -= amount;
            cout << "Money deducted successfully." << endl;
        }
        else {
            cout << "Insufficient balance." << endl;
        }
    }
    void disableWallet(DigitalWallet &w) {
        w.walletStatus = false;
        cout << "Wallet disabled." << endl;
    }
    void displayStatus(DigitalWallet &w) {
        cout << "Wallet Status: "
             << (w.walletStatus ? "Active" : "Disabled")
             << endl;
    }
};
int main() {
    DigitalWallet w;
    WalletManager manager;

    w.input();

    manager.displayDetails(w);
    manager.addMoney(w);
    manager.deductMoney(w);

    manager.displayStatus(w);

    return 0;
}