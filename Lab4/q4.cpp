#include <iostream>
using namespace std;

class ElectricMeter {
private:
    int meterNumber;
    string consumerName;
    int unitsConsumed;

public:
    void input() {
        cout << "Enter meter number: ";
        cin >> meterNumber;
        cin.ignore();

        cout << "Enter consumer name: ";
        getline(cin, consumerName);

        cout << "Enter units consumed: ";
        cin >> unitsConsumed;
    }

    friend void checkUsage(ElectricMeter e);
};

void checkUsage(ElectricMeter e) {
    cout << "\n--- Electricity Usage ---\n";
    cout << "Meter Number: " << e.meterNumber << endl;
    cout << "Consumer Name: " << e.consumerName << endl;
    cout << "Units Consumed: " << e.unitsConsumed << endl;

    if (e.unitsConsumed < 100)
        cout << "Usage Category: Low Usage" << endl;
    else if (e.unitsConsumed <= 300)
        cout << "Usage Category: Moderate Usage" << endl;
    else
        cout << "Usage Category: High Usage" << endl;
}

int main() {
    ElectricMeter e;

    e.input();
    checkUsage(e);

    return 0;
}