/* 
 * Queue.cpp
 *
 * Description: Queue data collection ADT class.
 *              Implementation of an int sequence with enqueue/dequeue ...
 * Class Invariant: ... in FIFO order
 *
 * Author:
 * Date:
 */
 
#include "Queue.h"


// Description: Constructor
Queue::Queue() : elementCount(0), capacity(INITIAL_SIZE), frontindex(0), backindex(0) {
} 


// Description: Inserts newElement at the back (O(1))
void Queue::enqueue(int newElement) {
    elementCount++;
    elements[backindex] = newElement;
    backindex = (backindex + 1) % capacity;
} 


// Description: Removes the frontmost element (O(1))
// Precondition: Queue not empty
void Queue::dequeue() {
    elementCount--;
    frontindex = (frontindex + 1) % capacity;
}


// Description: Returns a copy of the frontmost element (O(1))
// Precondition: Queue not empty
int Queue::peek() const {
    return elements[frontindex];
} 


// Description: Returns true if and only if queue empty (O(1))
bool Queue::isEmpty() const {
    return elementCount == 0;
} 


