OBJS = main tool1 tool2

CC = gcc

CFLAGS += -c -Wall -g

mytool:$(OBJS)
	$(CC) $^ -o $@
%:%.c
	$(CC) $^ $(CFLAGS) -o $@

clean:
	$(RM) * mytool -r