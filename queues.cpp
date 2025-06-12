#include <iostream>
using namespace std;




class queues {
    int FRONT, REAR, max = 5;
    int queue_array[5];

    public:
    Queues() {
        FRONT = -1;
        REAR = -1;
    }

    void insert() {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        cout << endl;
    }


if ((FRONT == 0 && REAR == max -1) || (FRONT == REAR + 1)) {
    COUT << "\nQueue overflow\n";
    return 0;
}

if (FRONT == -1) {
    FRONT = 0;
    REAR = 0;
}
}