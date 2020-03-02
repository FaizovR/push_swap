Color_Off='\033[0m'
Black='\033[0;30m'
Red='\033[1;31m'
Green='\033[3;32m'
Yellow='\033[0;33m'
Blue='\033[0;34m'
Purple='\033[0;35m'
Cyan='\033[0;36m'
White='\033[1;37m

PUSH_SWAP_NAME = push_swap
CHECKER_NAME = checker
LIBFT = libft.a

SOURCES_DIR = ./sources/
SOURCES_FILES = ft_lst_size.c \
                ft_max_in_list.c \
                ft_sort.c \
                handle_error.c \
                intructions.c \
                operators.c \
                parser.c \
                rolling.c \
                sort_3_or_5.c \
                validation.c

PUSH_SWAP = push_swap.c $(SOURCES_FILES)
CHECKER = checker.c $(SOURCES_FILES)

OBJECTS_DIR = ./objects

PUSH_SWAP_FILES = $(patsubst %.c, %.o, $(PUSH_SWAP))
PUSH_SWAP_OBJECTS = $(addprefix $(OBJECTS_DIR), $(PUSH_SWAP_FILES))

CHECKER_FILES = $(patsubst %.c, %.o, $(CHECKER))
CHECKER_OBJECTS = $(addprefix $(OBJECTS_DIR), $(CHECKER_FILES))

LIBFT_HEADERS_DIR = ./libft/includes/
LIBFT_HEADERS_FILES = libft.h get_next_line.h
LIBFT_HEADERS = $(addprefix $(HEADERS_DIR), $(HEADER_FILES))

HEADERS_DIR = ./includes/
HEADER_FILES = push_swap.h
HEADERS = $(addprefix $(HEADERS_DIR), $(HEADER_FILES))

CC = gcc
FLAGS = -Wall -Wextra -Werror

all: $(PUSH_SWAP_NAME) $(CHECKER_NAME)

$(PUSH_SWAP_NAME): $(PUSH_SWAP_OBJECTS)
    make -C libft
    $(CC) $(FLAGS) $^ $(LIBFT) -o $(PUSH_SWAP_NAME)
    printf $(Green)"push_swap created!\n"$(Color_Off)

$(CHECKER_NAME): $(CHECKER_OBJECTS)
    make -C libft
    $(CC) $(FLAGS) $^ $(LIBFT) -o $(CHECKER_NAME)
    printf $(Green)"checker created!\n"$(Color_Off)

$(OBJECTS_DIR)%.o: $(SOURCES_DIR)%.c $(HEADERS) $(LIBFT_HEADERS)
    mkdir -p ./objects
    $(CC) $(FLAGS) -c $< -o $@ -I $(HEADERS_DIR) -I $(LIBFT_HEADERS_DIR)

clean:
    /bin/rm -rf $(OBJECTS_DIR)
    printf $(Red)"objects cleaned\n"$(Color_Off)

fclean: clean
    /bin/rm -rf $(OBJECTS_DIR)
    make -C libft clean
    printf $(Red)"Binaries have been cleaned\n"$(Color_Off)

re: fclean clean

.PHONY all clean fclean re
