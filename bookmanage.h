#pragma once
#include"book.h"
#include"user.h"
#include"record.h"
#include<iostream>
#include<string>
#include<fstream>
#include<cstdio>
#include<limits>
class BookManage {
private:

public:
	BookManage();
	void Login(const std::string& name,int id);
	void ShowManu();
	void BorrowBooks(const std::string& name,int id);
	void ReturnBooks(const std::string& name,int id);
	void AddBooks();
	void CheckBooks();
	void CheckRecord();
	~BookManage();
};