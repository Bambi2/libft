src = main.c ft_greeting.c

hello : $(src)
	gcc $(src) -o hello


.PHONY : all clean fclean re bonus