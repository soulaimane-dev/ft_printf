# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 19:27:01 by sbouabid          #+#    #+#              #
#    Updated: 2023/11/17 11:07:18 by sbouabid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCF =	ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_puthex_upper.c ft_puthex_lower.c ft_putunsigned.c ft_putptr.c
OBJF = $(SRCF:.c=.o)
CFLAGS = -Wall -Wextra -Werror
CC = cc
NAME = libftprintf.a
RM = rm -f

all: $(NAME)

$(NAME): $(OBJF)
	ar -rcs $(NAME) $(OBJF)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $<

clean:
	$(RM) $(OBJF)

fclean : clean
	$(RM) $(NAME)

re: fclean all