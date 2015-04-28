#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Student
{
	char surname[16];
	char name[16];
	int year_of_birthar;
public:
	Student()
	{
		year_of_birthar = 0;
		name[0] = '/';
		surname[0] = '/';
	}
	void Set(char* l_name, char* f_name, int age)
	{
		if (age == 0 || strlen(f_name) == 0 || strlen(l_name) == 0){
			return;
		}
		strcpy(surname, l_name);
		strcpy(name, f_name);
		year_of_birthar = age;
	}
	void show()
	{
		cout << "\nName: " << surname << " " << name;
		cout << "\nAge: " << year_of_birthar;
	}
	~Student(){};
}Student;

class GroupStudents
{
	int group;
	char specialty[16];
public:
	GroupStudents()
	{
		group = 0;
		specialty[0] = '/';
	}
	void Set(int group_name, char* spetial_name)
	{
		if (group_name == 0 || strlen(spetial_name) == 0){
			return;
		}
		strcpy(specialty, spetial_name);
		group = group_name;
	}
	void show()
	{
		cout << "\nSpecialty: " << specialty;
		cout << "\nGroup: " << group << endl;

	}
	~GroupStudents(){};
}GroupStud;

int main()
{
	char name[16];
	char surname[16];
	int age;
	char specialty[16];
	int group;
	cout << "Input surname: ";
	cin >> surname;
	cout << "\nInput name: ";
	cin >> name;
	cout << "\nYear of birthar: ";
	cin >> age;
	cout << "\nSpecialty: ";
	cin >> specialty;
	cout << "\nGroup: ";
	cin >> group;
	Student.Set(surname, name, age);
	GroupStud.Set(group, specialty);
	system("cls");
	Student.show();
	GroupStud.show();

}