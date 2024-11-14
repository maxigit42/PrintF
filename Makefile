NAME = libftprintf.a

SRCS = ft_printf.c ft_putnbr.c ft_putchr.c ft_putf.c ft_puthexmax.c ft_puthexmin.c ft_putmem.c ft_putstr.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all:$(NAME) 

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
