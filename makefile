# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpirela- <mpirela-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/04 18:48:43 by mpirela-          #+#    #+#              #
#    Updated: 2024/05/09 15:07:21 by mpirela-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
LIBFTNAME = libft.a
LIBFTDIR = ./libft

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ./push_swap.c ./check_and_convert.c \ order_with.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

makelibft:
		@make -C $(LIBFTDIR)
		@cp $(LIBFTDIR)/$(LIBFTNAME) .
		@mv $(LIBFTNAME) $(NAME)

$(NAME): makelibft $(OBJS)
	@ar -r $(NAME) $(OBJS)

clean:
		@rm -f $(OBJS)
		@cd $(LIBFTDIR) && make clean
		
fclean: clean
		@rm -f $(NAME)
		@cd $(LIBFTDIR) && make fclean

re: fclean all

debug: CFLAGS += -g
debug: $(NAME)