/*this is for sort but here also sort by book name and sort by author name*/
#include"lib.h"
extern int cnt;
void Sort_by_Name(LIB *head_ptr)
{
	int i,j;
	LIB temp;
	for(i=0;i<cnt-1;i++)
	{
		for(j=i+1;j<cnt;j++)
		{
			if(strcmp((head_ptr+i)->bn,(head_ptr+j)->bn)>0)
			{
				temp.bn=(head_ptr+i)->bn;
				temp.ban=(head_ptr+i)->ban;
				temp.np=(head_ptr+i)->np;
				temp.cnt=(head_ptr+i)->cnt;
				(head_ptr+i)->bn=(head_ptr+j)->bn;
				(head_ptr+i)->ban=(head_ptr+j)->ban;
				(head_ptr+i)->np=(head_ptr+j)->np;
				(head_ptr+i)->cnt=(head_ptr+j)->cnt;
				(head_ptr+j)->bn=temp.bn;
				(head_ptr+j)->ban=temp.ban;
				(head_ptr+j)->np=temp.np;
				(head_ptr+j)->cnt=temp.cnt;
			}
		}
	}
}
void Sort_by_Auth(LIB *head_ptr)
{
	int i,j;
	LIB temp;
	for(i=0;i<cnt-1;i++)
	{
		for(j=i+1;j<cnt;j++)
		{
			if(strcmp((head_ptr+i)->ban,(head_ptr+j)->ban)>0)
			{
				temp.bn=(head_ptr+i)->bn;
				temp.ban=(head_ptr+i)->ban;
				temp.np=(head_ptr+i)->np;
				temp.cnt=(head_ptr+i)->cnt;
				(head_ptr+i)->bn=(head_ptr+j)->bn;
				(head_ptr+i)->ban=(head_ptr+j)->ban;
				(head_ptr+i)->np=(head_ptr+j)->np;
				(head_ptr+i)->cnt=(head_ptr+j)->cnt;
				(head_ptr+j)->bn=temp.bn;
				(head_ptr+j)->ban=temp.ban;
				(head_ptr+j)->np=temp.np;
				(head_ptr+j)->cnt=temp.cnt;
			}
		}
	}
}
void Sort(LIB*head_ptr)
{
	int choice;
	if(cnt<=1)
	{
		printf("Not Enough Book To Sort :|\n");
	}
	else
	{
		printf("Enter choice:\n1:sort by book name\n2:sort by author name\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:Sort_by_Name(head_ptr);
			       break;
			case 2:Sort_by_Auth(head_ptr);
			       break;
		}
	}
}
