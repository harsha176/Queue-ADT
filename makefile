#This script will build queue ADT
CC=gcc
CFLAGS=-Wall -g -c
SRC=queue_ops.c main.c
OBJS=queue_ops.o
HDRS=queue.h
AR=ar
LIB_NAME=libqueue.a
ARKEYS=r
RUN=run
TAG=ctags

all:$(OBJS) main.o
	$(CC) $(OBJS) main.o -o $(RUN)
queue_ops.o:queue.h queue_ops.c
main.o:main.c queue.h

bundle:
	$(AR) $(ARKEYS) $(LIB_NAME) $(OBJS)

.PHONY:clean tags
clean:
	rm -rf $(OBJS) main.o $(RUN)
tags:
	$(TAG) -R $(SRC) $(HDRS)
