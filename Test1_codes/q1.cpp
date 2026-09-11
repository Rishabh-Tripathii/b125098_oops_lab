#include <iostream>
using namespace std;

class ParkingFloor {
private:
    int floorNumber;
    int numberOfSlots;
    int *slots;

public:
    ParkingFloor(int floor, int n) {
        floorNumber = floor;
        numberOfSlots = n;
        slots = new int[numberOfSlots];
        for (int i = 0; i < numberOfSlots; i++) {
            slots[i] = 0;
        }
    }
    void reserve(int slot) {
        if (slot < 1 || slot > numberOfSlots) {
            cout << "Invalid slot number.\n";
            return;
        }

        if (slots[slot - 1] == 1) {
            cout << "Slot " << slot << " is already occupied.\n";
        } else {
            slots[slot - 1] = 1;
            cout << "Slot " << slot << " reserved successfully.\n";
        }
    }
    void reserve(int start, int count) {
        if (start < 1 || start + count - 1 > numberOfSlots) {
            cout << "Invalid range of slots.\n";
            return;
        }
        for (int i = start - 1; i < start - 1 + count; i++) {
            if (slots[i] == 1) {
                cout << "Cannot reserve group. Slot "
                     << i + 1 << " is already occupied.\n";
                return;
            }
        }
        for (int i = start - 1; i < start - 1 + count; i++) {
            slots[i] = 1;
        }
        cout << count << " consecutive slots reserved "
             << "from slot " << start << ".\n";
    }
};
int main(){
    ParkingFloor p(10,5);
    p.reserve(1,15);
    p.reserve(2);
}