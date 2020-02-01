#include <stdio.h>


typedef struct tnode {

  double weight;

  int c;

  struct tnode* left;

  struct tnode* right;

  struct tnode* parent;
}tnode;

tnode createFreqTable(FILE* fp);