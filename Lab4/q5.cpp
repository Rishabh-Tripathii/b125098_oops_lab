#include <iostream>
using namespace std;
class EventParticipant {
private:
    string participantName;
    int age;
    string registrationStatus;
public:
    void input() {
        cout << "Enter participant name: ";
        getline(cin, participantName);

        cout << "Enter age: ";
        cin >> age;
        cin.ignore();

        cout << "Enter registration status (Active/Inactive): ";
        getline(cin, registrationStatus);
    }

    friend void verifyParticipant(EventParticipant p);
};

void verifyParticipant(EventParticipant p) {
    cout << "\n--- Participant Details ---\n";
    cout << "Name: " << p.participantName << endl;
    cout << "Age: " << p.age << endl;
    cout << "Registration Status: "
         << p.registrationStatus << endl;

    if (p.age >= 18 && p.registrationStatus == "Active")
        cout << "Eligibility: Eligible" << endl;
    else
        cout << "Eligibility: Not Eligible" << endl;
}

int main() {
    EventParticipant p;
    p.input();
    verifyParticipant(p);
    return 0;
}