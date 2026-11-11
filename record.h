#pragma once
#include<string>
class Record
{
private:
	std::string m_uname;
	std::string m_bname;
	int time = 0;
public:
	Record();
	Record(const std::string& name1, const std::string& name2, int time=0);
	void Log();
	~Record();
};
