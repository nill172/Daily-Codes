#include <iostream>

class MyClass {
public:
    MyClass(int x) : x_(x) {}
    int getX() const { return x_; }

private:
    int x_;
};

int main() {
    const int ARRAY_SIZE = 3;
    MyClass* myArray[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++) {
        myArray[i] = new MyClass(i);
    }

    // Delete the second element in the array.
    int indexToDelete = 1;
    delete myArray[indexToDelete];
    myArray[indexToDelete] = nullptr;

    // Shift the remaining elements in the array to the left.
    for (int i = indexToDelete; i < ARRAY_SIZE - 1; i++) {
        myArray[i] = myArray[i + 1];
    }
    myArray[ARRAY_SIZE - 1] = nullptr;

    // Print the remaining elements in the array.
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (myArray[i] != nullptr) {
            std::cout << "myArray[" << i << "]->getX() = " << myArray[i]->getX() << std::endl;
        }
    }

    // Free the memory allocated for each instance of MyClass.
    for (int i = 0; i < ARRAY_SIZE; i++) {
        delete myArray[i];
    }

    return 0;
}
