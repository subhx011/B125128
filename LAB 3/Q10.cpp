#include <iostream>
using namespace std;

class Employee
{
    int employeeID;
    string employeeName;
    float basicSalary;
    int months;
    float *earnings;

public:
    Employee()
    {
        earnings = NULL;
    }
    void input()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Employee Name: ";
        cin >> employeeName;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        cout << "Enter Number of Months: ";
        cin >> months;
        earnings = new float[months];

        cout << "Enter monthly earnings:" << endl;

        for (int i = 0; i < months; i++)
        {
            cout << "Month " << i + 1 << ": ";
            cin >> earnings[i];
        }
    }
    float totalEarnings()
    {
        float total = 0;

        for (int i = 0; i < months; i++)
        {
            total = total + earnings[i];
        }

        return total;
    }
    float averageEarning()
    {
        return totalEarnings() / months;
    }
    int highestMonth()
    {
        int highest = 0;

        for (int i = 1; i < months; i++)
        {
            if (earnings[i] > earnings[highest])
            {
                highest = i;
            }
        }

        return highest;
    }
    void display()
    {
        int highest = highestMonth();

        cout << "\n--- Employee Salary Analysis ---" << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;

        cout << "\nMonthly Earnings:" << endl;

        for (int i = 0; i < months; i++)
        {
            cout << "Month " << i + 1 << ": "
                 << earnings[i] << endl;
        }

        cout << "\nTotal Earnings: "
             << totalEarnings() << endl;

        cout << "Average Monthly Earning: "
             << averageEarning() << endl;

        cout << "Highest Earning: "
             << earnings[highest] << endl;

        cout << "Highest Earning Month: Month "
             << highest + 1 << endl;
    }
    ~Employee()
    {
        delete[] earnings;
    }
};

int main()
{
    Employee e;

    e.input();
    e.display();

    return 0;
}