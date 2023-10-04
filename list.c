#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "list.h"

void add(node *head, int x) {
  // pre:  head points to the first, empty element.
  //       The last element's next is NULL
  // post: A new node containing x is added to the end of the list
  assert(head != NULL);
  node *p = head;
  while (p->next != NULL) {
    p = p->next;
  } // p points to the last element
  node *element = malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element;
}

// exersice 3.b
int size(node *l) {
  //Pre: l points to first empty element.

  //Post: size of the list
  assert(l!=NULL);

  int count = 0; //Initialize a counter variable as 0
  node *p = l->next; //Create a pointer to the "next" component of the node l
  while (p!=NULL){ //While loop incrementing count for every list component that is not NULL
    count++;
    p = p->next; //Update the pointer
  }

	return count;
}

// exersice 3.c and 3.d
void printout(node *l) {
  // pre:  head points to the first, empty element.
  //       The last element's next is NULL
  // post: The values of the list are printed out
  node *p = l->next;
  while (p != NULL) {
    printf("%d, ", p->data);
    p = p->next;
  }
  printf("\n");
}

// exersice 3.e
int largest(node *l) {
  // pre:  head poinst to the first, empty element.
  // 	     The last element's next is NULL.
  // post: Returns the largest value of the list
  assert(l!=NULL);

  node *p = l->next; //Make p point to the first empty element
  int max = 0; //Initialize max variable as 0

  while (p!=NULL){

    if (p->data > max) { //If the current datavalue is higher than one previously seen
      max = p->data;     //Update the max to the current datavalue
    }
    p = p->next;  //update pointer
  }
  return max;
}

#ifndef TEST
int main() {
  node *list = malloc(sizeof(node));
  list->next = NULL; // create first empty element

  add(list, 1);
  add(list, 3);
  add(list, 2);
  // Show list here
  add(list, 2);
  // Show list here

  printf("%d\n",size(list));
  
  printout(list);

  printf("%d", largest(list));
  return 0;
} 

#endif
