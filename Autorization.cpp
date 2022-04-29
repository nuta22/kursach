#include "Autorization.h"


void Autorization()
{
    setlocale(LC_ALL, "Russian");
    cout << "1 - Вход от имени пользователя" << endl;
    cout << "2 - Вход от имени менеджера" << endl;
    cout << "3 - Вход от имени администратора" << endl;
    cout << "4 - Выход" << endl;

    int a;
    cin >> a;
    switch (a)
    {

    case 1: void user_menu();
    case 2: void manager_menu();
    case 3: void admin_menu();

    }
}
void user_menu()
{

    bool flag_1 = false;

    string login, password;
    cout << "Введите логин: " << endl;
    cin >> login;
    cout << "Введите пароль: " << endl;
    cin >> password;
    if (flag_1 == true)
    {
        cout << "Вы вошли в систему от имени пользователя!Выбирите что хотели бы выполнить:" << endl;
    }
    else
    {
        system("cls");
        cout << "Неверный пароль. Попробуйте еще раз." << endl;
        system("pause");
    }
}



bool check_1(string login, string password)

{

    if (login == "LOGIN" && password == "PASSWORD")
    {
        return true;
    }
    else
    {
        return false;
    }
}
void manager_menu()
{
    bool flag_2 = false;

    string login_manager, password_manager;
    cout << "Введите логин: " << endl;
    cin >> login_manager;
    cout << "Введите пароль: " << endl;
    cin >> password_manager;

    if (flag_2 == true)
    {
        cout << "Вы вошли в систему от имени менеджера!" << endl;
    }
    else
    {
        system("cls");
        cout << "Неверный пароль. Попробуйте еще раз." << endl;
        void();
    }

    system("pause");
}

bool check_2(string login_manager, string password_manager)
{
    if (login_manager == "Login" && password_manager == "Password")
    {
        return true;
    }
    else
    {
        return false;
    }
}
/////////////////////////////////////////////////////////////////////////////////////
void admin_menu()
{
    bool flag_3 = false;

    string login_admin, password_admin;
    cout << "Введите логин: " << endl;
    cin >> login_admin;
    cout << "Введите пароль: " << endl;
    cin >> password_admin;

    if (flag_3 == true)
    {
        cout << "Вы вошли в систему от имени администратора!" << endl;
    }
    else
    {
        system("cls");
        cout << "Неверный пароль. Попробуйте еще раз." << endl;
        void();
    }
    system("pause");

}

bool check_3(string login_admin, string password_admin)
{
    if (login_admin == "login" && password_admin == "password")
    {
        return true;
    }
    else
    {
        return false;
    }
}