#include <gtest/gtest.h>
#include "queue.h"
#include "heap.h"
#include "tree.h"

TEST(QueueTest, PushPopTest) {
    Queue q;
    q.push(1);
    EXPECT_EQ(q.pop(), 1);
}

TEST(HeapTest, PushPopTest) {
    Heap h;
    h.push(5);
    EXPECT_EQ(h.pop(), 5);
}

TEST(TreeTest, SearchTest) {
    BinaryTree t;
    t.push(10);
    EXPECT_TRUE(t.search(10));
}