#include <iostream>
using namespace std;

class queue {
    int *arr;
    int rear;
    int front;
    int size;

public:
    // Constructor to initialize the queue
    queue(int n) {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Destructor to deallocate memory
    ~queue() {
        delete[] arr;
    }

    bool enqueue(int data) {
        if ((rear + 1) % size == front) {
            cout << "Queue is full" << endl;
            return false;
        } else if (front == -1) {
            front = rear = 0;
            arr[rear] = data;
        } else if (rear == size - 1 && front != 0) {
            rear = 0;
            arr[rear] = data;
        } else {
            rear++;
            arr[rear] = data;
        }
        return true;
    }

    int dequeue() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;
        if (rear == front) {
            front = rear = -1;
        } else if (front == size - 1) {
            front = 0;
        } else {
            front++;
        }
        return ans;
    }
};

int main() {
    queue q(100);  // Initialize a queue with size 100
    q.enqueue(34);
    q.enqueue(78);
    q.dequeue();  // Corrected line to dequeue an element

    return 0;
}

