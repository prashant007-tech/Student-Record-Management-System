#include"header.h"


void searchrollno(sll *ptr,int roll){
	if(ptr==0){
		printf("no records found\n");
		return ;
	}
	while(ptr){
		if(ptr->rollno == roll){
			printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
			printf("enter the name and perecentage to update\n");
			scanf("%s%f",ptr->name,&ptr->percentage);
			if(!(ptr->percentage>=0 && ptr->percentage<=100))
			{
				printf("eneter the range b/w 0 to 100\n");
				scanf("%f",&ptr->percentage);
			}
		}
		ptr=ptr->next;
	}


}


void searchname(sll *ptr,char *name){
	int flag=0,opp;
	sll *temp,*h=ptr;
	if(ptr==0){
		printf("no records found\n");
		return ;
	}
	while(ptr){
		if(strcmp(ptr->name,name)==0){
			printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
			temp=ptr;
			flag++;
		}
		ptr=ptr->next;
	}
	if(flag>1){
		printf("eneter the roll no\n");
		scanf("%d",&opp);
		searchrollno(h,opp);
	}
	else{
		printf("enter the name and perecentage to update\n");
		scanf("%s%f",temp->name,&temp->percentage);
		if(!(temp->percentage>=0 && temp->percentage<=100))
		{
			printf("eneter the range b/w 0 to 100\n");
			scanf("%f",&temp->percentage);
		}
	}
}


void searchperecentage(sll *ptr,float per){
	int flag=0,opp;
	sll *temp,*h=ptr;
	if(ptr==0){
		printf("no records found\n");
		return ;
	}
	while(ptr){
		if(ptr->percentage==per){
			printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
			temp=ptr;
			flag++;
		}
		ptr=ptr->next;
	}
	if(flag>1){
		printf("eneter the roll no\n");
		scanf("%d",&opp);
		searchrollno(h,opp);
	}
	else{
		printf("enter the name and perecentage to update\n");
		scanf("%s%f",temp->name,&temp->percentage);
		if(!(temp->percentage>=0 && temp->percentage<=100))
		{
			printf("eneter the range b/w 0 to 100\n");
			scanf("%f",&temp->percentage);
		}
	}
}


void sortnames(sll *ptr){
	if(ptr==0){
		printf("no records found\n");
		return ;
	}
	sll *p1=ptr,*p2,*t=malloc(sizeof(sll));
	int c=countnode(ptr);
	for(int i=0;i<c-1;i++){
	p2=p1->next;
	for(int j=0;j<c-i-1;j++){
	if(strcmp(p1->name,p2->name)>0){
		t->rollno=p1->rollno;
		strcpy(t->name,p1->name);
		t->percentage=p1->percentage;

		p1->rollno=p2->rollno;
		strcpy(p1->name,p2->name);
		p1->percentage=p2->percentage;
		
		p2->rollno=t->rollno;
		strcpy(p2->name,t->name);
		p2->percentage=t->percentage;
	
	}
	p2=p2->next;
	}
	p1=p1->next;
	}


}


void sortpercentage(sll *ptr){
	if(ptr==0){
		printf("no records found\n");
		return ;
	}
	sll *p1=ptr,*p2,*t=malloc(sizeof(sll));
	int c=countnode(ptr);
	for(int i=0;i<c-1;i++){
	p2=p1->next;
	for(int j=0;j<c-i-1;j++){
	if(p1->percentage < p2->percentage){
		t->rollno=p1->rollno;
		strcpy(t->name,p1->name);
		t->percentage=p1->percentage;

		p1->rollno=p2->rollno;
		strcpy(p1->name,p2->name);
		p1->percentage=p2->percentage;
		
		p2->rollno=t->rollno;
		strcpy(p2->name,t->name);
		p2->percentage=t->percentage;
	
	}
	p2=p2->next;
	}
	p1=p1->next;
	}


}


























