
typedef int Item;

class PyList {
    public:
        PyList();
        PyList(unsigned size);

        PyList(PyList & other);

        ~PyList();

        private:
            Item *myArray;
            unsigned myCapacity;
            unsigned mySize;
};