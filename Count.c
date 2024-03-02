/* count function print the book data if found that particullay book name*/
#include "lib.h"
extern int cnt;
void Count(LIB*head_ptr)
{
	char *name=NULL;
	int f=1,i=0;
	printf("Enter book name : ");
	__fpurge(stdin);
	name=getstring();
	printf("\n-------------------Library-----------------\n");
	while(i<cnt)
	{
		if(strcmp(name,(head_ptr+i)->bn)==0)
		{
			f=0;
			printf("we have total %d book %s and author is %s\n",(head_ptr+i)->cnt,(head_ptr+i)->bn,(head_ptr+i)->ban);
		//	break;
		}
		i++;
	}
	if(f)
	{
		printf("we don't have %s book :(\n",name);
	}
}
