NAME = libft.a
EXECUTABLE = app
SRC = ${wildcard ft_*.c}
OBJS = ${SRC:.c=.o}
HEADER = libft.h
INCLUDE = -I .
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS} ${HEADER}
	@ar rcs ${NAME} ${OBJS} ${HEADER}
	@echo "\n${NAME} created"

%.o:%.c
	@${CC} ${CFLAGS} ${INCLUDE} -c -o $@ $^
	@echo "\n$@ created"

$(EXECUTABLE): ${NAME} main.c
	@${CC} ${CFLAGS} ${INCLUDE} main.c ${NAME} -o ${EXECUTABLE}
	@echo "\n${EXECUTABLE} created"

clean:
	@${RM} ${OBJS}
	@echo "\n${OBJS} deleted"

fclean: clean
	@${RM} ${NAME}
	@echo "\n${NAME} deleted"

$(EXECUTABLE)clean: fclean
	@${RM} ${EXECUTABLE}
	@echo "\n${EXECUTABLE} deleted"

re: fclean all

.PHONY: all clean fclean