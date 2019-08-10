NAME = race04

INC = inc/header.h

HEADTMP = header.h
SRCS = src/main.c \
	src/mx_checkMovements.c \
	src/mx_drawMaxDistance.c \
	src/mx_findPath.c \
	src/mx_map_read.c \
	src/mx_map_write.c \
	src/maperror.c \
	src/mx_argvend.c \
	src/mx_atoi.c \
	src/mx_cardoutput.c \
	src/mx_error.c \
	src/mx_isdigit.c \
	src/mx_isspace.c \
	src/mx_maperror.c \
	src/mx_printchar.c \
	src/mx_printerr.c \
	src/mx_printint.c \
	src/mx_printstr.c \
	src/mx_strlen.c \
	src/mx_validated.c \
	src/mx_setWeights.c
	

CTMP = main.c \
	mx_checkMovements.c \
	mx_drawMaxDistance.c \
	mx_findPath.c \
	mx_map_read.c \
	mx_map_write.c \
	maperror.c \
	mx_argvend.c \
	mx_atoi.c \
	mx_cardoutput.c \
	mx_error.c \
	mx_isdigit.c \
	mx_isspace.c \
	mx_maperror.c \
	mx_printchar.c \
	mx_printerr.c \
	mx_printint.c \
	mx_printstr.c \
	mx_strlen.c \
	mx_validated.c \
	mx_setWeights.c

OUT = ./src/main.o \
	


CFLSGS = -std=c11 -Wall -Wextra -Werror -Wpedantic 

all: install uninstall

install:
	@cp $(SRCS) .
	@cp $(INC) .
	@clang $(CFLSGS) -o $(NAME) $(CTMP)
uninstall:
	@rm -rf $(CTMP)
	@rm -rf $(OUT)
	@rm -rf $(HEADTMP)
clean:
	@rm -rf $(NAME)
	@rm -rf $(CTMP)
	@rm -rf $(OUT)
	@rm -rf $(HEADTMP)
reinstall: clean all