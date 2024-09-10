#include "IntArray.h"

namespace ds {

/**
 * Construct a new IntArray object
 *
 * @param len length of the IntArray
 */
IntArray::IntArray(int len) {
  // TODO: initialize data members
  length = len;
  storedArray = new int[len];


}

/**
 * Destroy the IntArray object
 */
IntArray::~IntArray() {
  // TODO: delete the internal array
  delete[] storedArray;
  storedArray = nullptr;
}

/**
 * Reverse the IntArray
 */
void IntArray::reverse() {
  // TODO: reverse `storedArray
  int left = 0;
  int right = length - 1;
  while(left < right){
    int temp = storedArray[left];
    storedArray[left] = storedArray[right];
    storedArray[right]= temp;

    left++;
    right--;
  }
}

} // namespace ds
