#include <iostream>

int main() {
    int *ptr = nullptr; // Declare a pointer and initialize it to nullptr
    
    if (ptr == nullptr) {
        std::cout << "Pointer is null." << std::endl;
    } else {
        // This block won't be executed since the pointer is null
        std::cout << "Pointer is not null." << std::endl;
    }
    
    int value = 42;
    ptr = &value; // Now the pointer points to the memory location of 'value'
    
    if (ptr != nullptr) {
        std::cout << "Pointer is not null." << std::endl;
        std::cout << "Value pointed to by ptr: " << *ptr << std::endl; // Access the value using the pointer
    } else {
        std::cout << "Pointer is null." << std::endl;
    }
    
    return 0;
}
