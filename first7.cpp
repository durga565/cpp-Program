#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;



//                                    Ass ------- 21 ( File Handling )
//                                   ----------------------------------


// 1. Write a c++ program to copy content of file and store in other file.   // 73 Program

// void p1(char file1[], char file2[]) {
//     char ch;
//     ifstream fin(file1);
//     ofstream fout(file2);

//     if(!fin) {
//         cout << "File not found\n";
//         return;
//     } 

//     while(fin.get(ch)) {
//         fout << ch;
//     }

//     fin.close();
//     fout.close();

// }

// void p2(char file[]) {
//     char ch;
//     ifstream fin(file);

//     if(!fin) {
//         cout << "File not found\n";
//         return;
//     }

//     while(fin.get(ch)) {
//         cout << ch;
//     }

//     fin.close();
// }

// int main() {
//     ofstream fout;
//     char file[50], ch;

//     cout << "Enter filename: ";
//     cin.getline(file,50);

//     fout.open(file);

//     if(!fout) {
//         cout << "File cannot created\n";
//         return 0;
//     }
    
//     cout << "Enter ext ( end with #)\n";

//     while((ch = cin.get()) != '#') {
//         fout << ch;
//     }

//     fout.close();

//     cout <<"Data written to file Successfully\n";
   
//     return 0;
// }

// 2. Write a C++ program to read and display content of a file.            //  74 Program

// void read(char filename[]) {
//     char ch;
//     ifstream fin;
//     fin.open(filename,ios::in);
//     if(!fin) {
//         cout << "File not found\n";
//     } else {
//         ch=fin.get();
//         while(!fin.eof()) {
//             cout << ch;
//             ch=fin.get();
//         }

//         fin.close();
//     }
// }

// int main() {
//     char filename[] = "ltd.txt";

//     read(filename);
//     cout << endl;

//     return 0;

// }


// 3. Define a class Employee with empid, name and salary as instance variables.      // 75 Program
//    Also provide instance methods to input and display Employee record.

// class Employee {
// private:
//     int empid; 
//     char name[50];
//     float salary;
//     constexpr static char filename[]="Employee.dat";
// public:
//     Employee();
//     Employee(int , const char[], float);
//     void input();
//     void showEmployee();
//     void save();
//     static void readAllemployee();
// };

// Employee::Employee() {
//     empid = 0;
//     strcpy(name,"");
//     salary = 0.0;
// }

// void Employee::input() {
//     char tempName[50];

//     cout << "Enter Emp id: ";
//     cin >> empid;

//     cout << "Enter name : ";
//     cin >> tempName;
//     strcpy(name,tempName);

//     cout << "Enter Salary: ";
//     cin >> salary;
// }

// Employee::Employee(int empid, const char name[], float salary) {
//     this->empid=empid;
//     strcpy(this->name,name);
//     this->salary=salary;
// }

// void Employee::showEmployee() {
//     cout << "\n" << empid << " " << name << " " << salary << endl;
// }

// void Employee::save() {
//     ofstream fout;
//     fout.open(filename,ios::app|ios::binary);
//     fout.write((char*)this,sizeof(*this));
//     fout.close();
// }

// void Employee::readAllemployee() {
//     Employee emp;
//     ifstream fin;
//     fin.open(filename,ios::in | ios::binary);

//     if(!fin) {
//         cout << "File not found\n";
//     } else {
//         while(fin.read((char*)&emp,sizeof(emp))) {
//             emp.showEmployee();
//        }
//         fin.close();
//     }
// }
// int main() {
//     Employee E;
//     int n;

//     cout << "Enter number of Employee: ";
//     cin >> n;

//     for(int i=0; i<n; i++) {
//         cout <<"\nEmployee: " << i+1 <<":\n";
//         E.input();
//         E.save();
//     }

//     cout << "\nAll Employee Record:\n";
//     Employee::readAllemployee();

//     return 0;
// }

// 4. In question 3, define a member function to store new employee record in a file.     // 76 Program

// class Employee {
// private:
//     int empid;
//     char name[50];
//     float salary;
//     static constexpr const char* filename = "Employee.dat";
// public:
//     Employee();
//     void input();          
//     void showEmployee();   
//     void save();          // Store New Employee in file  
// };

// Employee::Employee() {
//     empid = 0;
//     strcpy(name, "");
//     salary = 0.0f;
// }

// void Employee::input() {
//     char tempName[50];

//     cout << "Enter Employee ID: ";
//     cin >> empid;

//     cout << "Enter Name: ";
//     cin >> tempName;
//     strcpy(name, tempName);

//     cout << "Enter Salary: ";
//     cin >> salary;
// }

// void Employee::showEmployee() {
//     cout << empid << " " << name << " " << salary << endl;
// }

// void Employee::save() {
//     ofstream fout;
//     fout.open(filename, ios::app | ios::binary);
//     fout.write((char*)this, sizeof(*this));
//     fout.close();
// }

// int main() {
//     Employee e;

//     cout << "Enter NEW Employee Details\n";
//     e.input();   // New Employee input
//     e.save();    // store new Employee infile

//     cout << "\nNew Employee record stored successfully.\n";
//     return 0;
// }

// 5. In question 3, define a member function to print all employee records stored in a file.    // 77 Program

