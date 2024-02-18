NAME	= libftprintf.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

SRCS    = aux.c itoa.c hex.c ft_printf.c

HEAD	= ft_printf.h

OBJS	= $(SRCS:.c=.o)

AR		= ar rcs
RM		= rm -f

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

%.o : %.c Makefile $(HEAD)
	$(CC) $(CFLAGS) -c $< -o $@
  
$(NAME): $(OBJS)
	$(AR) $@ $^

.PHONY: all clean fclean re
