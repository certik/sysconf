ncpus: ncpus.o
	gcc -o ncpus ncpus.o

ncpus.o: ncpus.c
	gcc -c -o ncpus.o ncpus.c
