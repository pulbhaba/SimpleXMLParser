CC=gcc
AR=ar rcsUu

LIBSRC=./lib/Parser.c
TESTSRC=./Parser_Test.c

LIBOBJS=$(LIBSRC:.c=.o)
TESTOBJS=$(TESTSRC:.c=.o)

libparser: $(LIBOBJS)
	 $(AR) $@.a $(LIBOBJS)

test: libparser $(TESTOBJS)

clean:
	rm $(LIBOBJS) libparser.a


