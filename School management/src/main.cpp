#include <iostream>
using namespace std;

// Functions
void main_func();
void add_teacher();
void add_student();

// Classes
class students
{
public:
    string name;
    int age;
    int bn;

    // Constractor
    students(string name, int age, int bn)
    {
        this->name = name;
        this->age = age;
        this->bn = bn;
    }

    void show(int j)
    {
        cout << "\n---------Student " << j + 1 << " information-----------\n";
        cout << "Name " << j + 1 << ": " << name << endl;
        cout << "Age " << j + 1 << ": " << age << endl;
        cout << "Banch Number " << j + 1 << ": " << bn << endl;
        cout << "------------------------------------------\n";
    }
};

class teachers
{
public:
    string name;
    int age;
    float salary;

    // Constractor
    teachers(string name, int age, float salary)
    {
        this->name = name;
        this->age = age;
        this->salary = salary;
    }

    void show(int j)
    {
        cout << "\n---------Teacher " << j + 1 << " information-----------\n";
        cout << "Name " << j + 1 << ": " << name << endl;
        cout << "Age " << j + 1 << ": " << age << endl;
        cout << "Salary " << j + 1 << ": " << salary << endl;
        cout << "------------------------------------------\n";
    }
};

//--------------
int main()
{

    main_func();
    return 0;
}

// FunctionsDetails
void main_func()
{
    int choice;
    do
    {        
        cout << "---------- System options ----------\n"
                "\n1- Press 1 to add teachers"
                "\n2- Press 2 to add students"
                "\n3- Press 3 to to exit";

        cout << "\n-------------------------------------\n";
        cin >> choice;
        cout << "-------------------------------------\n";

        switch (choice)
        {
        case 1:
            add_teacher();
            break;
        case 2:
             add_student();
            break;
        case 3:
            break;
        default:
            cout << "Enter a valid number!!!!\n";
            
        }
    } while (choice !=3);
}

void add_teacher()
{
    string names[10];
    int ages[10];
    float salaries[10];

    int teacher_choice;
    cout << "Enter the number of Teachers: ";
    
    cin >> teacher_choice;
    cout << "-------------------------------------\n";

    // For getting data from user
    for (int i = 0; i < teacher_choice; i++)
    {

        cout << "Enter Name " << i + 1 << ": ";
        cin >> names[i];
        cout << "-------------------------------------\n";

        cout << "Enter age " << i + 1 << ": ";
        cin >> ages[i];
        cout << "-------------------------------------\n";

        cout << "Enter salary " << i + 1 << ": ";
        cin >> salaries[i];
        cout << "=====================================\n";
    }

    for (int i = 0; i < teacher_choice; i++)
    {
        teachers teacher(names[i], ages[i], salaries[i]);
        teacher.show(i);
    }
}


void add_student()
{
    string names[10];
    int ages[10];
    float salaries[10];

    int student_choice;
    cout << "Enter the number of Students: ";
    
    cin >> student_choice;
    cout << "-------------------------------------\n";

    // For getting data from user
    for (int i = 0; i < student_choice; i++)
    {

        cout << "Enter Name " << i + 1 << ": ";
        cin >> names[i];
        cout << "-------------------------------------\n";

        cout << "Enter age " << i + 1 << ": ";
        cin >> ages[i];
        cout << "-------------------------------------\n";

        cout << "Enter Banch Number " << i + 1 << ": ";
        cin >> salaries[i];
        cout << "=====================================\n";
    }

    for (int i = 0; i < student_choice; i++)
    {
        students student(names[i], ages[i], salaries[i]);
        student.show(i);
    }
}