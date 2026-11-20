#include"header.h"

void savefile(sll *ptr){
	FILE *fp=fopen("student.dat","w");
	if(fp==0){
		printf("file not opened\n");
		return ;
	}

	if(ptr==0){
		printf("no records found\n");
		return;
	}

	while(ptr)
	{
		fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
		ptr=ptr->next;
	}

	fclose(fp);
}
