#include "Contact.class.hpp"

Contact::Contact(void)
{}

Contact::Contact(char *first, char *last, char *nick, char *phone, char *secret, int id) : firstname(first), lastname(last), nickname(nick), phone(phone), secret(secret), id(id)
{}

Contact::~Contact(void)
{}

