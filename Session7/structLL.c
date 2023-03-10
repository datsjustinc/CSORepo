#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

// Adds to the front!
struct Node* add2front(int val, struct Node* L) {
  struct Node* T = malloc(sizeof(struct Node));
  T->data = val;
  T->next = L;
  return T;
}

// Recursive, prints it backwards!
// Since the list is built backwards, this prints forward!
void printList(struct Node* L) {
  if( L == NULL )
    printf("\n");
  else {
    printList(L->next);
    printf("%d ", L->data);
  }
}

int main() {
  struct Node* mylist = NULL;
  int num;

  printf("Numbers? ");
  scanf("%d", &num);
  while( num != -1 ) {
    mylist = add2front(num, mylist);
    scanf("%d", &num);
  }

  printList(mylist);

  return 0;
}