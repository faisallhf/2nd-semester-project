#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class student
{
	string name;
	string names;
	string fa_no;
	string id;
	string age;
	string mob_no;
public:
	student()
	{
		cout << "Enter Student Data" << endl << endl;
	}
	void std(string n, string na, string i, string a, string m, string fa)
	{
		name = n;
		names = na;
		fa_no = fa;
		id = i;
		age = a;
		mob_no = m;
	}
	void display()
	{
		cout << "Name of Student :" << name << endl;
		cout << "Name of Student father:" << names << endl;
		cout << "Student ID :" << id << endl;
		cout << "Student Age :" << age << endl;
		cout << "Student Mobile No :" << mob_no << endl;
		cout << "Student Father Mobile No :" << fa_no << endl << endl;
	}
};
class Employee : public student
{
	string ename;
	string estat;
	string eno;
	string eage;
	string ecnic;
public:
	Employee()
	{
		cout << "Enter Employee Data" << endl << endl;

	}
	void Emp(string a, string b, string c, string d, string e)
	{
		ename = a;
		estat = b;
		eno = c;
		eage = d;
		ecnic = e;
	}
	void disp()
	{
		cout << "Name Of Employee :" << ename << endl;
		cout << "Employee Mobile No :" << eno << endl;
		cout << "Teacher Father Mobile No :" << eno << endl;
		cout << "Age of Employee :" << eage << endl;
		cout << "CNIC of Employee :" << ecnic << endl;
		cout << "Martial Status of Employee :" << estat << endl << endl;
	}
};
class teacher : public student
{
	string tname;
	string fname;
	string status;
	string fno;
	string mobno;
	string ages;
	string stu;
	string exp;
	string cnic;
public:
	teacher()
	{
		cout << "Enter Teacher Data" << endl << endl;
	}
	void tech(string a, string b, string c, string d, string e, string f, string g, string h, string i)
	{
		tname = a;
		fname = b;
		fno = c;
		mobno = d;
		ages = e;
		stu = f;
		exp = g;
		cnic = h;
		status = i;
	}
	void disp()
	{
		cout << "Name Of Teacher :" << tname << endl;
		cout << "Name of Teacher Father :" << fname << endl;
		cout << "Teacher Mobile No :" << fno << endl;
		cout << "Teacher Father Mobile No :" << mobno << endl;
		cout << "Age of Teacher :" << ages << endl;
		cout << "Degree Of Teacher :" << stu << endl;
		cout << "Experience of Teacher :" << exp << endl;
		cout << "CNIC of Teacher :" << cnic << endl;
		cout << "Martial Status :" << status << endl << endl;
	}
};
void menu();
void choice();
void manager();
void students();
void teachers();
void Employeer();
void Welcome_Screen()
{
	cout << "" << endl;
	cout << "  0     0   000000   0        000000  000000  00   00  000000" << endl;
	cout << "  0     0   0        0        0       0    0  0 0 0 0  0     " << endl;
	cout << "  0  0  0   000000   0        0       0    0  0  0  0  000000" << endl;
	cout << "  0 0 0 0   0        0        0       0    0  0     0  0     " << endl;
	cout << "  00   00   000000   000000   000000  000000  0     0  000000" << endl;
	cout << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout << "PIR MEHR ALI SHAH ARID AGRICULTURAL UNIVERSITY DATABASE SYSTEM" << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout<<"Group Members:\n\n";
	cout<<"||1-FAISAL ISHAQ||\n||2-MOAZZAM ALI SANI||\n||3-ABDUL MAJID KHAN||\n\n";
	}
