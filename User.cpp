#include"User.h"
#include<iostream>
using namespace std;
User::User() :m_name("unkown"), m_id(0), m_isadmin(0), m_count(0)
{

}
User::User(const std::string& name, int id, int isadmin, int count) : m_name(name), m_id(id), m_isadmin(isadmin), m_count(count)
{

}
User::~User()
{

}