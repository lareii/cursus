NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror -Iinclude

VPATH = src
BUILD_DIR = build

SRCS =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_strlcpy.c ft_strlcat.c \
		ft_bzero.c ft_memset.c ft_memcpy.c ft_memcmp.c ft_memchr.c
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

.PHONY: all clean fclean re