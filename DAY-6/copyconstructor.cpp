#include <iostream>
using namespace std;

class Cricketer {
    string name;
    int runs;

public:

    // Parameterized Constructor
    Cricketer(string n, int r) {
        name = n;
        runs = r;
    }

    // Copy Constructor
    Cricketer(const Cricketer &c) {
        name = c.name;
        runs = c.runs;

        cout << "Copy Constructor Called" << endl;
    }

    // Display Function
    void display() {
        cout << "Cricketer Name: " << name << endl;
        cout << "Runs: " << runs << endl;
    }
};

int main() {

    // Original Object
    Cricketer c1("Virat Kohli", 13000);

    // Copying Object
    Cricketer c2 = c1;

    cout << "Original Object:" << endl;
    c1.display();

    cout << "\nCopied Object:" << endl;
    c2.display();

    return 0;
}