#include <stdio.h>
#include <stdlib.h>
#include "hComp.h"
#include <string.h>



int main(int argc, char *argv[]) {

  // Check the make sure the input parameters are correct

  /* if (argc != 3) {
      printf("Error: The correct format is \"hcompress -e filename\" or \"hcompress -d filename.huf\"\n"); fflush(stdout);

    exit(1);

  }*/

  // Create the frequency table by reading the generic file

  tnode leafNodes = createFreqTable("decind.txt");
  // Create the huffman tree from the frequency table


  /*
  tnode* treeRoot = createHuffmanTree(leafNodes);

  // encode

  if (strcmp(argv[1], "-e") == 0) {

    // Pass the leafNodes since it will process bottom up

    encodeFile(argv[2], leafNodes);

  } else { // decode

    // Pass the tree root since it will process top down

    decodeFile(argv[2], treeRoot);
    }
*/

}


tnode createFreqTable(char* file){

	FILE *fp = fopen(file, "r");

	int count = 0;
	tnode* freqList = (tnode*) malloc(127 * sizeof(tnode)); 

	while(fgetc(fp) != EOF){

		if (fgetc(fp) >= 0 && fgetc(fp) <= 127)
		{
			freqList[fgetc(fp) - 0].weight++;
		}
		printf("%c\n", freqList->c);
	}
	return *freqList;
}

