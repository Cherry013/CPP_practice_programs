#include <iostream>

using namespace std;

int main()
{
    string playername = "Cherry";
    int health = 100;
    float speed = 4.7;
    bool is_alive = true;
    char rank = 'A';

    // cout << "Enter player name: ";
    // cin >> playername;

    cout << "_____Details______" << endl;
    cout << "Player name: " << playername << endl;
    cout << "health: " << health << endl;
    cout << "speed: " << speed << "m/s" << endl;
    cout << "Alive status: " << is_alive << endl;
    cout << "player rank: " << rank << endl;
    cout << endl;

    cout << "address of the value using &" << endl;
    cout << "health var address: " << &health << endl;
    cout << endl;

    cout << "For the Datatype sizes" << endl;
    cout << "String: " << sizeof(playername) << "bytes " << sizeof(string) << "bytes" << endl;

    return 0;
}