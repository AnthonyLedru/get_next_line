# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aledru <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 05:28:52 by aledru            #+#    #+#              #
#    Updated: 2017/11/14 10:15:38 by aledru           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAG = -c -Werror -Wextra -Wall
SRC = memset bzero memcpy memccpy strlen strdup strcpy strncpy strcat strncat \
		strlcat strstr strnstr strcmp strncmp atoi isalpha isdigit isalnum \
		isascii isprint toupper tolower memmove memchr memcmp strchr strrchr \
		memalloc memdel strnew strdel strclr striter striteri strmap strmapi \
		strequ strnequ strsub strjoin strtrim strtrim strsplit itoa putchar \
		putchar_fd putstr putendl putnbr putstr_fd putendl_fd putnbr_fd \
		lstnew lstdelone lstdel lstadd lstiter lstmap isblank islower isupper \
		isspace isxdigit
SRCFT = $(addprefix ft_, $(SRC)) 
SRC_O = $(addsuffix .o, $(SRCFT)) 
SRC_C = $(addsuffix .c, $(SRCFT))

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(SRC_C) -I.
	ar rc $(NAME) $(SRC_O)

clean:
	/bin/rm -f $(SRC_O)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
