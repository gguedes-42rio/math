SRC		=	mmc.c mdc.c bhaskara.c torricelli.c \

OBJ		=	$(SRC:.c=.o)

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

mdc: mdc.o
	$(CC) mdc.o -o mdc

mmc: mmc.o
	$(CC) mmc.o -o mmc

bhaskara: bhaskara.o
	$(CC) bhaskara.o -o bhaskara -lm

torricelli: torricelli.o
	$(CC) torricelli.o -o torricelli -lm

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) mdc mmc bhaskara torricelli

.PHONY: clean fclean