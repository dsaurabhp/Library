/*here two function is there 
 * 1) getstring that is nothing but collect data from buffer and allocate memory dynamically and return that address.
 * 2) Add function create dynamically structure and add data but if book name alredy found it increase the count not add that file again.
 * */
#include "lib.h"
extern int cnt;

char *getstring(void)
{
	int i=0;
	char *ptr=NULL;
	do
	{
		ptr=realloc(ptr,i+1);
		ptr[i]=getchar();
	}while(ptr[i++]!='\n');
	ptr[i-1]='\0';
	return ptr;
}

LIB *Add(LIB *head_ptr)
{
	int i;
	char *book_name=NULL,*auth_name=NULL;
	__fpurge(stdin);
	printf("Enter the Book Name: ");
	book_name=getstring();
	printf("Enter the Author Name: ");
	__fpurge(stdin);
	auth_name=getstring();
	for(i=0;i<cnt;i++)
	{
		if(strcmp(book_name,(head_ptr+i)->bn)==0)
		{
			if(strcmp(auth_name,(head_ptr+i)->ban)==0)
			{
				(head_ptr+i)->cnt+=1;
				break;
			}
		}
	}
	if(i==cnt)
	{
		head_ptr=realloc(head_ptr,(cnt+1)*sizeof(LIB));
		if(head_ptr==NULL)
		{
			printf("Error: Not Add :|\n");
		}
		else
		{
			(head_ptr+cnt)->bn=book_name;
			(head_ptr+cnt)->ban=auth_name;
			printf("Enter the page number: ");
			scanf("%d",&(head_ptr+cnt)->np);
			(head_ptr+cnt)->cnt=1;
			cnt++;
		}
	}
	return head_ptr;
}
