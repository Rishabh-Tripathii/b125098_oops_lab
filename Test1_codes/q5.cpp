#include <iostream>
using namespace std;
class Trip {
private:
    int tripID;
    double distance;
    double baseFare;
    double finalFare;
public:
    Trip(int id, double dist, double base) {
        tripID = id;
        distance = dist;
        baseFare = base;
        finalFare = 0;
    }
    double fare() {
        double distanceCharge = distance * 15.0;
        finalFare = baseFare + distanceCharge;
        return finalFare;
    }
    double fare(int waitingTime) {
        double distanceCharge = distance * 15.0;
        double waitingCharge = waitingTime * 2.0;

        finalFare = baseFare +
                    distanceCharge +
                    waitingCharge;

        return finalFare;
    }
    double fare(int waitingTime, int discount) {
        double distanceCharge = distance * 15.0;
        double waitingCharge = waitingTime * 2.0;
        double total = baseFare +
                       distanceCharge +
                       waitingCharge;
        double discountAmount =
            total * discount / 100.0;
        finalFare = total - discountAmount;
        return finalFare;
    }
    void display() {
        cout << "\nTrip ID: " << tripID;
        cout << "\nDistance: " << distance << " km";
        cout << "\nBase Fare: Rs. " << baseFare;
        cout << "\nFinal Fare: Rs. " << finalFare << endl;
    }
    friend void compareFare(Trip &, Trip &);
};
void compareFare(Trip &t1, Trip &t2) {
    cout << "\n--- Fare Comparison ---\n";

    cout << "Trip " << t1.tripID
         << " Fare: Rs. " << t1.finalFare << endl;

    cout << "Trip " << t2.tripID
         << " Fare: Rs. " << t2.finalFare << endl;

    if (t1.finalFare < t2.finalFare) {
        cout << "Trip " << t1.tripID
             << " is cheaper.\n";
    }
    else if (t2.finalFare < t1.finalFare) {
        cout << "Trip " << t2.tripID
             << " is cheaper.\n";
    }
    else {
        cout << "Both trips have the same fare.\n";
    }
}
int main() {
    int id1, id2;
    double distance1, distance2;
    double base1, base2;
    cout << "Enter Trip 1 ID: ";
    cin >> id1;
    cout << "Enter Trip 1 distance: ";
    cin >> distance1;
    cout << "Enter Trip 1 base fare: ";
    cin >> base1;
    cout << "\nEnter Trip 2 ID: ";
    cin >> id2;
    cout << "Enter Trip 2 distance: ";
    cin >> distance2;
    cout << "Enter Trip 2 base fare: ";
    cin >> base2;
    Trip *t1 = new Trip(id1, distance1, base1);
    Trip *t2 = new Trip(id2, distance2, base2);
    int choice;
    cout << "\nSelect fare calculation:\n";
    cout << "1. Normal fare\n";
    cout << "2. Fare with waiting time\n";
    cout << "3. Fare with waiting time and discount\n";
    cout << "Enter choice: ";
    cin >> choice;
    if (choice == 1) {
        t1->fare();
        t2->fare();

    }
    else if (choice == 2) {
        int waiting1, waiting2;
        cout << "Enter waiting time for Trip 1: ";
        cin >> waiting1;
        cout << "Enter waiting time for Trip 2: ";
        cin >> waiting2;
        t1->fare(waiting1);
        t2->fare(waiting2);
    }
    else if (choice == 3) {
        int waiting1, waiting2;
        int discount1, discount2;
        cout << "Enter waiting time for Trip 1: ";
        cin >> waiting1;
        cout << "Enter discount (%) for Trip 1: ";
        cin >> discount1;
        cout << "Enter waiting time for Trip 2: ";
        cin >> waiting2;
        cout << "Enter discount (%) for Trip 2: ";
        cin >> discount2;
        t1->fare(waiting1, discount1);
        t2->fare(waiting2, discount2);
    }
    t1->display();
    t2->display();
    compareFare(*t1, *t2);
    delete t1;
    delete t2;
    return 0;
}