void menu()
{
	Welcome_Screen();
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
	cout << "||1-Enter New Student Data||" << endl;
	cout << "||2-Enter New Teacher Data||" << endl;
	cout << "||3-Enter New Employee Data||" << endl;
	cout << "||4-See Data From File||"<< endl ;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	choice();
}
void choice()
{
	int choose, choo, choosed;
	string names, name, ename, eno, d, e, f, h, g, tname, fname, tmob, fmob;
	string ages, estat, exp, ecnic, eage, stu, status, cnic;
	char choice;
	again:
	cin >> choice;
	cin.ignore();
	system("cls");
	switch (choice)
	{
	case '1':
	{
	studata:
		system("CLS");
		student a1;
		cout << "Enter Student Name :";
		getline(cin, name);
		cout << "Enter Student Father Name :";
		getline(cin, names);
		cout << "Enter Student ID :";
		cin >> d;
		cout << "Enter Student Age :";
		cin >> e;
		cout << "Enter Student Mobile No :";
		cin >> f;
		cout << "Enter Student Father Mobile No :";
		cin >> g;
		cout << "Thanks For The Data" << endl;
		a1.std(name, names, d, e, f, g);
		ofstream myfile("Student Data.txt", ios::app);
	  	myfile << "Name Of Student :" << name << endl;
		myfile << "Name Of Father :" << names << endl;
		myfile << "Name Of Student ID :" << d << endl;
		myfile << "Name Of Student Age :" << e << endl;
		myfile << "Name Of Student Mobile No. :" << f << endl;
		myfile << "Name Of Father Mobile No. :" << g << endl << endl;
		myfile.close();
		cout << endl;
		system("pause");
		system("cls");
		cout << endl;
		cout << "Given Student Data" << endl << endl;
		a1.display();
		cout << endl;
		system("pause");
		system("cls");
		cout << endl;
		cout <<"1) Enter New Student Data" << endl
			<< "2) Back to Menu" << endl
			<< "3) Exit" << endl;
	tryagain:
		cin >> (choose);
		cin.ignore();
		system("cls");
		switch (choose)
		{
		case 1:
		{
			system("cls");
			goto studata;
			break;
		}
		case 2:
		{
			system("cls");
			menu();
			break;
		}
		case 3:
		{
			exit(0);
			break;
		}
		case 4:
		{
			cout << "Try Again\t";
			goto tryagain;
			break;
		}
		}
		break;
	}
	case '2':
	{
		system("cls");
	tecdata:
		teacher a1;
		cout << "Enter Teacher Name :";
		getline(cin, tname);
		cout << "Enter Teacher Father Name :";
		getline(cin, fname);
		cout << "Enter Teacher Mobile No :";
		cin >> tmob;
		cout << "Enter Teacher's Father Mobile No :";
		cin >> fmob;
		cout << "Enter Teacher Age :";
		cin >> ages;
		cin.ignore();
		cout << "Enter Degree :";
		getline(cin, stu);
		cout << "Enter Teacher Experience Year :";
		cin >> exp;
		cin.ignore();
		cout << "Enter CNIC of Teacher :";
		cin >> cnic;
		cout << "Enter Teacher Martial Status : ";
		cin >> status;
		cout << "Thanks For The Data" << endl;

		a1.tech(tname, fname, tmob, fmob, ages, stu, exp, cnic, status);

		ofstream myfile("Teacher Data.txt", ios::app);
		myfile << "Name Of Teacher :" << tname << endl;
		myfile << "Name Of Father :" << fname << endl;
		myfile << "Name Of Teacher Mobile No. :" << tmob << endl;
		myfile << "Name Of Teacher Age :" << ages << endl;
		myfile << "Name Of Father Mobile No. :" << fmob << endl;
		myfile << "Name Of Teacher Degree :" << stu << endl;
		myfile << "Name Of Teacher Experience :" << exp << endl << endl;
		cout << endl;
		myfile.close();
		system("pause");
		system("cls");
		cout << endl;

		cout << "Given Teacher Data" << endl << endl;
		a1.disp();
		cout << endl;
		system("pause");
		system("cls");

		cout << endl << "1) Enter New Teacher Data" << endl
			<< "2) Back to Menu" << endl
			<< "3) Exit" << endl;
	trysagain:
		cin >> (choo);
		cin.ignore();
		system("cls");
		switch (choo)
		{
		case 1:
		{
			system("cls");
			goto tecdata;
			break;
		}
		case 2:
		{
			system("cls");
			menu();
			break;
		}
		case 3:
		{
			exit(0);
			break;
		}
		case 4:
		{
			cout << "Try Again\t";
			goto trysagain;
			break;
		}

		}
		break;
	}
	case '3':
	{
		system("cls");
	Empdata:
		Employee a1;
		cout << "Enter Employee Name :";
		getline(cin, ename);
		cout << "Enter Employee Mobile No :";
		cin >> eno;
		cout << "Enter Employee Age :";
		cin >> eage;
		cin.ignore();
		cout << "Enter CNIC of Employee :";
		cin >> ecnic;
		cout << "Enter Employee Martial Status : ";
		cin >> estat;
		cout << "Thanks For The Data" << endl;

		a1.Emp(ename, eno, eage, ecnic, estat);

		ofstream myfile("Employee Data.txt", ios::app);
		myfile << "Name Of Employee :" << ename << endl;
		myfile << "Employee Mobile No. :" << eno << endl;
		myfile << "Employee Age :" << eage << endl;
		myfile << "Employee Martial Status :" << estat << endl << endl;
		myfile.close();
		cout << endl;
		system("pause");
		system("cls");
		cout << endl;
		cout << "Given Employee Data" << endl << endl;
		a1.disp();
		cout << endl;
		system("pause");
		system("cls");
		cout << endl << "1) Enter New Employee Data" << endl
			<< "2) Back to Menu" << endl
			<< "3) Exit" << endl;
	tryssagain:
		cin >> (choosed);
		cin.ignore();
		system("cls");
		switch (choosed)
		{
		case 1:
		{
			system("cls");
			goto Empdata;
			break;
		}
		case 2:
		{
			system("cls");
			menu();
			break;
		}
		case 3:
		{
			exit(0);
			break;
		}
		case 4:
		{
			cout << "Try Again\t";
			goto tryssagain;
			break;
		}

		}
		break;
	}
	case '4':
	{
		manager();
		break;
	}
	default:
	{
		cout << "Wrong Input Try Again " << endl;
		goto again;
		break;
	}
	}
}
void manager()
{
	int option;
	system("cls");
	managers:
	cout << "1) See Student Data" << endl;
	cout << "2) See Teacher Data" << endl;
	cout << "3) See Employee Data" << endl;
	cout << "4) Go Back To Main Menu" << endl;
	cin >> (option);
	system("cls");
	switch (option)
	{
	case 1:
	{
		students();
		break;
	}
	case 2:
	{
		teachers();
		break;
	}
	case 3:
	{
		Employeer();
		break;
	}
	case 4:
	{
		menu();
		break;
	}
	default:
	{
		goto managers;
		break;
	}
	}
}
void students()
{
	int man;
	system("cls");
	cout << endl << endl;
	cout << "1) List of All Students" << endl;
	cout << "2) Goto Menu" << endl;
again:
	cin >> man;
	cin.ignore();
	system("cls");
	switch (man)
	{
	case 1:
	{
		string name;
		ifstream infile;
		infile.open("Student Data.txt");
		{
			while (getline(infile, name))
			{
				cout << name << endl;
			}
		}
		infile.close();
		cout << endl;
		system("pause");
		cout << endl;
		cout << endl;
		cout << "Press Enter to go to menu ";
		system("cls");
		manager();
		break;
	}
	case 2:
	{
		system("cls");
		manager();
		break;
	}
	default:
	{
		cout << "Try Again  ";
		goto again;
		break;
	}
	}
}
void Employeer()
{
	int man;
	system("cls");
	cout << endl << endl;
	cout << "1) List of All Employees" << endl;
	cout << "2) Goto Menu" << endl;
again:
	cin >> man;
	cin.ignore();
	switch (man)
	{
	case 1:
	{
		string name;
		ifstream infile;
		infile.open("Employee Data.txt", ios::out);
		{
			while (getline(infile, name))
			{
				cout << name << endl;
			}
		}
		infile.close();
		cout << endl;
		system("pause");
		cout << endl;
		cout << endl;
		cout << "Press Enter to go to menu ";
		system("cls");
		manager();
		break;
	}
	case 2:
	{
		system("cls");
		manager();
		break;
	}
	default:
	{
		cout << "Try Again  ";
		goto again;
		break;
	}
	}
}
void teachers()
{
	int man, find;
	system("cls");
	cout << endl << endl;
	cout << "1) List of All Teacher" << endl;
	cout << "2) Goto Menu" << endl;
again:
	cin >> man;
	cin.ignore();
	system("cls");
	switch (man)
	{
	case 1:
	{
		string name;
		ifstream infile;
		infile.open("Teacher Data.txt");
		{
			while (getline(infile, name))
			{
				cout << name << endl;
			}
		}
		infile.close();
		system("pause");
		cout << endl;
		cout << endl;
		cout << "Press Enter to go to menu ";
		system("cls");
		manager();
		break;
	}
	case 2:
	{
		system("cls");
		manager();
		break;
	}
	default:
	{
		cout << "Try Again  ";
		goto again;
		break;
	}
	}
}
int main()
{
	menu();
	return 0;
}