CC	= gcc

CFLAGS	= -Wall -Werror -Wextra

NAME	= libft.a

HEADERS	= ./includes 

SOURCES	= ./srcs/lst/ft_lst_len.c			./srcs/lst/ft_lst_getlast.c		./srcs/lst/ft_lst_del.c				\
	./srcs/lst/ft_lst_new.c			./srcs/lst/ft_lst_push.c		./srcs/lst/ft_lst_iter.c			\
	./srcs/lst/ft_lst_pushback.c		./srcs/lst/ft_lst_iter_data.c		./srcs/lst/ft_lst_delif.c			\
	./srcs/lst/ft_lst_new_elem.c		./srcs/btree/ft_btree_push.c		./srcs/btree/ft_btree_find.c			\
	./srcs/btree/ft_btree_new.c		./srcs/str/ft_strcat.c			./srcs/str/ft_strcpy.c				\
	./srcs/str/ft_strtrim.c			./srcs/str/ft_strchr.c			./srcs/str/ft_strmap.c				\
	./srcs/str/ft_strncmp.c			./srcs/str/ft_strlastchr.c		./srcs/str/ft_striter.c				\
	./srcs/str/ft_strrev.c			./srcs/str/ft_strncpy.c			./srcs/str/ft_stralpha.c			\
	./srcs/str/ft_strequ.c			./srcs/str/ft_strjoin.c			./srcs/str/ft_strrchr.c				\
	./srcs/str/ft_strjoinfree.c		./srcs/str/ft_strlen.c			./srcs/str/ft_strnjoinfree.c			\
	./srcs/str/ft_strnequ.c			./srcs/str/ft_strncat.c			./srcs/str/ft_strdup.c				\
	./srcs/str/ft_strstr.c			./srcs/str/ft_strrmvchr.c		./srcs/str/ft_striteri.c			\
	./srcs/str/ft_strmapi.c			./srcs/str/ft_strsub.c			./srcs/str/ft_str_isvalid.c			\
	./srcs/str/ft_strdel.c			./srcs/str/ft_strnstr.c			./srcs/str/ft_strlcat.c				\
	./srcs/str/ft_strcmp.c			./srcs/str/ft_strclr.c			./srcs/str/ft_strnew.c				\
	./srcs/str/ft_strsplit.c		./srcs/str/ft_strdigit.c		./srcs/str/ft_str_onlychr.c			\
	./srcs/str/ft_3strjoinfree.c		./srcs/str/ft_strndup.c			./srcs/str/ft_strnchr.c				\
	./srcs/char/ft_isalnum.c		./srcs/char/ft_isprint.c		./srcs/char/ft_isascii.c			\
	./srcs/char/ft_isalpha.c		./srcs/char/ft_isdigit.c		./srcs/strtab/ft_strtab_realloc.c		\
	./srcs/strtab/ft_strtab_find_index.c	./srcs/strtab/ft_strtab_del_one.c	./srcs/strtab/ft_strtab_3join.c			\
	./srcs/strtab/ft_strtab_dup.c		./srcs/strtab/ft_strtab_len.c		./srcs/strtab/ft_strtab_print.c			\
	./srcs/strtab/ft_strtab_join.c		./srcs/strtab/ft_strtab_new.c		./srcs/strtab/ft_strtab_cpy.c			\
	./srcs/strtab/ft_strtab_iter.c		./srcs/strtab/ft_strtab_del.c		./srcs/strtab/ft_strtab_add.c			\
	./srcs/strtab/ft_strtab_cat.c		./srcs/strtab/ft_strtab_strncmp_i.c	./srcs/strtab/ft_strtab_free.c			\
	./srcs/integer/ft_itoa.c		./srcs/integer/ft_nbr_len.c		./srcs/integer/ft_atoi.c			\
	./srcs/mem/ft_memccpy.c			./srcs/mem/ft_bzero.c			./srcs/mem/ft_memset.c				\
	./srcs/mem/ft_memchr.c			./srcs/mem/ft_memalloc.c		./srcs/mem/ft_memcmp.c				\
	./srcs/mem/ft_memdel.c			./srcs/mem/ft_memcpy.c			./srcs/mem/ft_memmove.c				\
	./srcs/read/ft_open_dir.c		./srcs/read/get_next_line.c		./srcs/read/ft_readdir.c			\
	./srcs/ast/ft_ast_rsplit.c		./srcs/ast/ft_ast_split.c		./srcs/ast/ft_ast_new.c				\
	./srcs/dlst/ft_dlst_delelem.c		./srcs/dlst/ft_dlst_reduce.c		./srcs/dlst/ft_dlst_new.c			\
	./srcs/dlst/ft_dlst_reduce_data.c	./srcs/dlst/ft_dlst_iter_data.c		./srcs/dlst/ft_dlst_iter.c			\
	./srcs/dlst/ft_dlst_delif.c		./srcs/dlst/ft_dlst_push.c		./srcs/dlst/ft_dlst_len.c			\
	./srcs/dlst/ft_dlst_cut.c		./srcs/dlst/ft_dlst_clr.c		./srcs/dlst/ft_dlst_getlast.c			\
	./srcs/dlst/ft_dlst_pushback.c		./srcs/dlst/ft_dlst_new_elem.c		./srcs/dlst/ft_dlst_del.c			\
	./srcs/lexer/ft_del_str_token.c		./srcs/lexer/ft_new_chr_token.c		./srcs/lexer/ft_new_int_token.c			\
	./srcs/lexer/ft_del_chr_token.c		./srcs/lexer/ft_new_str_token.c		./srcs/lexer/ft_del_int_token.c			\
	./srcs/io/ft_putstr.c			./srcs/io/ft_tolower.c			./srcs/io/ft_putnbr_fd.c			\
	./srcs/io/ft_toupper.c			./srcs/io/ft_putchar_fd.c		./srcs/io/ft_putendl_fd.c			\
	./srcs/io/ft_putnbr.c			./srcs/io/ft_putendl.c			./srcs/io/ft_putchar.c				\
	./srcs/io/ft_putstr_fd.c		

OBJ	= $(SOURCES:.c=.o)

HEADER_LIST	= $(addprefix -I,$(HEADERS))

all	: $(NAME)

%.o	: %.c $(HEADERS)
	$(CC) $(CFLAGS) $(HEADER_LIST) -c -o $@ $<

$(NAME)	: $(OBJ)
	ar rcs $(NAME) $(OBJ)

exec	: $(OBJ)
	$(CC) $(CFLAGS) $(HEADER_LIST) -o exec.out $(OBJ)

so	: $(OBJ)
	$(CC) -fPIC $(CFLAGS) $(SOURCES) -shared -I$(HEADERS)

clean	: 
	rm -f $(OBJ)

re	: fclean all

fclean	: clean
	rm -f $(NAME)

