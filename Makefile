# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2021/01/31 18:28:53 by ssantiag          #+#    #+#             #
#   Updated: 2021/01/31 18:28:53 by ssantiag         ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

SRCDIR = source
INCLUDE = include
SRC =	$(SRCDIR)/ft_toupper.c \
		$(SRCDIR)/ft_atoi.c \
		$(SRCDIR)/ft_bzero.c \
		$(SRCDIR)/ft_calloc.c \
		$(SRCDIR)/ft_isalnum.c \
		$(SRCDIR)/ft_isalpha.c \
		$(SRCDIR)/ft_isascii.c \
		$(SRCDIR)/ft_isdigit.c \
		$(SRCDIR)/ft_isprint.c \
		$(SRCDIR)/ft_itoa.c \
		$(SRCDIR)/ft_memccpy.c \
		$(SRCDIR)/ft_memchr.c \
		$(SRCDIR)/ft_memcmp.c \
		$(SRCDIR)/ft_memcpy.c \
		$(SRCDIR)/ft_memmove.c \
		$(SRCDIR)/ft_memset.c \
		$(SRCDIR)/ft_putchar_fd.c \
		$(SRCDIR)/ft_putendl_fd.c \
		$(SRCDIR)/ft_putnbr_fd.c \
		$(SRCDIR)/ft_putstr_fd.c \
		$(SRCDIR)/ft_split.c \
		$(SRCDIR)/ft_strchr.c \
		$(SRCDIR)/ft_strdup.c \
		$(SRCDIR)/ft_strjoin.c \
		$(SRCDIR)/ft_strlcat.c \
		$(SRCDIR)/ft_strlcpy.c \
		$(SRCDIR)/ft_strlen.c \
		$(SRCDIR)/ft_strmapi.c \
		$(SRCDIR)/ft_strncmp.c \
		$(SRCDIR)/ft_strnstr.c \
		$(SRCDIR)/ft_strrchr.c \
		$(SRCDIR)/ft_strtrim.c \
		$(SRCDIR)/ft_substr.c \
		$(SRCDIR)/ft_tolower.c \
		$(SRCDIR)/ft_strcat.c \
		$(SRCDIR)/ft_strcpy.c \
		$(SRCDIR)/ft_strncpy.c

SRCB =	$(SRCDIR)/ft_lstadd_back.c \
		$(SRCDIR)/ft_lstadd_front.c \
		$(SRCDIR)/ft_lstclear.c \
		$(SRCDIR)/ft_lstdelone.c \
		$(SRCDIR)/ft_lstiter.c \
		$(SRCDIR)/ft_lstlast.c \
		$(SRCDIR)/ft_lstmap.c \
		$(SRCDIR)/ft_lstnew.c \
		$(SRCDIR)/ft_lstsize.c


SRCPRINTF = $(SRCDIR)/ft_printf_handlers.c \
            $(SRCDIR)/ft_printf_handlers2.c \
            $(SRCDIR)/ft_ntoabase.c \
            $(SRCDIR)/ft_output.c \
            $(SRCDIR)/ft_printf.c

SRCGNL = $(SRCDIR)/get_next_line.c

OBJ    = ${SRC:.c=.o}
OBJB   = ${SRCB:.c=.o}
OBJPRINTF = ${SRCPRINTF:.c=.o}
OBJGNL = ${SRCGNL:.c=.o}

NAME   = libft.a
CC     = gcc
AR     = ar -rcs
CFLAGS = -Wall -Wextra -Werror
CFLAGS_TEST = -Wextra -Wall -Werror -g3 -fsanitize=address

all:	${NAME}

$(NAME): $(OBJ) $(OBJB) $(OBJPRINTF) $(OBJGNL)
		$(AR) $(NAME) $(OBJ) $(OBJB) $(OBJPRINTF) $(OBJGNL)

%.o: %.c $(INCLUDE)/libft.h
		$(CC) -c $(CFLAGS) -I $(INCLUDE) -o $@ $<

clean:
		rm -f $(OBJ)
		rm -f $(OBJB)
		rm -f $(OBJPRINTF)
		rm -f $(OBJGNL)

fclean:	clean
		rm -f $(NAME)

re:		fclean all

.PHONY : clean all fclean re test
