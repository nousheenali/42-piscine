	# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/05 19:47:05 by nali              #+#    #+#              #
#    Updated: 2021/06/08 14:11:34 by nali             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS	= ${SRCS:.c=.o}

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

all:		${NAME}

.c.o:
			${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re .c.o
