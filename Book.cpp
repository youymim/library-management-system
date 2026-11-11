#include"Book.h"
using namespace std;
Book::Book():m_name("unkown"),m_author("unkown"),m_price(0.0),m_id(0)
{

}
Book::Book(const string& name,const string& author, double price, int id) :m_name(name), m_author(author), m_price(price), m_id(id)
{

}
Book::~Book()
{

}