#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <string>
#include <iostream>

class Contact {
	private:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phone;
	std::string	secret;
	int			id;

	public:
	Contact(void);
	~Contact(void);

	std::string	get_firstname(void);
	std::string	get_lastname(void);
	std::string	get_nickname(void);
	std::string	get_phone(void);
	std::string	get_secret(void);
	int		get_id(void);

	void	set_firstname(std::string);
	void	set_lastname(std::string);
	void	set_nickname(std::string);
	void	set_phone(std::string);
	void	set_secret(std::string);
	void	set_id(int id);	
};

#endif