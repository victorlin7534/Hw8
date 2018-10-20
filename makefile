default: sieve.o tester.o
	gcc -o test sieve.o tester.o
sieve.o: sieve.c sieve.h
	gcc -c sieve.c -lm
tester.o: tester.c sieve.h
	gcc -c tester.c
run:
	./test 
clean:
	rm -f *.o *.exe *.out *~ test *stackdump
