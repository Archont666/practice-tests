#ifndef QUEUE_H
#define QUEUE_H

class Queue {
public:
    void push(int value);
    int pop();
    bool isEmpty() const;
};

#endif