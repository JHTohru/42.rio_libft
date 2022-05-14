CC := cc
CFLAGS := -Wall -Wextra -Werror
NAME := libft.a
SRCS := $(filter-out %_bonus.c, $(wildcard ft_*.c))
OBJS := $(SRCS:%.c=%.o)
SRCS_BONUS := $(wildcard ft_*_bonus.c)
OBJS_BONUS := $(SRCS_BONUS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

bonus: $(NAME) $(OBJS_BONUS)
	ar -rc $(NAME) $(OBJS_BONUS)

.PHONY: all, clean, fclean, re, bonus
