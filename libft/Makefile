# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abremont <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 11:52:05 by abremont          #+#    #+#              #
#    Updated: 2023/12/07 15:32:24 by abremont         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalnum.c ft_isascii.c ft_isprint.c ft_memmove.c ft_strlen.c \
      ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memcpy.c ft_memset.c \
	  ft_strlcpy.c ft_atoi.c ft_memcmp.c ft_strrchr.c ft_strchr.c ft_strlcat.c \
ft_toupper.c ft_tolower.c ft_strnstr.c ft_strncmp.c ft_memchr.c \
ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
ft_calloc.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
ft_putendl_fd.c ft_putnbr_fd.c

SRCB = ft_lstnew.c ft_lstsize.c ft_lstadd_front.c ft_lstlast.c ft_lstadd_back.c \
	   ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJSB = $(SRCB:.c=.o)

OBJS = $(SRC:.c=.o)

CC = gcc
RM = rm -f

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(OBJSB)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

bonus: $(OBJS) $(OBJSB)
	ar rcs $(NAME) $(OBJS) $(OBJSB)
