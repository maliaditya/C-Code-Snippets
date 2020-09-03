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

void displayList(){
    struct node *temp;
    if(start == NULL){
        printf("EMPTY LIST");

    }else{
        temp = start;
        while(temp!=NULL){
            printf("%d",temp->data);
            temp = temp->link;
        }
  }
}

int menu(){

    
    int ch;

    printf("\n1. Enter data in the list");
    printf("\n2. Delete data in the list");
    printf("\n3. Display list");
    printf("\n4. Exit");
    printf("\n-> Enter Your Choice: ");
    scanf("%d",&ch);

    return(ch);

}

void main(){

    while(1){
        switch(menu()){

            case1: insertNode();
            break;

            case2:deletionOfFirstNode();
            break;

            case3: displayList();
            break;

            case4:exit(0);

            dafault: printf("Invalid Choice");
        }
    }


}