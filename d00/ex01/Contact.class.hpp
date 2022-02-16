#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP


class Contact {
	private:
	char	*firstname;
	char	*lastname;
	char	*nickname;
	char	*phone;
	char	*secret;
	int		id;

	public:
	char	*get_firstname(void);
	char	*get_lastname(void);
	char	*get_nickname(void);
	char	*get_phone(void);
	char	*get_secret(void);
	int		get_id(void);

	
	Contact(void);
	Contact(char *first, char *last, char *nick, char *phone, char *secret, int id);
	~Contact(void);
};

#endif