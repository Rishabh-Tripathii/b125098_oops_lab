#include <iostream>
using namespace std;

class Camera {
private:
    string brand;
    string model;
    int megapixels;
    int storageCapacity;

public:
    void input() {
        cout << "Enter brand: ";
        getline(cin, brand);

        cout << "Enter model: ";
        getline(cin, model);

        cout << "Enter megapixels: ";
        cin >> megapixels;

        cout << "Enter storage capacity (GB): ";
        cin >> storageCapacity;
        cin.ignore();
    }

    friend void compareCamera(Camera c1, Camera c2);
};

void compareCamera(Camera c1, Camera c2) {
    Camera better = c1;

    if (c2.megapixels > c1.megapixels)
        better = c2;
    else if (c2.megapixels == c1.megapixels &&
             c2.storageCapacity > c1.storageCapacity)
        better = c2;

    cout << "\n--- Better Camera ---\n";
    cout << "Brand: " << better.brand << endl;
    cout << "Model: " << better.model << endl;
    cout << "Megapixels: " << better.megapixels << endl;
    cout << "Storage Capacity: "
         << better.storageCapacity << " GB" << endl;
}

int main() {
    Camera c1, c2;

    cout << "\nEnter details of Camera 1\n";
    c1.input();

    cout << "\nEnter details of Camera 2\n";
    c2.input();

    compareCamera(c1, c2);

    return 0;
}