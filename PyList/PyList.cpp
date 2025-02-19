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