#include <iostream>

int main(){
    int a;
    std::cout<<"Enter a number: ";
    std::cin >> a;

    // if else if
    if(a==0){
        std::cout << "The given number " << a << " is neither odd nor even." << std::endl;
    } else if(a%2==0) {
        if (a<0) {
            std::cout << "The given number " << a << " is negative and even." << std::endl;
        } else {
            std::cout << "The given number " << a << " is positive and even." << std::endl;
        }
    } else {
        std::cout << "The given number " << a << " is odd." << std::endl;
    }

    // switch case
    int ch;
    std::cout << "Enter a number between 1 and 3: ";
    std::cin >> ch;

    switch(ch){
        case 1:
            std::cout << "Choice is 1" << std::endl;
            break;
        case 2:
            std::cout << "Choice is 2" << std::endl;
            break;
        case 3:
            std::cout << "Choice is 3" << std::endl;
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
    }

    return 0;
}