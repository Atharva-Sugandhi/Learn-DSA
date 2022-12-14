#include <iostream>
using namespace std;
#include "Queuetemplatearray.h"

int main()
{
    QueueUsingArray<int> q(5);

    (q.isEmpty()) ? cout << "True\n" : cout << "False\n";

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);

    cout << q.getSize() << endl;

    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;

    (q.isEmpty()) ? cout << "True\n" : cout << "False\n";
    cout << q.front() << endl;

    cout << q.getSize() << endl;

    return 0;
}