

CFLAGS = -Wall

# Should be equivalent to your list of C files, if you don't build selectively
SRC=$(wildcard *.cpp)
OS=$(wildcard *.o)

lib: $(OS) compile
	ar rcs libdebug.a $^
	ranlib libdebug.a
compile: $(SRC)
	g++ -fpermissive -c $^
clean:
	rm libdebug.a
	rm *.o
