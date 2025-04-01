#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee
{
private:
    // Attributs
    string name;
    int age;
    int salary;

public:
    Employee()
    {
        name = "";
        age = 0;
        salary = 0;
    }

    // Methodes
    Employee(string name, int age, int salary)
    {
        this->name = name;
        this->age = age;
        this->salary = salary;
    }

    // Get et Set
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    int getSalary()
    {
        return salary;
    }

    void setName(string name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setSalary(int salary)
    {
        this->salary = salary;
    }

    void saisir()
    {
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter age : ";
        cin >> age;
        cout << "Enter salary : ";
        cin >> salary;
    }
};

int main()
{
    int nbEmployee;
    cout << "Number of entries ?";
    cin >> nbEmployee;

    vector<Employee> employees(nbEmployee);

    for (int i = 0; i < nbEmployee; i++)
    {
        cout << "\nEmployee " << (i + 1) << ":" << endl;
        employees[i].saisir();
    }

    for (int i = 0; i < nbEmployee; i++)
    {
        cout << "Details of employee " << (i + 1) << "\nName : " << employees[i].getName() << ", age = " << employees[i].getAge() << ", salary = " << employees[i].getSalary() << " $" << endl;
    }
    return 0;
}