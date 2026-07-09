#include<iostream>
#include<algorithm>  // sort, reverse, fill, copy, max_element, min_element, binary_search
#include<numeric>    // accumulate
#include<iterator>   // std::size

int main(){
    int a[] = {4,5,6,7,4,9,45};

    std::cout << "Original array: ";
    for(int i=0; i<std::size(a); i++){
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    std::sort(a, a+std::size(a)); // sort the array in ascending order
    std::cout << "Sorted array: ";
    for(int i=0; i<std::size(a); i++){
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    

    std::reverse(a, a+std::size(a)); // reverse the array
    std::cout << "Reversed array: ";
    for(int i=0; i<std::size(a); i++){
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;


    int fillarr[10];

    std::fill(fillarr, fillarr+std::size(fillarr),25); // fill the array with 25
    std::cout << "Filled array: ";
    for(int i=0; i<std::size(fillarr); i++){
        std::cout << fillarr[i] << " ";
    }
    std::cout << std::endl;

}