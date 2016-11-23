CC = gcc
CFLAGS = -O3 -pthread
LDFLAGS = $(CFLAGS)
OBJECTS = csapp.o echoclient.o echoserver.o
PROJECTS = echoclient echoserver echoserver_t

all: $(OBJECTS) $(PROJECTS)

echoclient: csapp.o echoclient.o

echoserver: csapp.o echoserver.o

echoserver_t: csapp.o echoserver_t.o

clean:
	rm $(PROJECTS) $(OBJECTS)
