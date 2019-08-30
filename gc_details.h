// This class defines an element that is stored
// in the garbage collection information list.
//
template <class T>
class PtrDetails
{
  public:
    unsigned int refcount; // current reference count
    T *memPtr;         // pointer to allocated memory
    /* isArray is true if memPtr points
to an allocated array. It is false
otherwise. */
    bool isArray; // true if pointing to array
    /* If memPtr is pointing to an allocated
array, then arraySize contains its size */
    unsigned int arraySize; // size of array
    // Here, mPtr points to the allocated memory.
    // If this is an array, then size specifies
    // the size of the array.

   PtrDetails(T *pointer, unsigned int arrSize)
    {
        memPtr = pointer;
        arraySize = arrSize;
        refcount++;
        
        if(arraySize > 0){
           isArray = true;
        }
    }
};
// Overloading operator== allows two class objects to be compared.
// This is needed by the STL list class.
template <class T>
bool operator==(const PtrDetails<T> &ob1,
                const PtrDetails<T> &ob2)
{
  return((ob1.refcount == ob2.refcount) 
         && (ob1.memPtr == ob2.memPtr) 
         && (ob1.arraySize == ob2.arraySize)
        && (ob1.isArray == ob2.isArray));
}