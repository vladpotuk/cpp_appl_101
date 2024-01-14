#include "symbol_stack.h"

SymbolStack::SymbolStack() : top(-1) {
}

void SymbolStack::push(char c) {
    if (!isFull()) {
        stackArray[++top] = c;
    }
}

char SymbolStack::pop() {
    if (!isEmpty()) {
        return stackArray[top--];
    }
    return '\0'; 
}

int SymbolStack::size() const {
    return top + 1;
}

bool SymbolStack::isEmpty() const {
    return top == -1;
}

bool SymbolStack::isFull() const {
    return top == MAX_SIZE - 1;
}

void SymbolStack::clear() {
    top = -1; 
}

char SymbolStack::peek() const {
    if (!isEmpty()) {
        return stackArray[top];
    }
    return '\0'; 
}
