#include"header.h"

sll *head=0;
int main(){
	int op=0,num,roll,flag=1;
	float per;	
	char n[10],a;
	while(flag){
		printf(" 1)addnode \n 2)delete a record \n 3)show the list\n 4)modify a record\n 5)save records\n 6)exit\n 7)sort the list\n 8)delete all the records\n 9)Reverse the list\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:addnode(&head);
			       break;
			case 2:printf("r : Enter roll number to delete\nn : Enter name to delete\n");
				scanf(" %c",&a);
					switch(a){
						case 'r':printf("enter the roll no to delete\n");
							scanf("%d",&num);
							deleterollno(&head,num);
								break;
						case 'n':printf("enter the name to delete\n");
							scanf("%s",n);
							deletename(&head,n);
								break;
						}
				break;
			case 3:printf("--------------------------------------------\n");
				printnodes(head);
				printf("-------------------------------------------\n");
				break;
			case 4:printf("R/r: Search by roll number\nN/n : Search by name\nP/p : Search by percentage\n");
				scanf(" %c",&a);
				
				switch(a){
					case 'r':printf("eneter the roll no to modify\n");
						scanf("%d",&roll);
						searchrollno(head,roll);
						break;
					case 'n':printf("eneter the name to modify\n");
						scanf("%s",n);
						searchname(head,n);
						break;	
					case 'p':printf("eneter the perecentage to modify\n");
						scanf("%f",&per);
						searchperecentage(head,per);
						break;
				}
				break;
			case 5:savefile(head);
				break;
			case 6:printf("S/s : Save and exit\nE/e : Exit without saving\n");
				scanf(" %c",&a);
				switch(a){
					case 's':savefile(head);
						deleteallrecords(&head);
						flag=0;
						break;
					case 'e':deleteallrecords(&head);
						 flag=0;
						break;
				}
				break;
			case 7:printf("N/n : Sort with name\nP/p : Sort with percentage\n");
				scanf(" %c",&a);
				switch(a){
					case 'n':sortnames(head);
						break;
					case 'p':sortpercentage(head);
						break;
				}
				break;
			case 8:deleteallrecords(&head);
				break;
			case 9:reverselink(&head);
				break;

		}
	}



	return 0;
}
