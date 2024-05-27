#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

// Color codes as global variables
const std::string RESET = "\033[0m";
const std::string RED = "\033[31;1m";
const std::string GREEN = "\033[32;1m";
const std::string YELLOW = "\033[33;1m";
const std::string BLUE = "\033[34;1m";
const std::string PURPLE = "\033[35;1m";
const std::string CYAN = "\033[36;1m";
const std::string GRAY = "\033[37;1m";

// TEMPLATE CLASS

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
	// ========================================================================
		MutantStack( void );
		MutantStack( MutantStack const &copy );
		virtual ~MutantStack( void );

	// Operators ==============================================================
		MutantStack& operator=( MutantStack const &other );

	// Methods ================================================================
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin( void );
		iterator	end( void );

};

// TEMPLATE TYPES

// Constructor & Destructor ===================================================
template <typename T>
MutantStack<T>::MutantStack( void ) : std::stack<T>() {}

template <typename T>
MutantStack<T>::MutantStack( MutantStack const &copy ) : std::stack<T>(copy) {}

template <typename T>
MutantStack<T>::~MutantStack( void ) {}

// Operators ==================================================================
template <typename T>
MutantStack<T> &MutantStack<T>::operator=( MutantStack const &other )
{
	if (this != &other)
	{
		std::stack<T>::operator=(other);
	}
	return *this;
}

// Methods ====================================================================
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin( void )
{
	return std::stack<T>::c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end( void )
{
	return std::stack<T>::c.end();
}


#endif