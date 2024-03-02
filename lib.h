#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
typedef struct library
{
	char *bn;
	char *ban;
	int np;
	int cnt;
}LIB;
void List(LIB *);
void Count(LIB*);
void Find(LIB*);
void Find_Author(LIB*);
void Find_Book(LIB*);
void Menu(void);
void Save(LIB*);
void Sort_by_Auth(LIB *);
void Sort_by_Name(LIB *);
void Sort(LIB *);
char *getstring(void);
LIB *Sync(void);
LIB *take(LIB *,char *,char *);
LIB *Add(LIB *);
LIB * Take(LIB*);
int strcmp2(char *,char *);
