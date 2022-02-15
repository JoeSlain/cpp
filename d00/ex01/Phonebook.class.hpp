#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
#include "Contact.class.hpp"
#include <string>

class Phonebook {
	private:
		int n;
		int current;
		Contact tab[8];

	public:
		Phonebook(void);
		~Phonebook(void);

		int get_n(void);
		void set_n(int n);
		int get_current(void);
		void set_current(int n);
		void print_contact(int n);
		void print_contact_list(void);
		void add(void);
		void search(void);
		
		
};

#endif