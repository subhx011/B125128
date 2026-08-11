#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    string name;
    int subjects;
    float *marks;

public:
    Student()
    {
        marks = NULL;
    }
    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Number of Subjects: ";
        cin >> subjects;
        marks = new float[subjects];
        cout << "Enter marks for " << subjects << " subjects:" << endl;
        for (int i = 0; i < subjects; i++)
        {
            cin >> marks[i];
        }
    }
    float total()
    {
        float sum = 0;

        for (int i = 0; i < subjects; i++)
        {
            sum = sum + marks[i];
        }

        return sum;
    }
    float average()
    {
        return total() / subjects;
    }
    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Number of Subjects: " << subjects << endl;

        cout << "Marks: ";
        for (int i = 0; i < subjects; i++)
        {
            cout << marks[i] << " ";
        }

        cout << endl;
        cout << "Total Marks: " << total() << endl;
        cout << "Average Marks: " << average() << endl;
    }

    // Release dynamically allocated memory
    ~Student()
    {
        delete[] marks;
    }
};

int main()
{
    Student s;

    s.input();
    s.display();

    return 0;
}
