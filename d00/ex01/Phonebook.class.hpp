#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
#include "Contact.class.hpp"

class Phonebook {
	public:
	int n;
	Contact tab[8];

	Phonebook(void);
	~Phonebook(void);

	void add(void);
};

#endif