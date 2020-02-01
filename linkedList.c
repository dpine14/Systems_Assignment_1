#include <stdio.h>
#include <stdlib.h> // malloc
#include "llHeader.h"


LinkedList* llCreate() {
  return NULL;
}

int llIsEmpty(LinkedList* ll) {
  return (ll == NULL);
}

void llDisplay(LinkedList* ll) {
  
  LinkedList* p = ll;

  printf("[");
  
  while (p != NULL) {
    printf("%c, ", (*p).value.c);
    p = p->next;
  }

  printf("]\n");
}


void llAdd(LinkedList** ll, tnode newValue) {

  // Create the new node
  LinkedList* newNode = (LinkedList*)malloc(1 * sizeof(LinkedList));
  newNode->value = newValue;
  newNode->next = NULL;
  
  // Find the end of the list
  LinkedList* p = *ll;

  if (p == NULL) {  // Add first element
    *ll = newNode;  // This is why we need ll to be a **

  } else {

    while (p->next != NULL) {
      p = p->next;
    }
    
    // Attach it to the end
    p->next = newNode;
  }

}

void llFree(LinkedList* ll) {
  LinkedList* p = ll;

  while (p != NULL) {
    LinkedList* oldP = p;
    p = p->next;
    free(oldP);
  }
  
}

int main() {

  tnode *n = (tnode*) malloc(1 * sizeof(tnode));
  n->c = 'a';
  
  LinkedList* l = llCreate();
  llDisplay(l);

  llAdd(&l, *n);
  llDisplay(l);

  llAdd(&l, *n);
  llDisplay(l);

  llAdd(&l, *n);
  llDisplay(l);

  llAdd(&l, *n);
  llDisplay(l);

  llFree(l);
}
