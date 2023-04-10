struct Entry {
    int key;
    char *value;
};

typedef struct Entry Entry;

struct Heap {
    int capacity;
    int size;
    Entry **elements;
};

typedef struct Heap Heap;

Heap* makeHeap(int capacity) {
//Make the heap
Heap* theHeap = calloc(1, sizeof(Heap));
//set its capacity to param
theHeap->capacity = capacity;
//inital size is 0
theHeap->size = 0;
//elements contains pointers (references) to Entry objects.
theHeap->elements = calloc(capacity,sizeof(Heap*));
//iterate capacity times allocating an entry reference for each element to be placed
int i = 0;
for(; i < capacity; i++) {
   theHeap->elements[i] = calloc(1, sizeof(Entry));
}

return theHeap;
}
