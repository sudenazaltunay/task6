#include <stdexcept>

template <typename T>
class Node {
public:
    T data;
    Node* next;
    Node(T data, Node* next) {
        this->data = data;
        this->next = next;
    }
};

template <typename T>
class Stack {
    Node<T>* top;
    int size;

public:
    Stack() {
        top = nullptr;
        size = 0;
    }

    void push(T value) {
        top = new Node<T>(value, top);
        size++;
    }

    T pop() {
        if (top == nullptr) {
            throw std::underflow_error("Stack is empty - it is not possible to remove an element");
        }
        T val = top->data;
        Node<T>* oldTop = top;
        top = top->next;
        delete oldTop;
        size--;
        return val;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    int getSize() {
        return size;
    }
};
