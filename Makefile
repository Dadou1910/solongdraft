# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abremont <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 10:47:12 by abremont          #+#    #+#              #
#    Updated: 2024/01/23 12:49:53 by abremont         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	so_long

CC		=	cc

CFLAGS		=	-Wall -Wextra -Werror -MMD -MP -I./includes -g3
# -Lminilibx-linux -lmlx -lX11 -lXext -MMD -MP -I./includes -g3

LIB		=	-Llibft/ -lft -Lminilibx-linux -lmlx -lX11 -lXext

SRCS		=

OBJS		:=	${addprefix ./obj/,${SRCS:%.c=%.o}}

DEP		=	$(addprefix ./obj/,$(OBJS:%.o=%.d))

all: ${NAME}

-include $(DEP)

./obj/%.o: ./src/%.c
	@mkdir -p $(@D)
	@make -C minilibx-linux
	@make -C libft
	$(CC) $(CFLAGS) -o $@ -c $<

${NAME}: ${OBJS} ./libft/libft.a
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIB)

#./libft/libft.a:
#	make $(@F) -C $(@D)
clean:
	@rm -rf obj/
	@rm -f ${OBJS}
	@make $@ -C ./libft/

fclean:
	@rm -rf obj/
	@rm -f ${NAME}
	@make $@ -C libft

re:	fclean all

.PHONY: all clean fclean re
