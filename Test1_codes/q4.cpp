#include <iostream>
using namespace std;
class GameController;
class Inventory {
private:
    int playerID;
    int numberOfItems;
    int *quantity;
public:
    Inventory(int id, int n) {
        playerID = id;
        numberOfItems = n;

        quantity = new int[numberOfItems];

        for (int i = 0; i < numberOfItems; i++) {
            quantity[i] = 0;
        }
    }
    void enterQuantities() {
        cout << "Enter quantity for "
             << numberOfItems << " items:\n";

        for (int i = 0; i < numberOfItems; i++) {
            cout << "Item " << i + 1 << ": ";
            cin >> quantity[i];
        }
    }
    void display() {
        cout << "\nPlayer ID: " << playerID << endl;
        cout << "Inventory:\n";
        for (int i = 0; i < numberOfItems; i++) {
            cout << "Item " << i + 1
                 << ": " << quantity[i] << endl;
        }
    }
    friend class GameController;
    ~Inventory() {
        delete[] quantity;
    }
};
class GameController {
public:
    void inspectInventory(Inventory &inv) {
        cout << "\n--- Inventory Inspection ---\n";
        cout << "Player ID: " << inv.playerID << endl;
        cout << "Number of Items: "
             << inv.numberOfItems << endl;

        for (int i = 0; i < inv.numberOfItems; i++) {
            cout << "Item " << i + 1
                 << ": " << inv.quantity[i] << endl;
        }
    }
    void changeQuantity(Inventory &inv,
                        int itemNumber,
                        int newQuantity) {

        if (itemNumber < 1 ||
            itemNumber > inv.numberOfItems) {

            cout << "Invalid item number.\n";
            return;
        }
        inv.quantity[itemNumber - 1] = newQuantity;
        cout << "Quantity updated successfully.\n";
    }
};
int main() {
    int playerID, n;
    cout << "Enter Player ID: ";
    cin >> playerID;
    cout << "Enter number of items: ";
    cin >> n;
    Inventory *inventory = new Inventory(playerID, n);
    inventory->enterQuantities();
    GameController controller;
    controller.inspectInventory(*inventory);
    int item, newQuantity;
    cout << "\nEnter item number to modify: ";
    cin >> item;
    cout << "Enter new quantity: ";
    cin >> newQuantity;
    controller.changeQuantity(*inventory,item,newQuantity);
    cout << "\nIn\n";
    inventory->display();
    delete inventory;
    return 0;
}