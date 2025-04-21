CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
NAME = Form
FILES = main.cpp Bureaucrat.cpp AForm.cpp \
 ShrubberyCreationForm.cpp RobotomyRequestForm.cpp  Intern.cpp\
 PresidentialPardonForm.cpp
OBJECTS = $(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CPPFLAGS) $^ -o $@

%.o: %.cpp
	$(CC) -c $(CPPFLAGS) -o $@ $<

clean:
	rm -rf *.o

fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: clean fclean re
