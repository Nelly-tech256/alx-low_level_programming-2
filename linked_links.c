#include <stdio.h>
#include <stdlib.h>//to give as malloc
typedef struct node *nodeptr;

//struct defn and tpyedef bellow are
//broken into two parts for clarity of explaining
// in our code we would usually combine the two
struct node{
	int data;
	nodeptr next;
};
typedef struct node node;

int main(int argc, const char *argv[]){
	nodeptr first = NULL;

	first->data = 61;

	first =malloc (sizeof (node));
	(first->next)->next = NULL;
	(first->next)->data = 62;
	printf("hello, Uganda!\n");
	return 0;
}


