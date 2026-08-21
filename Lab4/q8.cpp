#include <iostream>
using namespace std;

class ServiceManager;

class VehicleService {
private:
    string vehicleNumber;
    string ownerName;
    bool serviceDue;
    int lastServiceKm;

public:
    void input() {
        cout << "Enter vehicle number: ";
        getline(cin, vehicleNumber);

        cout << "Enter owner name: ";
        getline(cin, ownerName);

        cout << "Is service due? (1 = Yes, 0 = No): ";
        cin >> serviceDue;

        cout << "Enter last service kilometres: ";
        cin >> lastServiceKm;
        cin.ignore();
    }

    friend class ServiceManager;
};

class ServiceManager {
public:
    void displayInfo(VehicleService &v) {
        cout << "\n--- Vehicle Service Information ---\n";
        cout << "Vehicle Number: " << v.vehicleNumber << endl;
        cout << "Owner Name: " << v.ownerName << endl;
        cout << "Service Due: "
             << (v.serviceDue ? "Yes" : "No") << endl;
        cout << "Last Service: "
             << v.lastServiceKm << " km" << endl;
    }

    void completeService(VehicleService &v) {
        v.serviceDue = false;
        cout << "Service marked as completed." << endl;
    }

    void updateKilometres(VehicleService &v) {
        int km;

        cout << "Enter new last service kilometres: ";
        cin >> km;

        v.lastServiceKm = km;

        cout << "Kilometres updated." << endl;
    }

    void checkService(VehicleService &v) {
        if (v.serviceDue)
            cout << "Vehicle requires servicing." << endl;
        else
            cout << "Vehicle does not require servicing." << endl;
    }
};

int main() {
    VehicleService v;
    ServiceManager manager;

    v.input();

    manager.displayInfo(v);
    manager.checkService(v);

    return 0;
}