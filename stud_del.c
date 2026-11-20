#include"header.h"


void deleterollno(sll **ptr,int num)
{
	if(*ptr==0){
		printf("no records found\n");
		return;
	}

	sll *del=*ptr,*prev;
	while(del){
		if(del->rollno == num){
			if(del==*ptr)
				*ptr=del->next;
			else
				prev->next=del->next;
			free(del);
			return;
		}
		prev=del;
			del=del->next;

	}
	printf("no roll no found\n");
}

void deletename(sll **ptr,char *n)
{
	if(*ptr==0){
		printf("no records found\n");
		return;
	}

	sll *del=*ptr,*prev;
	while(del){
		if(strcmp(del->name,n)==0){
			if(del==*ptr)
				*ptr=del->next;
			else
				prev->next=del->next;
			free(del);
			return;
		}
		prev=del;
			del=del->next;

	}
	printf("no name found\n");
}


void deleteallrecords(sll **ptr){
if(*ptr==0){
		printf("no records found\n");
		return;
	}
sll *del=*ptr,*prev;
while(del){
prev=del;
del=del->next;
free(prev);
}
*ptr=NULL;
printf("All records deleted\n");
}


int countnode(sll *ptr){
int c=0;
	if(ptr==0){
		return 0;
	}
while(ptr){
c++;
ptr=ptr->next;
}
return c;
}



void reverselink(sll **ptr){
	if(*ptr==0){
		printf("no records found\n");
		return;
	}
	int c=countnode(*ptr);
	if(c>1){	
	sll **addr=malloc(sizeof(sll *)*c);
	sll *t=*ptr;	
	for(int i=0;i<c;i++){
	addr[i]=t;
	t=t->next;
	}

	for(int i=c-1;i>0;i--){
	addr[i]->next=addr[i-1];	
	}
	addr[0]->next=0;
	*ptr=addr[c-1];
	}
}






