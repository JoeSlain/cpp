#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
#include "Contact.class.hpp"
#include <string>

class Phonebook {
	public:
		int n;
		Contact tab[8];

		Phonebook(void);
		~Phonebook(void);

		void print_contact(int n);
		void print_contact_list(void);
		void add(void);
		void search(void);
		
		
};

#endif