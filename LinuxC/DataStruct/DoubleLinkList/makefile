OBJS = main dlist

CC = gcc

CFLAGS += -c -Wall -g

mydlist:$(OBJS)
	$(CC) $^ -o $@
%:%.c
	$(CC) $^ $(CFLAGS) -o $@

clean:
	$(RM) * mydist -r