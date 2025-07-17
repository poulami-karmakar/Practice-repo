#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    // Input from user
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    // Output
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;

    return 0;
}
