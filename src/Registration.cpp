#include "D:\pois\Project9\Project9\Registration.h"


    // Конструктор, принимающий ID и пароль
    Registration::Registration(int id, string password) : Entity(id), password(password) {} 

    // Метод для изменения пароля
    void Registration::changePassword(const string& newPassword) { 
        password = newPassword;
        cout << "Password changed successfully!" << endl;
    }

    // Метод для проверки пароля
    bool Registration::validatePassword(const string& inputPassword) const {
        return password == inputPassword;
    }

    // Метод для отображения информации о регистрации
    void Registration::displayInfo() const {
        cout << "Registration ID: " << id << endl;
    }
