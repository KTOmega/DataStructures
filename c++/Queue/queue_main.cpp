#include "queue.h"
#include <iostream>

using namespace std;

int main(void) {
	Queue queue;
	
	queue.enqueue(0);
	queue.enqueue(1);
	queue.enqueue(2);
	queue.enqueue(3);
	queue.enqueue(4);
	queue.enqueue(5);
	
	cout << "Peek: " << queue.peek() << endl;
	
	while (queue.hasNext()) {
		cout << queue.dequeue() << endl;
	}
	
	return 0;
}
