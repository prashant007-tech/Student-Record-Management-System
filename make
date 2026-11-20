exe:stud_main.o stud_add.o stud_mod.o stud_save.o stud_del.o stud_print.o
	cc stud_main.o stud_add.o stud_mod.o stud_save.o stud_del.o stud_print.o -o exe
stud_main.o:
	cc -c stud_main.c
stud_add.o:
	cc -c stud_add.c
stud_mod.o:
	cc -c stud_mod.c
stud_save.o:
	cc -c stud_save.c
stud_del.o:
	cc -c stud_del.c
stud_print.o:
	cc -c stud_print.c

clear:
	@echo "cleaning up---"
	@rm -vr *.o


