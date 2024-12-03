#include <iostream>
#include "Stack.cpp"

int main() {
    Stack<int> stack;

   
    stack.push(10);
    stack.push(20);
    stack.push(30);

   
    std::cout << "Stack size: " << stack.getSize() << std::endl;

    std::cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << std::endl;

    std::cout << "Popped: " << stack.pop() << std::endl;
    std::cout << "Popped: " << stack.pop() << std::endl;

    
    std::cout << "Stack size after popping: " << stack.getSize() << std::endl;

    
    std::cout << "Is stack empty now? " << (stack.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}
