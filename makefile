binops: power.o reverse.o replace.o palindrome.o major1.o
        gcc  power.o reverse.o replace.o palindrome.o major1.o -o binops

power.o: power.c
        gcc -c -Wall power.c -lm

reverse.o: reverse.c
        gcc -c -Wall reverse.c -lm

replace.o: replace.c
        gcc -c -Wall replace.c -lm

palindrome.o: palindrome.c
        gcc -c -Wall palindrome.c -lm

major1.o: major1.c major1.h
        gcc -c -Wall major1.c -lm

clean:
        rm -f *.o binops
