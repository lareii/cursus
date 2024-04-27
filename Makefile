NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror -Iinclude

VPATH = src:src/ascii:src/memory:src/string
BUILD_DIR = build

SRCS =	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_toupper.c ft_tolower.c \
		ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_strnstr.c \
		ft_memset.c ft_memcpy.c ft_memchr.c ft_memmove.c ft_bzero.c \
		ft_memcmp.c
OBJS = $(addprefix $(BUILD_DIR)/,$(SRCS:.c=.o))

$(NAME): $(OBJS)
	ar rcs $@ $^

$(BUILD_DIR)/%.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -rf $(BUILD_DIR)

fclean:	clean
		rm -rf $(NAME)

re: fclean all

test: test.c
	$(CC) $(FLAGS) -o test test.c -L. -lft

.PHONY: all clean fclean re test