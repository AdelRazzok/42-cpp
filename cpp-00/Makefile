NAME          = megaphone
INCLUDES      = include/
OBJ_DIR       = obj/

CC            = gcc
CFLAGS        = -Wall -Wextra -Werror -std=c++98

SRC_FILES     = megaphone

OBJ_CACHE     = .cache_exists

#####

all:			$(NAME)

$(NAME):		$(OBJ)
					$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
					@echo "$(NAME) compiled!"


$(OBJ_DIR)%.o : $(SRC_DIR)%.c | $(OBJ_CACHE)
					@echo "Compiling $<"
					@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_CACHE):
					@mkdir -p $(OBJ_DIR)

clean:
					@rm -rf $(OBJ_DIR)
					@echo "$(NAME) object files cleaned!"

fclean:			clean
					@rm -f $(NAME)
					@echo "$(NAME) executable files cleaned!"

re:				fclean all
					@echo "Cleaned and rebuilt everything for $(NAME)!"

.PHONY:			all clean fclean re
