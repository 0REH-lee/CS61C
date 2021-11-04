#include <stddef.h>
#include "Exercise 5.h"

#define nodes_size 10

int main()
{
	//definite a list
	node nodes[nodes_size];
	
	//let the list be circle
	for (int i = 0; i < nodes_size; i++){
		if (i == nodes_size-1){
			nodes[i].next = &nodes[0];
		}
		else
		nodes[i].next = &nodes[i + 1];
	}

	//call the judgement function
	ll_has_cycle(&nodes[0]);

	system("pause");
	return 0;
}

int ll_has_cycle(node *head) {
	/* your code here */

	//definite hare and tortoise
	node *hare = head;
	node *tortoise = head;

	//circle or not?
	while (1){

		if (hare->next->next == NULL){
			printf("It is NOT a circle.\n");
			break;
		}

		hare = hare->next->next;
		tortoise = tortoise->next;

		if ( tortoise == hare){
			printf("It is a circle.\n");
			break;
		}
	}

	return 0;
}