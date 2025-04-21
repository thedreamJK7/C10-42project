CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_putstr.c main.c

OBJS = $(SRCS:.c=.o)

TARGET = ft_display_file

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)