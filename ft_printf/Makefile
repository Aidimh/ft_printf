SRCS = ft_printf.c ft_put_major_hexa.c ft_put_hexa.c ft_put_address.c\
		ft_putnbr.c ft_putunsignednbr.c ft_putchar.c ft_putstr.c

OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a
LIBC = ar rcs
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

${NAME}: ${OBJS}
		${LIBC} ${NAME} ${OBJS}

all: ${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all
.PHONY : all clean fclean re
