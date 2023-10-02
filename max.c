#include "max.h"
#include <assert.h>
#include <stdio.h>

//Computes the maximum integer in an array of any size
int max(int *numbers, int size) { //When an array is called in a function it defaults as a pointer to the first element in the array

  // Excercise 2
  // Implement your code below...
  assert(size > 0);

  int current=0; //Variable to store the current max int
  for (int i = 0; i<size; i++){
    if(numbers[i]>current){current = numbers[i];} //If the current number in the array is larger than the current max, update the max

  }
  int result = current; //Store the result in a new variable
  return result;
}

#ifndef TEST

int main() {
  int arr[] = {9,76,213,87,17};
  int size = sizeof(arr) / sizeof(arr[0]);

  int test = max(arr,size);

  printf("%d",test);


	return 0;
}

#endif
