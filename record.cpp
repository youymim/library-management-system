#include"Record.h"
using namespace std;
Record::Record():m_uname("unkown"),m_bname("unkown"),time(0)
{

}
Record::Record(const std::string& name1, const std::string& name2, int time) : m_uname(name1), m_bname(name2), time(time)
{

}
void Record::Log()
{

}
Record::~Record()
{

}