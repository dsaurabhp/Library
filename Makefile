Library.exe:Menu.o Library.o Add_book_1.o List.o Count.o Find.o Take.o Sort.o
	cc Menu.o Library.o Add_book_1.o List.o Count.o Find.o Take.o Sort.o -o Library.exe
Menu.o:Menu.c
	cc -c Menu.c -o Menu.o
Library.o:Library.c
	cc -c Library.c -o Library.o
Add_book_1.o:Add_book_1.c
	cc -c Add_book_1.c -o Add_book_1.o
List.o:List.c
	cc -c List.c -o List.o
Count.o:Count.c
	cc -c Count.c -o Count.o
Find.o:Find.c
	cc -c Find.c -o Find.o
Take.o:Take.c
	cc -c Take.c -o Take.o
Sort.o:Sort.c
	cc -c Sort.c -o Sort.o
