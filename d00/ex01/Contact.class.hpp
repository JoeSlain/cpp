#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP


class Contact {
	public:

	char	firstname[1024];
	char	lastname[1024];
	char	nickname[1024];
	char	phone[1024];
	char	secret[1024];
	int		id;

	Contact(void);
	Contact(int id);
	~Contact(void);
};

#endif