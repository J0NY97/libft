# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 15:28:58 by jsalmi            #+#    #+#              #
#    Updated: 2021/05/07 13:49:30 by jsalmi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_memset.c\
	   ft_putstr.c\
	   ft_strlen.c\
	   ft_putnbr.c\
	   ft_bzero.c\
	   ft_putchar.c\
	   ft_memcpy.c\
	   ft_memccpy.c\
	   ft_memmove.c\
	   ft_memchr.c\
	   ft_memcmp.c\
	   ft_strdup.c\
	   ft_strcpy.c\
	   ft_strncpy.c\
	   ft_strcat.c\
	   ft_strncat.c\
	   ft_strlcat.c\
	   ft_strchr.c\
	   ft_strrchr.c\
	   ft_strstr.c\
	   ft_strnstr.c\
	   ft_strcmp.c\
	   ft_strncmp.c\
	   ft_atoi.c\
	   ft_isalpha.c\
	   ft_isdigit.c\
	   ft_isalnum.c\
	   ft_isascii.c\
	   ft_isprint.c\
	   ft_toupper.c\
	   ft_tolower.c\
	   ft_memalloc.c\
	   ft_putnbr_fd.c\
	   ft_putendl_fd.c\
	   ft_putstr_fd.c\
	   ft_putchar_fd.c\
	   ft_putendl.c\
	   ft_striter.c\
	   ft_striteri.c\
	   ft_strmap.c\
	   ft_strmapi.c\
	   ft_strequ.c\
	   ft_strnequ.c\
	   ft_strsub.c\
	   ft_strjoin.c\
	   ft_strtrim.c\
	   ft_memdel.c\
	   ft_strnew.c\
	   ft_strdel.c\
	   ft_strclr.c\
	   ft_strsplit.c\
	   ft_itoa.c\
	   ft_lstnew.c\
	   ft_lstdelone.c\
	   ft_lstdel.c\
	   ft_lstadd.c\
	   ft_lstiter.c\
	   ft_lstmap.c\
	   ft_reverse.c\
	   ft_nbrlen.c\
	   ft_isupper.c\
	   ft_islower.c\
	   ft_isspace.c\
	   ft_strnchr.c\
	   ft_strchrlen.c\
	   ft_atoi_base.c\
	   get_next_line.c\
	   ft_strspn.c\
	   ft_nstrstr.c\
	   ft_strndup.c\
	   ft_ftoa.c\
	   ft_itoa_base.c\
	   ft_stradd.c\
	   ft_strreplace.c\
	   ft_straddchar.c\
	   ft_strjoiner.c\
	   ft_pow.c \
	   ft_atof.c \
	   ft_strendswith.c \
	   ft_strremove.c \
	   add_to_list.c
OBJS = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCS)
	@gcc -c $(SRCS) $(FLAGS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "$(NAME) was successfully created."

clean:
	@rm -f $(OBJS)
	@echo "$(NAME) was cleaned."

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean, all, fclean, re
