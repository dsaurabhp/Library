/*here we have function name Find that give two option for find book by book name or author name*/
#include "lib.h"
extern int cnt;
void Find_Book(LIB*head_ptr)
{
	char *name=NULL;
	int f=1,i=0;
	printf("Enter Book Name: ");
	__fpurge(stdin);
	name=getstring();
	printf("\n--------------------------------------Library-----------------------------------\n");
	printf("    Book Name               |         Book Author         |    Book Count  \n");
	while(i<cnt)
	{
		if(strcmp(name,(head_ptr+i)->bn)==0)
		{
			f=0;
			printf("%-28s|%-29s|%-40d\n",(head_ptr+i)->bn,(head_ptr+i)->ban,(head_ptr+i)->cnt);
		}
		i++;
	}
	if(f)
		printf("%s Book Not Found :(\n",name);
	free(name);
}
void Find_Author(LIB*head_ptr)
{
	char *name=NULL;
	int f=1,i=0;
	printf("Enter Author Name: ");
	__fpurge(stdin);
	name=getstring();
	printf("\n--------------------------------------Library-----------------------------------\n");
	printf("    Book Name               |         Book Author         |    Book Count  \n");
	while(i<cnt)
	{
		if(strcmp(name,(head_ptr+i)->ban)==0)
		{
			f=0;
			printf("%-28s|%-29s|%-40d\n",(head_ptr+i)->bn,(head_ptr+i)->ban,(head_ptr+i)->cnt);
		}
		i++;
	}
	if(f)
		printf("No Book Found for Author %s :(\n",name);
	free(name);
}
void Find(LIB*head_ptr)
{
	int choice;
	printf("Enter choice:\n1:book name\n2:author name:\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:Find_Book(head_ptr);
			break;
		case 2:Find_Author(head_ptr);
		       break;
		default:printf("Wrong Input :|\n");
	}
}
