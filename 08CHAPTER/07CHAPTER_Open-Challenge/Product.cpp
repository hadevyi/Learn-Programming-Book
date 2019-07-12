#include <string.h>
#include "Product.h"

class Book : public Product {
	int ISBN_number;	//ISBN Number
	string writer;	//Author
	string book_explan;	//About book titles
public:
};

class ConversationBook : public Book {
	string language;	//conversational language
public:
};

class CompactDisc :public Product {
	string album_title;	//album title
	string singer;	//Singer
public:
};