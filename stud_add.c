#include "header.h"

void addnode(sll **head){
	sll *new=malloc(sizeof(sll));
	if(*head==0){
		new->rollno=1;
		new->next=*head;
		*head=new;
	}
	else{
		sll *searchsmall=*head;
		int small=1;
		searchsmall=*head;
		while(searchsmall){
		l:
		if(searchsmall->rollno==small){
			small++;
				searchsmall=*head;
			goto l;
		}
			searchsmall=searchsmall->next;
		}
		new->rollno=small;
                sll *last=*head;
		while(last->next){
		last=last->next;
		}
		last->next=new;
		new->next=0;

	}
printf("enter the name and percentage \n");
scanf("%s%f",new->name,&new->percentage);
if(!(new->percentage>=0 && new->percentage<=100))
{
printf("eneter the range b/w 0 to 100\n");
scanf("%f",&new->percentage);
}

}

