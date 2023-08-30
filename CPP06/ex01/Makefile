# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/14 18:00:17 by hgeissle          #+#    #+#              #
#    Updated: 2023/08/25 15:04:29 by hgeissle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03

SRCS =	srcs/main.cpp\
		srcs/Bureaucrat.cpp\
		srcs/AForm.cpp\
		srcs/ShrubberyCreationForm.cpp\
		srcs/RobotomyRequestForm.cpp\
		srcs/PresidentialPardonForm.cpp\
		srcs/Intern.cpp\
		

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

.PHONY: all clean fclean re .cpp.o