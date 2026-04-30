#include <iostream>

// Functions is also a derived datatype
int add(int a, int b)
{
    return a + b;
};

int main()
{
    // Primary Datatypes
    int a = -25;          // signed int
    unsigned int l = 300; // unsigned int
    short k = 25;
    long h = 5000;
    long long ll = 500000000;

    std::cout << "____Integers____" << std::endl;
    std::cout << "a: " << a << std::endl
              << "l: " << l << std::endl;
    std::cout << "k: " << k << std::endl
              << "h: " << h << std::endl
              << "ll: " << ll << std::endl;

    float b = 3.14;
    double df = 3.1475215642664;
    long double ldf = 12.1321546789846216546521;

    std::cout << "____Float____" << std::endl;
    std::cout << "b: " << b << std::endl
              << "df: " << df << std::endl
              << "ldf: " << ldf << std::endl;

    char ch = 'A';
    wchar_t letter;
    char16_t c16;
    char32_t c32;

    std::cout << "____Char____" << std::endl;
    std::cout << "ch: " << ch << std::endl
              << "letter: " << letter << std::endl
              << "c16: " << c16 << std::endl;
    std::cout << "c32: " << c32 << std::endl;

    bool alive = true, is_dead = false;
    // void; no value

    std::cout << "____bool____(Deafult Bool printing)" << std::endl;
    std::cout << "alive: " << alive << std::endl
              << "is_dead: " << is_dead << std::endl;
    std::cout << "____bool____(alpha Bool printing)" << std::endl;
    std::cout << std::boolalpha;
    std::cout << "alive: " << alive << std::endl
              << "is_dead: " << is_dead << std::endl;
    std::cout << std::noboolalpha; // to keep it default

    // Derived Datatypes
    int arr[5];   // arrays
    int *p = &a;  // pointers
    int &ref = a; // references
    
    // User defined datatypes
    // for the user-defined datatypes we have struct, class, union, enum
    struct Player{
        std::string name;
        int hp;
        float speed;
    };
    class Enemy {};
    enum State {};
    // Typedef/using
    using Health=int; // It's like alias
    // String is a user-defined(class) datatype in the std library
    std::string st = "Hello";


    return 0;
}