NAME	=	test

SRCS	=	main.c ft_isascii.c ft_isprint.c ft_strlen.c\
			ft_memset.c ft_strncmp.c ft_bzero.c\
			ft_memcpy.c ft_memmove.c ft_toupper.c\
			ft_tolower.c ft_strchr.c ft_strrchr.c\
			ft_memchr.c ft_memcmp.c ft_strnstr.c\
			ft_atoi.c ft_strlcpy.c ft_strlcat.c\
			ft_calloc.c ft_strdup.c ft_substr.c\
			ft_strjoin.c
			

HEADER	=	libft.h 

OBJ		=	$(SRCS:%.c=%.o)

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror -I$(HEADER)

.PHONY	:	all clean fclean re bonus

all		: $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) -o $@ $(OBJ) 

%.o 	: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	rm -f $(OBJ)

fclean	: clean
	rm $(NAME)

re		: fclean all