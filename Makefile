NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = src/
SRCS = $(SRC_DIR)ft_printf.c \
	$(SRC_DIR)ft_putchar.c \
	$(SRC_DIR)ft_puthex.c \
	$(SRC_DIR)ft_putnbr.c \
	$(SRC_DIR)ft_putpointer.c \
	$(SRC_DIR)ft_putstr.c \
	$(SRC_DIR)ft_putunsigned.c

OBJS = $(SRCS:.c=.o)

BONUS_SRCS = $(SRC_DIR)handle_bonus.c
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

INCLUDES = -Iincludes/

%.o: %.c includes/ft_printf.h Makefile
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

bonus: $(NAME) .bonus_built

.bonus_built: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)
	touch .bonus_built

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS) .bonus_built

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(NAME)
	$(CC) $(CFLAGS) -Iincludes/ main.c -L. -lftprintf -o test
	./test

.PHONY:	all clean fclean re bonus
