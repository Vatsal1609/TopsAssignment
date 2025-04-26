#include <iostream>

// Global variable
int globalVariable = 10;

// Function to demonstrate local variable
void myFunction() {
    // Local variable
    int localVariable = 5;
    std::cout << "Inside myFunction:" << std::endl;
    std::cout << "  Local variable: " << localVariable << std::endl;
    std::cout << "  Global variable: " << globalVariable << std::endl;

    // Attempting to access a local variable that is not defined in this function will result in an error
    // std::cout << "  Non-existent local variable: " << nonExistentVariable << std::endl;
}

int main() {
    std::cout << "In main:" << std::endl;
    std::cout << "  Global variable: " << globalVariable << std::endl;

    // Attempting to access a local variable that is not defined in this function will result in an error
    // std::cout << "  Local variable: " << localVariable << std::endl;

    myFunction();

    // Modify the global variable
    globalVariable = 20;

    std::cout << "Back in main after myFunction:" << std::endl;
    std::cout << "  Global variable: " << globalVariable << std::endl;

    return 0;
}
