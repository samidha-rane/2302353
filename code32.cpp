#include <iostream>


using namespace std;

class employee {
    int id;
    string name; 
    float salary;

public:
    void getdata();
    void putdata();
};

void employee::getdata() {
    cout << "Enter id of employee:" << "\n";
    cin >> id;
    cout << "Enter name of employee:" << "\n";
    cin >> name;
    cout << "Enter salary of employee:" << "\n";
    cin >> salary;
}

void employee::putdata() {
    cout << "Employee id: " << id << "\n";
    cout << "Employee name: " << name << "\n";
}

int main() {
    employee emp[20];
    int i, n;
    cout << "Enter the number of employees: ";
    cin >> n;

    for (i = 0; i < n; i++) {
        emp[i].getdata();
    }

    cout << "Employee Details:" << "\n";  

    for (i = 0; i < n; i++) {
        emp[i].putdata();
    }

    return 0;
}

