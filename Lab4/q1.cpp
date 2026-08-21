#include <iostream>
using namespace std;

class Weather {
private:
    string cityName;
    float temperature;
    string weatherCondition;

public:
    void input() {
        cout << "Enter city name: ";
        getline(cin, cityName);

        cout << "Enter temperature: ";
        cin >> temperature;
        cin.ignore();

        cout << "Enter weather condition: ";
        getline(cin, weatherCondition);
    }

    friend void generateReport(Weather w);
};

void generateReport(Weather w) {
    cout << "\n--- Weather Report ---\n";
    cout << "City: " << w.cityName << endl;
    cout << "Temperature: " << w.temperature << " C" << endl;
    cout << "Weather Condition: " << w.weatherCondition << endl;

    if (w.temperature > 35)
        cout << "Classification: Very Hot" << endl;
    else if (w.temperature >= 20)
        cout << "Classification: Pleasant" << endl;
    else
        cout << "Classification: Cool" << endl;
}

int main() {
    Weather w;

    w.input();
    generateReport(w);

    return 0;
}