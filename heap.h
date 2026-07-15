#ifndef HEAP_H
#define HEAP_H

class Heap {
public:
    void push(int value);
    int pop();
    bool isEmpty() const;
};

#endif