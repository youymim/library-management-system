#include"bookmanage.h"
#include<cstdlib>
using namespace std;
int main()
{
	BookManage bm;
	cout << "登录或注册" << endl;
	string name;
	int id;
	cout << "请输入姓名和编号：" << endl;
	cin >> name >> id;
	int isadmin = 0;
	cout << "是否为管理员？" << endl;
	cout << "1.不是" << "   " << "2.是" << endl;
	cin >> isadmin;
	User u(name, id, isadmin);
	bm.Login(name, id);
	while (true)
	{
		bm.ShowManu();
		int select = 0;
		cin >> select;
		if (cin.fail())              // 读数字失败了
		{
			cin.clear();             // 1. 清除错误状态
			cin.ignore(numeric_limits<streamsize>::max(), '\n');  // 2. 扔掉缓冲区里的字母
			cout << "输入无效，请输入数字！" << endl;
			system("pause");
			system("cls");
			continue;                // 3. 直接进入下一圈，不执行 switch
		}
		switch (select)
		{
		case 1:
			bm.BorrowBooks(name,id);
			break;
		case 2:
			bm.ReturnBooks(name,id);
			break;
		case 3:
			bm.AddBooks();
			break;
		case 4:
			bm.CheckBooks();
			break;
		case 5:
			bm.CheckRecord();
			break;
		case 0:
			cout << "成功退出" << endl;
			exit(0);
		default:
			cout << "没有这个选项，请重新输入" << endl;
			break;
		}
		system("pause");
		system("cls");
	}
}
