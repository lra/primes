CC = gcc
CCFLAGS = -O3
CCLIBS =

all: primes

clean:
	rm -f primes primes.o

primes: primes.c
	$(CC) $(CCFLAGS) $(CCLIBS) -o primes primes.c
	strip primes
