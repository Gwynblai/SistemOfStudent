#include "D:\pois\Project9\Project9\Admin.h"


    void Admin::createNewAccount(string name, string email, string role) {
        cout << "Creating new " << role << " account: " << name << " (" << email << ")" << endl;
    }

    void Admin::deleteAccount(int accountId) {
        cout << "Deleting account ID: " << accountId << endl; 
    }

    void Admin::generateReport() {
        cout << "Generating system-wide report..." << endl;
    }

    void Admin::manageDepartment(int departmentId, string action) {
        cout << "Performing action '" << action << "' on department ID: " << departmentId << endl;
    }

