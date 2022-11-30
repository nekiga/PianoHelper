NAME = piano
SRC =  main
SRCW = mainw
CC =  gcc
RM =  rm -f
AR =  ar rcs
FLAGS = -o
LINK = -lGL -lglfw -lGLEW

all: $(NAME)

$(NAME): 
			$(CC) $(FLAGS) $(NAME) $(SRC)
clean:
			@$(RM)	$(NAME)

fclean:		clean
			@$(RM) -f $(NAME)

re:			fclean all

windows:
			$(CC) $(FLAGS) $(NAME) $(SRCW)
