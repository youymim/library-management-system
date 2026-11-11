#pragma once
#include<string>
class User
{
private:
	std::string m_name;
	int m_id=0;
	int m_isadmin=0;
	int m_count=0;
public:
	User();
	User(const std::string& name, int id=0, int isadmin=0, int count=0);
	~User();
};
