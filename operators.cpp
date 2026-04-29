#include <iostream>

using namespace std;

int main()
{
    int a = 10, b = 3, x = 0;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;

    cout << "\nPost-increment: " << x++ << endl;
    cout << x << endl;
    cout << "Pre-increment: " << ++x << endl;

    cout << noboolalpha;
    cout << "\nPrinting boolean in default numeric" << endl;
    cout << "a>b: " << (a > b) << endl;
    cout << "a==b: " << (a == b) << endl;
    cout << boolalpha << endl;
    cout << "Printing boolean in alphabetic words" << endl;
    cout << "a!=b: " << (a != b) << endl;
    cout << "a<=b: " << (a <= b) << endl;

    cout << "\nlogical operators -----> && AND, || OR, ! NOT" << endl;

    return 0;
}