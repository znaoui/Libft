############### SETUP ###############

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS = $(addprefix srcs/, ft_memmove.c ft_memcmp.c ft_striteri.c ft_strmapi.c ft_memchr.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c \
	ft_itoa.c ft_strtrim.c ft_substr.c ft_split.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
	ft_bzero.c ft_memcpy.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
	ft_memcpy.c ft_strnstr.c ft_atoi.c ft_strdup.c ft_calloc.c ft_strjoin.c ft_putnbr_fd.c)

BONUS = $(addprefix srcs/, ft_lstlast.c ft_lstiter.c ft_lstclear.c ft_lstdelone.c ft_lstadd_back.c ft_lstsize.c ft_lstadd_front.c \
	ft_lstnew.c ft_lstmap.c)

INCLUDES = ./libft.h

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS:.c=.o)

############### COMMANDS ###############

all:
	make --no-print-directory ${NAME}

.c.o:
	gcc ${CFLAGS} -I ${INCLUDES} -c $< -o $(<:.c=.o)

${NAME}: $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	echo "$(WHITE)Compilation in progress..$(DEFAULT)"
	sleep 1
	echo "$(GREEN)The library ${NAME} is ready!$(DEFAULT)"

bonus: $(BONUS_OBJS) $(OBJS)
	ar rc $(NAME) $(OBJS) $(BONUS_OBJS)
	ranlib $(NAME)
	echo "$(WHITE)Compilation in progress..$(DEFAULT)"
	sleep 1
	echo "$(GREEN)The library ${NAME} with bonus functions is ready!$(DEFAULT)"

help:
	echo "$(WHITE)Commands available: all, clean, fclean, re$(DEFAULT)"

clean:
	rm -rf ${OBJS}
	rm -rf ${BONUS_OBJS}
	echo "$(YELLOW)All object files have been deleted$(DEFAULT)"

fclean: clean
	rm -rf ${NAME}
	echo "$(RED)The program ${NAME} has been deleted$(DEFAULT)"

re: fclean
	make --no-print-directory all

.PHONY: all clean fclean re

.SILENT: 

################ COLORS ###############
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
DEFAULT = \033[0m
WHITE = \033[1;37m
