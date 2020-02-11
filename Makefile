CC=gcc
AR=ar rcs
DEL=rm -f
RUN=./$(TEST)

CFLAGS=-I./lib
LDFLAGS=-L.
LDLIBS=-lparser

LIBSRC=./lib/Parser.c
TESTSRC=./Parser_Test.c

LIBOBJS=$(LIBSRC:.c=.o)
TESTOBJS=$(TESTSRC:.c=.o)

LIB=libparser.a
TEST=test
EXECUTABLE=run

all: $(LIB) $(TEST) $(EXECUTABLE) 

$(EXECUTABLE): $(LIB) 
	$(CC) $(CFLAGS) $(TESTSRC) $(LDFLAGS) $(LDLIBS) -o $@

$(TEST): $(LIB) $(TESTOBJS)
	$(CC) -o $@ $(TESTOBJS) $(LIBOBJS) 

$(LIB): $(LIBOBJS)
	$(AR) $@ $(LIBOBJS)

clean:
	$(DEL) $(LIBOBJS) $(TESTOBJS) $(LIB) $(EXECUTABLE) $(TEST)


