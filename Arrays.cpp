#include <iostream>

int main() {
    int arr[5] = {1,2,3,4,5};
    std::string li[6] = {"apple", "banana", "cherry", "date", "elderberry", "fig"};

    //Dynamic array
    int dynarr[3];
    for(int i = 0; i<3; i++){
        std::cout << "Enter the value for element " << i << ": ";
        std::cin >> dynarr[i];
    }

    for(int i=0;i<std::size(dynarr);i++){
        std::cout << "Element " << i << ": " << dynarr[i] << std::endl;
    }

    std::string strarr[5];
    std::string strarr2[5] = {"one", "two", "three", "four", "five"};

    std::cout << "Size of the array: " << std::size(arr) << std::endl;
    std::cout << "Size of the string array: " << std::size(li) << std::endl;
    std::cout << "Size of the each string in arr2: " << std::size(strarr2[0]) << std::endl;

    std::string names[] = {"Alice", "Bob", "Charlie", "David", "Eve"};
    for (const auto& name:names) {
        std::cout << name << " ";
    }
    std::cout << std::endl;
    for (auto& name:names) {
        name = "Hello " + name;
    }
    std::cout << "after modifying using Reference(&): " << std::endl;
    for (const auto& name:names) {
        std::cout << name << " ";
    }
    std::cout << std::endl;
    std::cout << "not using Reference(&) to modify: " << std::endl; 
    for (auto name:names) {
        name = "Hi " + name;
    }
    for (const auto& name:names) {
        std::cout << name << " ";
    }
    std::cout << std::endl;

    std::cout << "Address of the array: " << dynarr << std::endl;
    std::cout << "your elements are: ";
    for(int i=0;i<sizeof(dynarr)/sizeof(dynarr[0]);i++){
        std::cout << dynarr[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Total elements in the integer array: " << sizeof(arr)/sizeof(arr[0]) << std::endl;

    return 0;
}