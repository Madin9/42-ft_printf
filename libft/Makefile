# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chonorat <chonorat@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 14:37:20 by chonorat          #+#    #+#              #
#    Updated: 2022/12/28 16:03:04 by chonorat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
BUILD_FLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar -rcs
GCC = gcc -c
FILES = ft_isalpha\
		ft_isdigit\
		ft_isalnum\
		ft_isascii\
		ft_isprint\
		ft_strlen\
		ft_memset\
		ft_bzero\
		ft_memcpy\
		ft_memmove\
		ft_strlcpy\
		ft_strlcat\
		ft_toupper\
		ft_tolower\
		ft_strchr\
		ft_strrchr\
		ft_strncmp\
		ft_memchr\
		ft_memcmp\
		ft_strnstr\
		ft_atoi\
		ft_calloc\
		ft_strdup\
		ft_substr\
		ft_strjoin\
		ft_strtrim\
		ft_split\
		ft_itoa\
		ft_strmapi\
		ft_striteri\
		ft_putchar_fd\
		ft_putstr_fd\
		ft_putendl_fd\
		ft_putnbr_fd
BONUS_FILES = ft_lstnew\
			  ft_lstadd_front\
			  ft_lstsize\
			  ft_lstlast\
			  ft_lstadd_back\
			  ft_lstdelone\
			  ft_lstclear\
			  ft_lstiter\
			  ft_lstmap
SRCS = $(addsuffix .c, $(FILES))
SRCS_B = $(addsuffix .c, $(BONUS_FILES))
OBJ_FILES = $(addsuffix .o, $(FILES))
OBJ_B_FILES = $(addsuffix .o, $(BONUS_FILES))

$(NAME): all

all:
	$(GCC) $(BUILD_FLAGS) $(SRCS)
	$(AR) $(NAME) $(OBJ_FILES)
	
bonus:
	$(GCC) $(BUILD_FLAGS) $(SRCS_B)
	$(AR) $(NAME) $(OBJ_B_FILES)

clean:
	$(RM) $(OBJ_FILES) $(OBJ_B_FILES)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY: all bonus clean fclean re
