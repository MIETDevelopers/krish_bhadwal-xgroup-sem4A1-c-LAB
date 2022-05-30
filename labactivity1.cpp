// Analyse and design classes for a student management system to create a student and course class 
//and there constructor, destructor and member functions
#include <iostream>
using namespace std;
class student //creating class named student
{
private:
    char name[20];
    int roll_no;
    float mmarks, smarks, emarks;

public:
    student()
    {
        cout << "using constructor:-" << endl;
        cout << "Enter the name, roll no and marks in maths, science and english of the student: " << endl;
        cin >> name >> roll_no >> mmarks >> smarks >> emarks;
    }

    void print()
    {
        cout << "Name:" << name << endl
             << "Roll no: " << roll_no << endl
             << "Marks in Maths: " << mmarks << endl
             << "Marks in Science: " << smarks << endl
             << "Marks in English: " << emarks << endl;
    }
    float avg()
    {
        cout << "Average marks of student: ";
        float mark = (mmarks + smarks + emarks) / 3;
        cout << mark << endl;
        return mark;
    }
    ~student()
    {
    }
};
class course  //creating class named course
{
private:
    char cname[20];
    char code[20];
    char in_charge[20];

public:
    course()
    {
        cout << "Enter the course name, course code and course in_charge:" << endl;
        cin >> cname >> code >> in_charge;
    }
    void display()
    {
        cout << "Course name: " << cname << endl
             << "course code: " << code << endl
             << "Course in-charge: " << in_charge << endl;
    }
    ~course() //destructor created
    {
    }
};

int main()
{
    cout << "For student class:-" << endl;
    student s, s1, s2;
    s.print();
    s.avg();
    cout << endl;
    s1.print();
    s1.avg();
    cout << endl;
    s2.print();
    s2.avg();
    cout << endl
         << "For course class:-" << endl;
    course c, c1, c2;
    c.display();
    cout << endl;
    c1.display();
    cout << endl;
    c2.display();
    return 0;
}