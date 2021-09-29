CC 			= gcc
CFLAGS 		= -c -Wall -Wextra -Werror
RM 			= rm -f

SRCDIR 		= srcs
INCDIR 		= includes

TARGET		= libft.a
SOURCES		= $(SRCDIR)/ft_putchar.c $(SRCDIR)/ft_swap.c $(SRCDIR)/ft_putstr.c $(SRCDIR)/ft_strlen.c $(SRCDIR)/ft_strcmp.c
OBJECTS		= $(SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
		ar rc $@ $<

%.o: %.c
		$(CC) $(CFLAGS) $< -o $@ -I  $(INCDIR)

clean:
		$(RM) $(OBJECTS)

fclean: clean
		$(RM) $(TARGET)

re:
		fclean all

