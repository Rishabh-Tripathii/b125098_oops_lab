#include <iostream>
using namespace std;

class UserAccount {
private:
    string username;
    int loginAttempts;
    string accountStatus;
public:
    void input() {
        cout << "Enter username: ";
        getline(cin, username);
        cout << "Enter login attempts: ";
        cin >> loginAttempts;
        cin.ignore();
        cout << "Enter account status: ";
        getline(cin, accountStatus);
    }

    friend void checkAccount(UserAccount u);
};
void checkAccount(UserAccount u) {
    cout << "\n--- Account Details ---\n";
    cout << "Username: " << u.username << endl;
    cout << "Login Attempts: " << u.loginAttempts << endl;

    if (u.loginAttempts >= 3)
        cout << "Account Status: Account Locked" << endl;
    else
        cout << "Account Status: Account Active" << endl;
}

int main() {
    UserAccount u;

    u.input();
    checkAccount(u);

    return 0;
}