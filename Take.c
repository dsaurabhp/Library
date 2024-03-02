/*if we have have single book than only this function do something otherwise not we check that using headptr!=NULL
 * if we take book suppose we have that particular book 2 than we reduced the cout but if we have only one book than
 * remove that book name because after that we don't have that book*/
#include "lib.h"
extern int cnt;
LIB * Take(LIB*head_ptr)
{
	int i=0;
	if(head_ptr!=NULL)
	{
		char *book_name=NULL,*author_name=NULL;
		printf("Enter book name: ");
		__fpurge(stdin);
		book_name=getstring();
		printf("Enter author name: ");
		__fpurge(stdin);
		author_name=getstring();
		int f=1;
		while(i<cnt)
		{
			if(strcmp(book_name,(head_ptr+i)->bn)==0)
			{
				if(strcmp(author_name,(head_ptr+i)->ban)==0)
				{
					if((head_ptr+i)->cnt>1)
					{
						(head_ptr+i)->cnt-=1;
					}
					else	
					{
						char *temp=(head_ptr+i)->bn;
						free(temp);
						temp=(head_ptr+i)->ban;
						free(temp);
						memmove((head_ptr+i),(head_ptr+i+1),(cnt-i)*sizeof(LIB));
						head_ptr=realloc(head_ptr,((--cnt))*sizeof(LIB));
					}
					f=0;
					break;
				}
			}
			i++;
		}
		if(f)
			printf("Not Found book %s with author name %s :(\n",book_name,author_name);
	}
	return head_ptr;
}
