#include "hComp.h"

typedef struct node {
  tnode value;
  struct node* next;
} LinkedList;

LinkedList* llCreate();

int llIsEmpty(LinkedList* ll);
void llDisplay(LinkedList* ll);
void llAdd(LinkedList** ll, tnode newValue);
void llFree(LinkedList* ll);