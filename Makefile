NAME=			libftprintf.a
FLAGS=			-Wall -Werror -Wextra
CC=				cc
INCLUDE_DIR=	./includes
SRC_DIR=		./sources
SRC_FILES=		$(SRC_DIR)/ft_strlen.c \
				$(SRC_DIR)/ft_putchar.c \
				$(SRC_DIR)/ft_putstr.c \
				$(SRC_DIR)/ft_putnbr.c \
				$(SRC_DIR)/ft_putnbr_base.c \
				$(SRC_DIR)/ft_putnbr_base_ptr.c \
				$(SRC_DIR)/ft_print_ptr.c \
				$(SRC_DIR)/ft_putnbr_unsigned.c \
				ft_printf.c
OBJ_FILES=		$(SRC_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

%.o: %.c
	$(CC) $(FLAGS) -I $(INCLUDE_DIR) -c -o $@ $<

clean:
	find . -name "*.o" -delete

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re test
