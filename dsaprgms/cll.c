#include <stdio.h>
#include <stdlib.h>
struct Node {
 int data;
 struct Node* next;
};
struct Node* addToEmpty(struct Node* last, int data) {
 if (last != NULL)
 return last;
 struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
 // assign data to the new node
 newNode->data = data;
 // assign last to newNode
 last = newNode;
 // create link to iteself
 last->next = last;
 return last;
}

void traverse(struct Node* last) {
 struct Node* p;
 if (last == NULL) {
 printf("The list is empty");
 return;
 }
 p = last->next;
 do {
 printf("%d ", p->data);
 p = p->next;
 } while (p != last->next);
}
int main() {
 struct Node* last = NULL;
 last = addToEmpty(last, 6);
 last = addToEmpty(last, 8);
 last = addToEmpty(last, 2);
 last = addToEmpty(last, 10);
 traverse(last);
 //deleteNode(&last, 8);
 printf("\n");
 traverse(last);
 return 0;
}
