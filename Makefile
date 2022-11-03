NAME = libftpritnf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printc.c ft_printf.c ft_prints.c ft_selector.c
OBJS = $(SRCS:.c=.o)
AR = ar
ARFLAGS = -rcs
RM = rm
RMFLAGS = -f


all: $(NAME)
$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

clean:
	$(RM) $(RMFLAGS) -f $(OBJS)

fclean: clean
	$(RM) $(RMFLAGS) $(NAME)

re: fclean all

%.o : %.c
	$(CC) $(CFLAGS) -c $<

.PHONY: all clean fclean re bonus