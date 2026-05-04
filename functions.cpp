#include <iostream>

using namespace std;
void line();
void message();
void change(int x)
{
    x=25;
}

// struct Player {
//     string name;
//     int hp,attack;

//     void damage(int dam) {
//         hp -= dam;
//         if (hp<0) {
//             hp = 0;
//         }
//     }
// };

// improved version for above
struct Player {
    string name;
    int hp;
    int attack;

    // Player(string n, int h, int a) {
    //     name = n;
    //     hp = h;
    //     attack = a;
    // }

    Player(string n, int h, int a)
        :name(n), hp(h), attack(a)
    {
        // optional block of statements if needed
    }
    void damage(int dam) {
        hp -= dam;
        if (hp<0) {
            hp = 0;
        }
    }
};

Player playerCreation() {
    string name;
    int hp,attack;
    cout << "Enter player name: ";
    cin >> name;
    
    cout << "Health for the player(" << name << "): ";
    cin >> hp;
    
    cout << "Enter the attack: ";
    cin >> attack;

    return Player(name,hp,attack);
}
// void display(Player p) can be used to modify so use const
void display(const Player &p) {
    cout << "\nPlayer name: " << p.name << endl;
    cout << "\nHp: " << p.hp << endl;
    cout << "\nAttack: " << p.attack << endl;
}

int main()
{
    cout << "Running main function" << endl;
    line();
    message();
    line();
    cout << "End of main function" << endl;

    int x=500;
    cout << "Before function calling X: " << x << endl;
    change(x);
    cout << "After function calling X: " << x << endl;

    while (true) {
        cout << "if you want to quit press 'q' or press any key: ";
        char ch;
        cin >> ch;
        if (ch=='q') break;
        Player p = playerCreation();
        display(p);
        cout << "\nPlayer taking 50 damage" << endl;
        p.damage(50);
        cout << "stats after attack\n";
        display(p);

        if (p.hp <= 0) cout << "Player " << p.name << " is dead" << endl;
        else cout << "Player " << p.name << " is alive" << endl;
    }

    return 0;
}

void line()
{
    cout << "-----------------------------" << endl;
}

void message()
{
    cout << "This is a message from the message function" << endl;
}