#include "header.h"

void printnodes(sll *ptr){
if(ptr==0){
printf("no records found\n");
return;
}
while(ptr){
printf("%d %s %.2f\n",ptr->rollno,ptr->name,ptr->percentage);
ptr=ptr->next;
}


}
