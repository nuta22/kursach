#pragma once
#include "Libr.h"
#include "Binf.h"

using namespace std;


class autorization
{
public:
	void Autorization();
	bool check_1(string, string);
	bool check_2(string, string);
	bool check_3(string, string);
	void admin_menu();
	void user_menu();
	void manager_menu();
	struct Users
	{
		string login_new;
		string password_new;
	}
	user[500];
};