#main target
all:hello
#main target dependency
hello: major1.o palindrome.o power.o replace.o reverse.o
gcc -o main major1.o palindrome.o power.o replace.o reverse.o -lm

#satisfying dependency of target
major1.o:major1.c
gcc -c major1.c -lm
palindrome.o:palindrome.c
gcc -c palindrome.c -lm
power.o:power.c
gcc -c power.c -lm
replace.o:replace.c
gcc -c replace.c -lm
reverse.o:reverse.c
gcc -c reverse.c -lm
clean:
rm -rf *o hello
~                  
