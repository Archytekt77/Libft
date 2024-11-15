.PHONY : all clean fclean re

CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRC = \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_strchr.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c

OBJ = $(SRC:.c=.o)


all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $@ $^

%.o : %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all