// class Employee {
// private:
//     int empid;
//     char name[50];
//     float salary;
//     static constexpr const char* filename = "Employee.dat";
// public:
//     Employee();
//     void input();
//     void showEmployee();
//     void save();
//     static void printAll();   // member function to print all records
// };

// Employee::Employee() {
//     empid = 0;
//     strcpy(name, "");
//     salary = 0.0;
// }

// void Employee::input() {
//     char tempName[50];

//     cout << "Enter Emp ID: ";
//     cin >> empid;

//     cout << "Enter Name: ";
//     cin >> tempName;
//     strcpy(name, tempName);

//     cout << "Enter Salary: ";
//     cin >> salary;
// }

// void Employee::showEmployee() {
//     cout << empid << " " << name << " " << salary << endl;
// }

// void Employee::save() {
//     ofstream fout(filename, ios::app | ios::binary);
//     fout.write((char*)this, sizeof(*this));
//     fout.close();
// }

// void Employee::printAll() {
//     Employee emp;
//     ifstream fin(filename, ios::in | ios::binary);

//     if (!fin) {
//         cout << "File not found\n";
//         return;
//     }

//     while (fin.read((char*)&emp, sizeof(emp))) {
//         emp.showEmployee();
//     }

//     fin.close();
// }

// int main() {
//     cout << "All Employee Records:\n";
//     Employee::printAll();
//     return 0;
// }

// 6. In question 3, define a member function to search an employee by his empid in a file.   / 78 Program
//    Print his record if found, otherwise display a message of search failed.

// class Employee {
// private:
//     int empid;
//     char name[50];
//     float salary;
//     static constexpr const char* filename = "Employee.dat";
// public:
//     Employee();
//     void input();
//     void showEmployee();
//     void save();
//     static void searchByid(int);   // member function to search
// };

// Employee::Employee() {
//     empid = 0;
//     strcpy(name, "");
//     salary = 0.0;
// }

// void Employee::input() {
//     char tempName[50];

//     cout << "Enter Emp ID: ";
//     cin >> empid;

//     cout << "Enter Name: ";
//     cin >> tempName;
//     strcpy(name, tempName);

//     cout << "Enter Salary: ";
//     cin >> salary;
// }

// void Employee::showEmployee() {
//     cout << empid << " " << name << " " << salary << endl;
// }

// void Employee::save() {
//     ofstream fout(filename, ios::app | ios::binary);
//     fout.write((char*)this, sizeof(*this));
//     fout.close();
// }

// void Employee::searchByid(int id) {
//     Employee emp;
//     ifstream fin(filename, ios::in | ios::binary);
//     bool found = false;

//     if (!fin) {
//         cout << "File not found\n";
//         return;
//     }

//     while (fin.read((char*)&emp, sizeof(emp))) {
//         if (emp.empid == id) {
//             cout << "\nEmployee Found:\n";
//             emp.showEmployee();
//             found = true;
//             break;
//         }
//     }

//     fin.close();

//     if (!found) {
//         cout << "\nSearch failed: Employee not found\n";
//     }
// }

// int main() {
//     int searchId;

//     cout << "Enter Emp ID to search: ";
//     cin >> searchId;

//     Employee::searchByid(searchId);
//     return 0;
// }

// 7. In question 3, define a member function to edit employee data of given empid.   //  79 Program

// class Employee {
// private:
//     int empid;
//     char name[50];
//     float salary;
//     static constexpr const char* filename = "Employee.dat";
// public:
//     Employee();
//     void input();
//     void showEmployee();
//     void save();
//     static void editById(int);
// };

// Employee::Employee() {
//     empid = 0;
//     strcpy(name, "");
//     salary = 0.0;
// }

// void Employee::input() {
//     char tempName[50];

//     cout << "Enter Emp ID: ";
//     cin >> empid;

//     cout << "Enter Name: ";
//     cin >> tempName;
//     strcpy(name, tempName);

//     cout << "Enter Salary: ";
//     cin >> salary;
// }

// void Employee::showEmployee() {
//     cout << empid << " " << name << " " << salary << endl;
// }

// void Employee::save() {
//     ofstream fout(filename, ios::app | ios::binary);
//     fout.write((char*)this, sizeof(*this));
//     fout.close();
// }

// void Employee::editById(int id) {
//     Employee emp;
//     fstream file(filename, ios::in | ios::out | ios::binary);
//     bool found = false;

//     if (!file) {
//         cout << "File not found\n";
//         return;
//     }

//     while (file.read((char*)&emp, sizeof(emp))) {
//         if (emp.empid == id) {

//             cout << "\nExisting Record:\n";
//             emp.showEmployee();

//             int pos = (int) file.tellg();

//             cout << "\nEnter New Details:\n";
//             emp.input();
//             file.seekp(pos - sizeof(emp), ios::beg);
//             file.write((char*)&emp, sizeof(emp));

//             cout << "\nEmployee record updated successfully.\n";
//             found = true;
//             break;
//         }
//     }

//     file.close();

//     if (!found) {
//         cout << "\nEdit failed: Employee not found\n";
//     }
// }

// int main() {
//     int id;

//     cout << "Enter Emp ID to edit: ";
//     cin >> id;
//     Employee::editById(id);
//     return 0;
// }
