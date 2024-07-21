#include <iostream>

int main() {
    const int size = 5; // Change this to the desired size of your array
    
    int arr[size]; // Declare an array of integers
    
    std::cout << "Enter " << size << " integers:" << std::endl;
    
    for (int i = 0; i < size; i++) {
        std::cout << "Enter element " << i << ": ";
        std::cin >> arr[i]; // Read input into each element
    }
    
    std::cout << "You entered:" << std::endl;
    
    for (int i = 0; i < size; i++) {
        std::cout << "Element " << i << ": " << arr[i] << std::endl;
    }
    
    return 0;
}
