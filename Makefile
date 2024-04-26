# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbankhar <mbankhar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/08 14:39:30 by mbankhar          #+#    #+#              #
#    Updated: 2024/04/26 14:45:19 by mbankhar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CFLAGS = -Wall -Wextra -Werror

SRCS = basecode.c ft_atoi_old.c ft_split_old.c operations_one.c \
operations_two.c operations_three.c push_swap.c utils.c change_numbers.c\

OBJS = $(SRCS:.c=.o)

NAME = push_swap

HEADER = push_swap.h

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	cc $(CFLAGS) -I$(HEADER) $(OBJS) -o $@
	
clean:
	rm -f $(OBJS)
	
fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
















