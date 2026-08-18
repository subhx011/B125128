#include <iostream>
using namespace std;
class Exam
{
private:
    string name;
    string subject;
    float marks;
    float maxmarks;
public:
    void accept()
    {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter subject: ";
        cin >> subject;
        cout << "Enter marks obtained: ";
        cin >> marks;
        cout << "Enter maximum marks: ";
        cin >> maxmarks;
    }
friend class Result;
};
class Result
{
public:
    void displayResult(Exam e)
    {
        float percentage = (e.marks / e.maxmarks) * 100;
        cout << "Student Name: " << e.name << endl;
        cout << "Subject: " << e.subject << endl;
        cout << "Marks: " << e.marks << endl;
        cout << "Maximum Marks: " << e.maxmarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        if (percentage >= 40)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};

int main()
{
    Exam e;
    Result r;
    e.accept();
    r.displayResult(e);
    return 0;
}