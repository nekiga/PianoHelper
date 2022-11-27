NAME = pianohelper.out
SRC =  main
CC =  gcc
RM =  rm -f
AR =  ar rcs
FLAGS = -g -o
LINK = -lGL -lglfw -lGLEW

all: $(NAME)

$(NAME): 
			gcc -o piano main.c
clean:
			@$(RM)	$(NAME)

fclean:		clean
			@$(RM) -f $(NAME)

re:			fclean all
