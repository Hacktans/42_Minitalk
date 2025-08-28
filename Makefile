NAMESERVER = server
NAMECLIENT = client
NAMECLIENTBONUS = client_bonus
NAMESERVERBONUS =  server_bonus
SRCCLIENTBONUS = client_bonus.c
SRCSERVERBONUS = server_bonus.c
SRCSERVER = server.c
SRCCLIENT = client.c
LIB = ft_printf/libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

all : $(LIB) $(NAMESERVER) $(NAMECLIENT)

$(LIB) : 
		make -C ft_printf

$(NAMESERVER) : $(SRCSERVER) 
			$(CC) $(CFLAGS) $(SRCSERVER) $(LIB) -o server

$(NAMECLIENT) : $(SRCCLIENT)
				$(CC) $(CFLAGS) $(SRCCLIENT) $(LIB) -o client

clean : 
		make clean -C ft_printf/
		$(RM) $(NAMESERVER) $(NAMECLIENT) $(LIB)
		$(RM) $(NAMESERVERBONUS) $(NAMECLIENTBONUS) $(LIB)

bonus :	$(LIB) $(SRCSERVERBONUS) $(SRCCLIENTBONUS) 
		$(CC) $(CFLAGS) $(SRCSERVERBONUS) $(LIB) -o server_bonus
		$(CC) $(CFLAGS) $(SRCCLIENTBONUS) $(LIB) -o client_bonus


fclean : clean

re : fclean all

.PHONY : all clean fclean re


