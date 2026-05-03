#include <iostream>

int main() {
    // For loop
    std::cout << "__ for loop __" << std::endl;
    for(int i=-10; i<5; i+=2) {
        std::cout << i << " ";
    }

    // while loop
    std::cout << "\n\n__ while loop __" << std::endl;
    while (true) {
        char c;
        std::cout << "Enter a character (q to quit): ";
        std::cin >> c;
        if (c == 'q') {
            break;
        }
        std::cout << "You entered: " << int(c) << std::endl;
    };

    // do-while loop
    std::cout << "\n__ do-while loop __" << std::endl;
    do{
        char c;
        std::cout << "Enter a character (Q to quit): ";
        std::cin >> c;
        if (c == 'Q') {
            break;
        }
        std::cout << "You entered: " << int(c) << std::endl;
    } while (true);


    return 0;
}
