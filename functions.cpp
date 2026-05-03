#include <iostream>

using namespace std;
void line(); void message();

int main() {
    cout << "Running main function" << endl;
    line();
    message();
    line();
    cout << "End of main function" << endl;

    return 0;
}

void line() {
    cout << "-----------------------------" << endl;
}

void message() {
    cout << "This is a message from the message function" << endl;
}