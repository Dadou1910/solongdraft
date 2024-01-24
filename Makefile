# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abremont <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 10:47:12 by abremont          #+#    #+#              #
#    Updated: 2024/01/24 13:28:45 by abremont         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	so_long

CC		=	cc

CFLAGS		=	-Wall -Wextra -Werror -MMD -MP -I./includes -g3
# -Lminilibx-linux -lmlx -lX11 -lXext -MMD -MP -I./includes -g3

LIB		=	-Llibft/ -lft -Lminilibx-linux -lmlx -lX11 -lXext

SRCS		=	init.c \

OBJS		:=	${addprefix ./obj/,${SRCS:%.c=%.o}}

DEP		=	$(addprefix ./obj/,$(OBJS:%.o=%.d))

all: ${NAME}

-include $(DEP)

./obj/%.o: ./src/%.c
	@mkdir -p $(@D)
#	@make -C minilibx-linux
	$(CC) $(CFLAGS) -o $@ -c $<

${NAME}: ./libft/libft.a ./minilibx-linux/libmlx.a ${OBJS}
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIB)

./libft/libft.a:
	make $(@F) -C $(@D)

./minilibx-linux/libmlx.a:
	make -C $(@D) -f Makefile.gen all
clean:
	@rm -rf obj/
	@rm -f ${OBJS}
	@make $@ -C ./libft/
	@make $@ -C ./minilibx-linux/

fclean:
	@rm -rf obj/
	@rm -f ${NAME}
	@make $@ -C libft

re:	fclean all

.PHONY: all clean fclean re
