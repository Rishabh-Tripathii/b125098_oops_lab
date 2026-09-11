#include <iostream>
using namespace std;

class SensorGrid {
private:
    int n;
    double *temperature;
public:
    SensorGrid(int size) {
        n = size;
        temperature = new double[n];
    }
    void enterReadings() {
        cout << "Enter " << n << " temperature readings:\n";

        for (int i = 0; i < n; i++) {
            cout << "Reading " << i + 1 << ": ";
            cin >> temperature[i];
        }
    }
    void display() {
        cout << "\nTemperature Readings:\n";

        for (int i = 0; i < n; i++) {
            cout << "Sensor " << i + 1
                 << ": " << temperature[i] << " C\n";
        }
    }
    void replaceReading(int position, double newTemperature) {
        if (position < 1 || position > n) {
            cout << "Invalid sensor position.\n";
            return;
        }

        temperature[position - 1] = newTemperature;

        cout << "Reading replaced successfully.\n";
    }
    double average() const {
        double sum = 0;

        for (int i = 0; i < n; i++) {
            sum += temperature[i];
        }

        return sum / n;
    }
    friend void compareAverage(SensorGrid &, SensorGrid &);
    ~SensorGrid() {
        delete[] temperature;
    }
};
void compareAverage(SensorGrid &s1, SensorGrid &s2) {
    double avg1 = s1.average();
    double avg2 = s2.average();

    cout << "\n--- Average Temperature ---\n";

    cout << "Grid 1 Average: " << avg1 << " C\n";
    cout << "Grid 2 Average: " << avg2 << " C\n";

    if (avg1 > avg2) {
        cout << "Grid 1 has the greater average temperature.\n";
    }
    else if (avg2 > avg1) {
        cout << "Grid 2 has the greater average temperature.\n";
    }
    else {
        cout << "Both grids have the same average temperature.\n";
    }
}
int main() {
    int n1, n2;
    cout << "Enter number of sensors in Grid 1: ";
    cin >> n1;
    SensorGrid *grid1 = new SensorGrid(n1);
    grid1->enterReadings();
    cout << "\nEnter number of sensors in Grid 2: ";
    cin >> n2;
    SensorGrid *grid2 = new SensorGrid(n2);
    grid2->enterReadings();
    int position;
    double newTemp;

    cout << "\nEnter sensor position to replace in Grid 1: ";
    cin >> position;

    cout << "Enter new temperature: ";
    cin >> newTemp;
    grid1->replaceReading(position, newTemp);
    grid1->display();
    grid2->display();
    compareAverage(*grid1, *grid2);
    delete grid1;
    delete grid2;
    return 0;
}