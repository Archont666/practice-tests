#ifndef TREE_H
#define TREE_H

class BinaryTree {
public:
    void push(int value);
    int pop();
    bool search(int value) const;
};

#endif