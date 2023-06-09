OBJS = main list

CC = gcc

CFLAGS += -c -Wall -g

mylist:$(OBJS)
	$(CC) $^ -o $@
%:%.c
	$(CC) $^ $(CFLAGS) -o $@

clean:
	$(RM) * mylist -r