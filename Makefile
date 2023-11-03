# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chonorat <chonorat@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 16:23:33 by chonorat          #+#    #+#              #
#    Updated: 2023/03/15 15:45:30 by chonorat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#COLORS
_GREEN= \033[92m
_YELLOW = \033[33m

#POLICE
_END= \033[0m
_BOLD= \033[1m

NAME = libftprintf.a
HEADER = ./Includes/ft_printf.h
CC = @cc -c
CFLAGS = -Wall -Wextra -Werror
AR = @ar -rcs
RM = @rm -f
PRINT = @echo
FILES = Sources/ft_printf\
		Sources/ft_get_type\
		Sources/ft_type_char\
		Sources/ft_type_hexa\
		Sources/ft_type_int\
		Sources/ft_type_ptr\
		Sources/ft_type_str\
		Sources/ft_type_unsigned
SRCS = $(addsuffix .c, $(FILES))
OBJ_FILES = $(addsuffix .o, $(FILES))
LIBFT = @make -C libft
CLEAN_LIBFT = @make clean -C libft
FCLEAN_LIBFT = @make fclean -C libft
CP = @cp libft/libft.a ./libftprintf.a

$(NAME): $(OBJ_FILES)
	$(PRINT) "${_BOLD}${_YELLOW}\nWaiting for libft...\n${_END}"
	$(LIBFT)
	$(CP)
	$(PRINT) "\nMaking ${_BOLD}libftprintf.a${_END}..."
	$(AR) $(NAME) $(OBJ_FILES)
	$(PRINT) "${_BOLD}${_GREEN}libftprintf.a done.${_END}"

%.o: %.c Makefile $(HEADER)
	$(PRINT) "Compiling ${_BOLD}$<$(_END)..."
	$(CC) $(CFLAGS) $< -o $@

all: $(NAME)

clean:
	$(CLEAN_LIBFT)
	$(PRINT) "${_BOLD}Cleaning ft_printf...${_END}"
	$(RM) $(OBJ_FILES)
	$(PRINT) "${_BOLD}${_GREEN}ft_printf cleaned.${_END}"

fclean:
	$(FCLEAN_LIBFT)
	$(PRINT) "${_BOLD}\nCleaning ft_printf...${_END}"
	$(RM) $(OBJ_FILES)
	$(PRINT) "${_BOLD}${_GREEN}ft_printf cleaned.${_END}"
	$(RM) $(NAME)
	$(PRINT) "${_BOLD}${_GREEN}libftprintf.a deleted.\n${_END}"

re: fclean all

.PHONY: all clean fclean re
