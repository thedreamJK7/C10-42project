CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_putstr.c main.c

OBJS = $(SRCS:.c=.o)

TARGET = ft_cat

GREEN  = \033[0;32m
RED    = \033[0;31m
RESET  = \033[0m

all: $(TARGET)

$(TARGET): $(OBJS)
	@echo "$(GREEN)🔨 Linking...$(RESET)"
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "$(RED)🧹 Cleaning object files...$(RESET)"
	rm -f $(OBJS)

fclean: clean
	@echo "$(RED)🧼 Removing binary...$(RESET)"
	rm -f $(TARGET)