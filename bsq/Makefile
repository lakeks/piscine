SRCS =  src/verif.c\
src/find_biggest_square.c\
src/ft_atoi.c\
src/ft_putchar.c\
src/ft_putnbr.c\
src/ft_putstr.c\
src/ft_strchr.c\
src/ft_strcmp.c\
src/ft_strlen.c\
src/init_grid.c\
src/main.c\
src/parse.c\
src/print.c\
src/spill_fill.c

OBJS = ${SRCS:.c=.o}

NAME = bsq

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c  $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CC} -o ${NAME} ${OBJS}

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re