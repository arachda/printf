NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror
 
MAIN_SOURCES = ft_printf.c ft_putaddr.c ft_putchar.c ft_puthex_l.c ft_putnbr.c ft_putstr.c ft_puthex_u.c ft_putunsnbr.c

MAIN_OBJECTS = $(MAIN_SOURCES:.c=.o)

all : $(NAME)

$(NAME) : $(MAIN_OBJECTS)
	ar -r $(NAME) $(MAIN_OBJECTS)

%.o: %.c ft_printf.h
	@$(CC) -c $(CFLAGS) $<
	@echo "Compiling $<"

clean :
	@rm -f $(MAIN_OBJECTS) $(BONUS_OBJECTS)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY:  all clean fclean re
