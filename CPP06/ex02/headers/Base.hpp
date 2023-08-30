#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

class Base
{
	private:

	public:
		virtual ~Base();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif