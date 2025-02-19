# include "PyList.h"

PyList::PyList() {
    myArray = nullptr;
    myCapacity = 0;
    mySize = 0;
}

PyList::PyList(unsigned size) {
    mySize = size;
    myCapacity = 0;
    myArray = new Item[mySize];
}

PyList::PyList(PyList & other) {
    mySize = other.mySize;
    myCapacity = other.myCapacity;
    if (mySize > 0) {

    }
    else {
        myArray = nullptr;
    }
}

unsigned PyList::getSize() const {
    return mySize;
}

void PyList::append(Item it) {
    if (myCapacity < mySize) {
        myArray[myCapacity] = it;
        myCapacity++;
    }
    else {
        if (mySize == 0) {
            myArray = new Item[1];
            mySize++;
        }
        else {
            Item *newArray = new Item[mySize];
            for (unsigned i = 0; i < myCapacity; i++) {
                newArray[i] = myArray[i];
            }
            delete myArray;
            myArray = newArray;
        }
        myArray[myCapacity] = it;
        mySize++;
    }
    myCapacity++;
}