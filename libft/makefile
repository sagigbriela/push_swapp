# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpirela- <mpirela-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/04 19:29:03 by mpirela-          #+#    #+#              #
#    Updated: 2024/03/11 19:35:45 by mpirela-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
RM = rm -f

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRCS = ./atoi_modify.c ./ft_strlen.c ./ft_lstnew.c ./ft_lstadd_front.c ./ft_lstsize.c ./ft_lstlast.c ./ft_lstadd_back.c \
./ft_lstdelone.c ./ft_lstclear.c ./ft_lstiter.c ./ft_lstmap.c ./ft_strncmp.c

OFILES = $(SRCS:.c=.o)
INCLUDE = libft.h

all: $(NAME)

$(NAME): $(OFILES) $(INCLUDE)
	$(LIB) $(NAME) $(OFILES)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OFILES)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all