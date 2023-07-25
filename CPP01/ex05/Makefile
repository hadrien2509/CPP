# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/25 16:51:06 by hgeissle          #+#    #+#              #
#    Updated: 2023/07/25 17:48:36 by hgeissle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl_2.0

SRCS = 	main.cpp\
		Harl.cpp\

OBJS		= $(SRCS:.cpp=.o)
RM			= rm -f
COMPILER	= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98

.cpp.o:
	${COMPILER} ${FLAGS} -c $< -o ${<:.cpp=.o}

$(NAME): ${OBJS}
	${COMPILER} ${FLAGS} $(OBJS) -o $(NAME)

all: $(NAME)
    
fclean: clean
	$(RM) $(NAME)
    
clean:
	$(RM) -f $(OBJS) $(OBJS_B)
    
re: fclean all

.PHONY: all clean fclean re