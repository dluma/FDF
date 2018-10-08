# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dluma <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/23 13:39:04 by dluma             #+#    #+#              #
#    Updated: 2018/08/27 17:10:35 by dluma            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

LIBFT = make -C libft/

#CC -c drawline.c main.c esc.c read_map.c -L -lmlx -framework OpenGL -framework AppKit -lft -o fdf

CFLAGS = -Wall -Wextra -Werror

HEADER = fdf.h

SOURCE = main.c\
		 drawline.c\
		 read_map.c \
		 esc.c \
		 drawer.c

all: $(NAME)

$(NAME):
	@cd libft/ && make
	@gcc -L ./libft -lft $(SOURCE) -lmlx -framework OpenGL -framework AppKit libft/libft.a -o fdf

clean:
	@make -C libft/ clean
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@make -C libft/ fclean
	@/bin/rm -f $(NAME)

re: fclean all
