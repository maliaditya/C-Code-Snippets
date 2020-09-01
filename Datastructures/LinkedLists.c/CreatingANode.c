 #include <stdio.h>
#include <stdlib.h>
struct node{

    int data ;
    struct node *link;
};

struct node *start = NULL;  

struct node *createNode(){

    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));

    return(n);
}

void insertNode(){

    struct node *temp = createNode();

    printf("\nEnter a number: ");
    scanf("%d",&temp->data);
    temp->link = NULL;

    if(start == NULL){
        start = temp;
    }else{
        struct node *lastnode = start;
        while(lastnode->link != NULL){
            lastnode = lastnode->link;
        }
        lastnode->link = temp;
    }
}

void deletionOfFirstNode(){
    struct node *temp;
  if(start == NULL){
      printf("EMPTY LIST");

  }else{
      temp = start;
      start = start->link;
      free(temp);
  }

}

void main(){

insertNode();


}