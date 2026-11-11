#pragma once
#include<string>
class Book
{
private:
	std::string m_name;
	std::string m_author;
	double m_price;
	int m_id=0;
public:
	Book();
	Book(const std::string& name,const std::string& author, double price = 0.0, int id = 0.0);

	~Book();
};
