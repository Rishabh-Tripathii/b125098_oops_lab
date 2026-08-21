#include <iostream>
using namespace std;

class MuseumManager;

class Exhibit {
private:
    string exhibitName;
    int exhibitID;
    int visitorCount;
    bool displayStatus;

public:
    void input() {
        cout << "Enter exhibit name: ";
        getline(cin, exhibitName);
        cout << "Enter exhibit ID: ";
        cin >> exhibitID;
        cout << "Enter visitor count: ";
        cin >> visitorCount;

        cout << "Enter display status (1 = Open, 0 = Closed): ";
        cin >> displayStatus;
        cin.ignore();
    }

    friend class MuseumManager;
};
class MuseumManager {
public:
    void displayInfo(Exhibit &e) {
        cout << "\n--- Exhibit Information ---\n";
        cout << "Exhibit Name: " << e.exhibitName << endl;
        cout << "Exhibit ID: " << e.exhibitID << endl;
        cout << "Visitor Count: " << e.visitorCount << endl;
        cout << "Display Status: "
             << (e.displayStatus ? "Open" : "Closed") << endl;
    }

    void addVisitors(Exhibit &e) {
        int n;

        cout << "Enter number of visitors to add: ";
        cin >> n;

        e.visitorCount += n;

        cout << "Visitors added successfully." << endl;
    }

    void resetVisitors(Exhibit &e) {
        e.visitorCount = 0;
        cout << "Visitor count reset." << endl;
    }

    void openExhibit(Exhibit &e) {
        e.displayStatus = true;
        cout << "Exhibit opened." << endl;
    }

    void closeExhibit(Exhibit &e) {
        e.displayStatus = false;
        cout << "Exhibit closed." << endl;
    }

    void checkStatus(Exhibit &e) {
        cout << "Exhibit is currently "
             << (e.displayStatus ? "OPEN" : "CLOSED") << endl;
    }
};

int main() {
    Exhibit e;
    MuseumManager manager;

    e.input();

    manager.displayInfo(e);
    manager.addVisitors(e);
    manager.checkStatus(e);

    return 0;
}