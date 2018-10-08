# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dluma <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/05 11:55:40 by dluma             #+#    #+#              #
#    Updated: 2018/08/25 14:30:57 by dluma            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

HEADER = libft.h

SOURCE = ft_memset.c \
		 ft_atoi.c \
		 ft_strcmp.c \
		 ft_strmap.c \
		 ft_memccpy.c \
		 ft_strdup.c \
		 ft_strncat.c \
		 ft_striter.c \
		 ft_striteri.c \
		 ft_strstr.c \
		 ft_strrchr.c \
         ft_bzero.c \
         ft_strlen.c \
		 ft_isalpha.c \
		 ft_isupper.c \
		 ft_strcpy.c \
         ft_isdigit.c \
         ft_isalnum.c \
         ft_isascii.c \
         ft_isprint.c \
		 ft_isalpha.c \
         ft_toupper.c \
         ft_tolower.c \
         ft_memalloc.c \
         ft_memdel.c \
		 ft_memchr.c \
		 ft_putchar.c \
		 ft_memdel.c \
		 ft_strcat.c \
		 ft_strclr.c \
		 ft_strnew.c \
		 ft_memcpy.c \
		 ft_strcmp.c \
		 ft_strdel.c \
		 ft_strncmp.c \
		 ft_islower.c \
		 ft_memcmp.c \
		 ft_strnequ.c \
		 ft_memmove.c \
		 ft_strchr.c \
		 ft_strncpy.c \
		 ft_putnbr_fd.c \
		 ft_putchar_fd.c \
		 ft_putendl_fd.c \
		 ft_putendl.c \
		 ft_putstr.c \
		 ft_putstr_fd.c \
		 ft_strnstr.c \
		 ft_strmapi.c \
		 ft_strlcat.c \
		 ft_strtrim.c \
		 ft_strsub.c \
		 ft_strequ.c \
		 ft_strjoin.c \
		 ft_strsplit.c \
		 ft_itoa.c \
		 ft_putnbr.c \
		 get_next_line.c \

OBJECTS = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) -c $(FLAGS) $(SOURCE) -I $(HEADER)
	ar -rc $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re : fclean all
