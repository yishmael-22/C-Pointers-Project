#include <iostream>
using namespace std;

// Function to demonstrate pointer usage in function arguments
void squareValue(int *ptr) {
    // Dereferencing the pointer to modify the original variable
    *ptr = (*ptr) * (*ptr);
}

int main() {
    // Declare an integer variable
    int number = 5;
    
    // Declare a pointer that stores the address of 'number'
    int *ptr = &number;

    // Display the initial value of the variable
    cout << "Initial value of number: " << number << endl;

    // Display the address of the variable using the address-of operator (&)
    cout << "Address of number: " << &number << endl;

    // Display the value of the pointer (the address it holds)
    cout << "Pointer (ptr) holds the address: " << ptr << endl;

    // Dereference the pointer to get the value stored at the address
    cout << "Value pointed to by ptr (dereferencing): " << *ptr << endl;

    // Modify the value of the variable using the pointer
    *ptr = 10;
    
    // Display the new value of the variable after modifying it through the pointer
    cout << "Value of number after modifying through pointer: " << number << endl;

    // Pass the pointer to a function to modify the value of number
    squareValue(ptr);

    // Display the value of the variable after passing it to the function
    cout << "Value of number after squaring through pointer in function: " << number << endl;

    return 0;
}