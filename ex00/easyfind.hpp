#ifndef EASYFIND_HPP
# define EASYFIND_HPP

// MACRO
# define RESET		"\e[m"
# define RED		"\e[31m"
# define GREEN		"\e[32m"
# define YELLOW		"\e[33m"
# define BLUE		"\e[34m"
# define MAGENTA	"\e[35m"
# define CYAN		"\e[36m"

template <typename T> void easyfind(T &a, int &b)
{
    int len = a.length()
    int count = 0;

    for (size_t i = 0; i < len; i++)
    {
        if (a[i] == b)
            count++;
    }
    if (count == 0)
    {
        std::cout << RED << "The number was not found"<< RESET << std::endl
    }
}

#endif