
#ifndef DECLARTION
#define DECLARATION
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student 
{
int rollno;
char name[50];
float percentage;
struct student *next;
}sll;
void addnode(sll **);
void printnodes(sll *);
void savefile(sll *);
void deleterollno(sll **,int);
void deletename(sll **,char *);
void deleteallrecords(sll **);
void searchrollno(sll *,int );
void searchname(sll *,char *);
void searchperecentage(sll *,float );
void reverselink(sll **);
int countnode(sll *);
void sortnames(sll *);
void sortpercentage(sll *);
#endif
