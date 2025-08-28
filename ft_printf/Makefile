SRCS = ft_strlen.c  ft_putchar.c ft_printf.c  formatcheck.c ft_putstr.c ft_putnbrbase.c ft_ptr.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
NAME = libftprintf.a


all : $(NAME)

$(NAME) : $(OBJS)
		ar -r $(NAME) $(OBJS)

clean : 
		$(RM) $(OBJS)

fclean : clean
		$(RM) $(NAME)

re :	fclean $(NAME)
		

.PHONY : all clean fclean re
