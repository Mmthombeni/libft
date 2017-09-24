# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmthombe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/10 10:59:46 by mmthombe          #+#    #+#              #
#    Updated: 2017/09/24 01:27:26 by mmthombe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =libft.a

SRC = ft_strchr.c ft_strcat.c ft_strncat.c ft_strcmp.c ft_strncmp.c \
	  ft_strcpy.c ft_strncpy.c ft_strdup.c ft_strstr.c ft_strnstr.c \
	  ft_strlen.c ft_strrchr.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	  ft_isprint.c ft_isascii.c ft_tolower.c ft_toupper.c ft_atoi.c \
	  ft_memset.c ft_memcpy.c ft_memcmp.c ft_memchr.c ft_bzero.c ft_strlcat.c \
	  ft_putchar_fd.c ft_memdel.c ft_memmove.c ft_putchar.c ft_putendl.c \
	  ft_putendl_fd.c ft_memalloc.c ft_memccpy.c ft_strdel.c ft_strclr.c\
	  ft_putstr.c ft_putstr_fd.c ft_putnbr.c ft_putnbr_fd.c ft_striter.c\
	  ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnew.c \
	  ft_strjoin.c ft_strnequ.c ft_isspace.c ft_itoa.c ft_strtrim.c \
	  ft_strsub.c ft_strsplit.c ft_wordcount.c ft_wordlen.c \

OBJ = ft_strchr.o ft_strcat.o ft_strncat.o ft_strcmp.o ft_strncmp.o \
	  ft_strcpy.o ft_strncpy.o ft_strdup.o ft_strstr.o ft_strnstr.o \
	  ft_strlen.o ft_strrchr.o ft_isalpha.o ft_isdigit.o ft_isalnum.o \
	  ft_isprint.o ft_isascii.o ft_tolower.o ft_toupper.o ft_atoi.o \
	  ft_memset.o ft_memcpy.o ft_memcmp.o ft_memchr.o ft_bzero.o ft_strlcat.o \
	  ft_putchar_fd.o ft_memdel.o ft_memmove.o ft_putchar.o ft_putendl.o \
	  ft_putendl_fd.o ft_memalloc.o ft_memccpy.o ft_strdel.o ft_strclr.o \
	  ft_putstr.o ft_putstr_fd.o ft_putnbr.o ft_putnbr_fd.o ft_striter.o \
	  ft_striteri.o ft_strmap.o ft_strmapi.o ft_strequ.o ft_strnew.o \
	  ft_strjoin.o ft_strnequ.o ft_isspace.o ft_itoa.o ft_strtrim.o \
	  ft_strsub.o ft_strsplit.o ft_wordcount.o ft_wordlen.o\

FLS = -Wall -Wextra -Werror

HEADER = libft.h

all: $(NAME)

$(NAME):
	gcc $(FLS) -c -I $(HEADER) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ)
	rm -f $(NAME)

re: fclean all
