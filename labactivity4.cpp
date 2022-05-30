//to search student details by roll no using member function of student class
//to get the results of students by roll no using a member function of student class.
#include <iostream>
using namespace std;
class student
{
private:
    char name[20];
    int roll_no;
    float mmarks, smarks, emarks;

public:
    student() //constructor
    {
    }
    void input()
    {

        cin >> name >> roll_no >> mmarks >> smarks >> emarks;
    }
    student print()
    {
        cout << "Name :" << name << endl
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
    int roll()
    {
        return roll_no;
    }

    ~student()
    {
    }
};

int main()
{

    cout << "For student class:-" << endl;
    int i, n, x;

    cout << "enter the number of students: " << endl;
    cin >> n;
    student s[n];
    for (i = 0; i < n; i++)
    {
        cout << "enter name, roll no , marks in maths, science and english of student " << i + 1 << endl;
        s[i].input();
        cout << "Details of the student" << i + 1 << endl;
        s[i].print();
        s[i].avg();
    }

    cout << "enter the roll no of the student whose details are required." << endl;
    cin >> x;
    for (i = 0; i < n; i++)
    {
        if (s[i].roll() == x)
        {
            cout << "details of the student with roll no " << x << endl;
            s[i].print();
        }
    }
    cout << "enter the roll no of the student whose result is desired" << endl;
    cin >> x;
    for (i = 0; i < n; i++)
    {
        if (s[i].roll() == x)
        {
            cout << "Result of the student with roll no " << x << endl;
            cout << s[i].avg() << endl;
        }
    }
    return 0;
}