#include  "lib.h"
extern int cnt;
void List(LIB *head_ptr)
{
	int i=0;
	if(head_ptr==NULL)
	{
		printf("No Book Available :|\n");
	}
	else
	{
		printf("\n--------------------------------------Library-----------------------------------\n");
		printf("    Book Name               |         Book Author         |    Book Count  \n");
		while(i<cnt)
		{
			printf("%-28s|%-29s|%-40d\n",(head_ptr+i)->bn,(head_ptr+i)->ban,(head_ptr+i)->cnt);
			i++;
		}
	}
}
