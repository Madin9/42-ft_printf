# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chonorat <chonorat@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 16:23:33 by chonorat          #+#    #+#              #
#    Updated: 2022/12/28 16:07:36 by chonorat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
GCC = gcc -c
BUILD_FLAGS = -Wall -Wextra -Werror
AR = ar -rcs
RM = rm -f
SRCS = ./ft_printf.c Sources/*.c
OBJ_FILES = ./*.o
LIBFT = make -C libft
CLEAN_LIBFT = make clean -C libft
FCLEAN_LIBFT = make fclean -C libft
CP = cp libft/libft.a ./libftprintf.a

$(NAME): all

all:
	$(LIBFT)
	$(CP)
	$(GCC) $(BUILD_FLAGS) $(SRCS)
	$(AR) $(NAME) $(OBJ_FILES)

clean:
	$(CLEAN_LIBFT)
	$(RM) $(OBJ_FILES)

fclean:
	$(FCLEAN_LIBFT)
	$(RM) $(OBJ_FILES)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
