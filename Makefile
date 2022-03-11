main: main.o funcs.o caesar.o vigenere.o decrypt.o
	g++ -o main main.o caesar.o vigenere.o decrypt.o

tests: tests.o caesar.o vigenere.o decrypt.o
	g++ -o tests tests.o funcs.o caesar.o vigenere.o decrypt.o

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o

test-ascii.o: test-ascii.cpp

cesar.o: cesar.cpp caesar.h

vigenere.o: vigenere.cpp vigenere.h

decrypt.o: decrypt.cpp decrypt.h

main.o: main.cpp  caesar.h vigenere.h decrypt.h

tests.o: tests.cpp doctest.h caesar.h vigenere.h decrypt.h

clean:
	rm -f main.o tests.o cesar.o vigenere.o decrypt.o test-ascii.o:
