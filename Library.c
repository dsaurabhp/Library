#include"lib.h"
int cnt;
int main()
{
	LIB *head=NULL;
	char choice;
	while(1)
	{
		Menu();
		__fpurge(stdin);
		scanf("%c",&choice);
		switch(choice)
		{
			case 'a':
			case 'A':head=Add(head);
				 break;
			case 'l':
			case 'L':List(head);
				 break;
			case 'c':
			case 'C':Count(head);
				 break;
			case 't':
			case 'T':List(head);
				 head=Take(head);
				 break;
			case 's':
			case 'S':Sort(head);
				 break;
			case 'f':
			case 'F':Find(head);
				 break;
			case 'v':
			case 'V'://Save(head);
				 //printf("I will create function name Save()\n");
				 break;
			case 'q':
			case 'Q':
				 exit(0);
		}
	}
}
