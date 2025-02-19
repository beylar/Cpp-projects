
typedef int Item;

class PyList {
    public:
        PyList();
        PyList(unsigned size);

        PyList(PyList & other);

        ~PyList();

        unsigned getSize() const;

        void append(Item it);

        private:
            Item *myArray;
            unsigned myCapacity;
            unsigned mySize;
};