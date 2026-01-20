#include <iostream>
#include<string.h>
using namespace std;


//                           Ass ---------- 15 (Operator overloading, friend operator)
//                          -------------------

// 1. Define a class complex and provide a unary friend operator - to neglate the real and imaginary part of a complex number.   //  55 Program

// class Complex {
//    int a;
//    int b;
   
// public:
//    Complex(int x = 0, int y = 0) {
//       a = x;
//       b = y;
//    }

//    friend Complex operator-(Complex c);

//    friend istream &operator>>(istream &in, Complex &c);
//    friend ostream &operator<<(ostream &out, const Complex &c);
// };

// Complex operator-(Complex c) {
//    Complex temp;
//    temp.a = -c.a;
//    temp.b = -c.b;
//    return temp;
// }

// istream &operator>>(istream &in, Complex &c) {
//    cout << "Enter real part: ";
//    in >> c.a;
//    cout << "Enter imaginary part: ";
//    in >> c.b;
//    return in;
// }

// ostream &operator<<(ostream &out, const Complex &c) {
//    out << c.a << " + " << c.b << "i";
//    return out;
// }

// int main() {
//    Complex c1, c2;

//    cin >> c1;
//    c2 = -c1;

//    cout << "\nOriginal complex number: " << c1;
//    cout << "\nAfter negation: " << c2 << endl;

//    return 0;
// }

// 2. Define a class integer with instance variable of type int , provide a friend logical operator not !. Also define a friend operator == to compare two integer objects.   //  56 Program

// class intiger {
//     int nt;
//     int eql;

// public:
//     intiger(int n=0, int e=0) {
//         nt = n;
//         eql = e;
//     }

//     friend intiger operator!(intiger n1);
//     friend intiger operator==(intiger m1, intiger m2);
    
//     friend istream &operator>>(istream &in, intiger &n1);
//     friend ostream &operator<<(ostream &out, const intiger &n1);
// };

// intiger operator!(intiger n1) {
//     intiger temp;
//     temp.nt = !(n1.nt);   
//     temp.eql = !(n1.eql);
//     return temp;
// }

// intiger operator==(intiger m1, intiger m2) {
//     intiger temp;
//     temp.nt = (m1.nt == m2.nt);   
//     temp.eql = (m1.eql == m2.eql);
//     return temp;
// }

// istream &operator>>(istream &in, intiger &n1) {
//     cout << "Enter nt and eql: ";
//     in >> n1.nt >> n1.eql;
//     return in;
// }

// ostream &operator<<(ostream &out, const intiger &n1) {
//     out << "nt = " << n1.nt << ", eql = " << n1.eql;
//     return out;
// }

// int main() {
//     intiger a, b, c;

//     cout << "Enter first object:\n";
//     cin >> a;

//     cout << "Enter second object:\n";
//     cin >> b;

//     cout << "\nYou entered:\n";
//     cout << "A: " << a << endl;
//     cout << "B: " << b << endl;

//     c = (a == b);
//     cout << "\nResult of A == B:\n" << c << endl;

//     c = !a;
//     cout << "\nAfter applying ! on A:\n" << c << endl;

//     return 0;
// }

// 3. Create a cordinate class with 2 instamce variable x and y. Overload comma operator such that when you write c3=(c1,c2) then c2 is assigned to c3. Where c1,c2 and c3 are objects of Cootdinate class.   // 57 Program

// class Cordinate {
//     private:
//             int x,y;
//     public:
//           Cordinate(int a=0,int b=0) {
//              x = a;
//              y = b;
//         }

//           void InputData() {
//              cout << "Enter X and Y: ";
//              cin >> x >> y;
//         }

//          void ShowData() {
//              cout << "x = " << x << ", y = " << y << endl;
//        }

//        Cordinate operator,(Cordinate &obj) {
//            return obj;
//        }
// };

// int main() {
//     Cordinate c1,c2,c3;

//     cout << "Enter value of c1: ";
//     c1.InputData();

//     cout <<"Enter value of c2: ";
//     c2.InputData();

//     cout <<"\nBefore operator: " << endl;
//     cout << "c1: ";
//     c1.ShowData();

//     cout <<"c2: ";
//     c2.ShowData();

//     cout <<"c3: ";
//     c3.ShowData();

//     c3 = (c1,c2);

//     cout << "\nAfter C3 = (c1,c2): " << endl;
//     cout << "c3: ";
//     c3.ShowData();

//     return 0;
// }

// 4. In question-3 . provide overloadinsertion and extraction operators.   //  58 Program

// class Cordinate {
//     private:
//          int x,y;
//     public:
//          Cordinate(int a=0, int b=0) {
//              x = a;
//              b = y;
//          }

//          Cordinate operator,(Cordinate &c) {
//               return c;
//          }

//          friend istream &operator >> (istream &in, Cordinate &c) {
//              cout << "Enter X: ";
//              in >> c.x;

//              cout << "Enter Y: ";
//              in >> c.y;
//              return in;
//          }

//          friend ostream &operator << (ostream &out, Cordinate &c) {
//              out << c.x << ", " << c.y;
//              return out;
//          }
// };

// int main() {
//     Cordinate c1,c2,c3;

//     cout << "Enter first cordinate(c1): ";
//     cin >> c1;

//     cout << "Enter second coridnate(c2): ";
//     cin >> c2;

//     c3 = (c1,c2);

//     cout << "\nAfter using c3=(c1,c2): " << endl;
//     cout << "c1 =" << c1 << endl;
//     cout << "c2 =" << c2 << endl;
//     cout << "c3 =" << c3 << endl;

//     return 0;
// }

// 5. Define a class student with roll no,name and age as instance variables. Create setStudent() and showStudent() methods in the class. overload operator == to compare two Student objects.   // 59 Program

// class Student {
//     private:
//       int roll_no;
//       int age;
//       string name;
//     public:
//       Student(int r=0, int ag=0, string nm="") {
//           r = roll_no;
//           age = ag;
//           name = nm;
//       }

//       void setStudent() {
//         cout << "Enter roll number: ";
//         cin >> roll_no;
        
//         cout << "Enter name: ";
//         cin >> name;

//         cout << "Enter age: ";
//         cin >> age;
//       }

//       void showStudent() {
//         cout << "Roll No: " << roll_no << endl;
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;

//       }

//       bool operator ==(Student &s) {
//         if(roll_no == s.roll_no && name == s.name && age == s.age)
//             return true;
//         else 
//             return false;
//       }
// };

// int main() {
//     Student s1,s2;

//     cout << "Enter details of Student 1:\n";
//     s1.setStudent();

//     cout << "Enter details of Student 2:\n";
//     s2.setStudent();

//     cout << "\nDetails of Student 1:\n";
//     s1.showStudent();

//     cout << "\nDetails of Student 2:\n";
//     s2.showStudent();

//     if(s1 == s2)
//       cout << "\nBoth students are Same.\n";
//     else
//       cout <<"\nBoth students are Different.\n";

//       return 0;
// }

//                         Ass ----------- 16 (Pointer,, this, DMA)
//                        -----------------------------------------

// 1. Define a class Persons with name and age as instance variable. Provide parameterised constructor with two arguments name & age to intialise instance variable.    //   60  Program

// class Persons {
// private:
//       string name;
//       int age;
// public:
//     Persons(string nm, int ag) {         // Parameterized constructor using 'this' pointer
//         this -> name = nm;
//         this -> age = ag;
//     }

//    void showPersons() {
//         cout << "Name: " << name << endl;
//         cout << "age: " << age << endl;
//    }

//   ~Persons() {
//        cout << "Memory freed for Persons object." << endl;
//    }

// };

// int main() {
//     Persons *p1 = new Persons("Durga Prasad Sahu",26);

//     p1 -> showPersons();

//     delete p1;

//     return 0;
// }


// 2. Define a class complex with instance variables a and b to store real and imaginary part of a complex number. Provide setdata() method with formal arguments with the name and a and b to Set the values of instance variable. Also define showData()
//    method to display instance member variable values.     //  61 Program

// class Complex {
//     private:
//        int a;
//        int b;
//     public:
//        Complex(int x=0, int y=0) {
//            this -> a = x;
//            this -> b = y;
//        }

//       void SetData(int x, int y) {
//           a = x;
//           b = y;
//       }

//      void ShowData() {
//          cout << "a = " << a << " " << "b = " << b << endl;
//      }

//     ~Complex() {
//         cout <<"Memory freed!";
//     }
// };

// int main() {
//     Complex *c1 = new Complex();

//     c1 -> SetData(3,4);
//     c1 -> ShowData();

//     delete c1;

//     return 0;

// }


//                         Ass ------------ 17 ( Pointer, this, DMA )
//                         ------------------------------------------

// 1. Define a class Time with instance variables hr, min and sec. Provide instance methods setTime() and showTime()
//    setTime() method has formal arguments with the same name as instance variables. Also define setters and getters.

// 2. In question-1, define a method to dynamically create an array of Time objects with specified size (received through argument) and return array.

// 3. In question-1, define a method to sort Time object array.

// 4. In question-1, define a method to display Time object array values. Array is received through argument.


// class Time {
// private:
//     int hr, min, sec;

// public:
//      void setTime(int hr, int min, int sec) {
//          min = min + sec / 60;
//          sec = sec % 60;

//          hr = hr + min / 60;
//          min = min % 60;

//          this->hr = hr;
//          this->min = min;
//          this->sec = sec;
//     }

//     void showTime() {
//         cout << this->hr << ":" << this->min << ":" << this->sec << endl;
//     }

//     void setHour(int hr) { this->hr = hr; }
//     void setMin(int min) { this->min = min; }
//     void setSec(int sec) { this->sec = sec; }

//     int getHour() { return this->hr; }
//     int getMin() { return this->min; }
//     int getSec() { return this->sec; }
// };

// Time* createArray(int size) {
//     Time* arr = new Time[size];
//     int h, m, s;

//     for (int i = 0; i < size; i++) {
//         cout << "Enter time " << i + 1 << " (hr min sec): ";
//         cin >> h >> m >> s;
//         arr[i].setTime(h, m, s);
//     }
//     return arr;
// }

// void displayArray(Time* arr, int size) {
//     for (int i = 0; i < size; i++) {
//         arr[i].showTime();
//     }
// }

// void sortArray(Time* arr, int size) {
//     Time temp;
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = i + 1; j < size; j++) {
//             // Compar hours first
//             if (arr[i].getHour() > arr[j].getHour())
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//             // If hours are equal
//             else if (arr[i].getHour() == arr[j].getHour()) {
//                 if (arr[i].getMin() > arr[j].getMin())
//                 {
//                     temp = arr[i];
//                     arr[i] = arr[j];
//                     arr[j] = temp;
//                 }
//                 // If minutes are  equal
//                 else if (arr[i].getMin() == arr[j].getMin()) {
//                     if (arr[i].getSec() > arr[j].getSec())
//                     {
//                         temp = arr[i];
//                         arr[i] = arr[j];
//                         arr[j] = temp;
//                     }
//                 }
//             }
//         }
//     }
// }

// int main() {
//     int n;
//     cout << "Enter number of Time objects: ";
//     cin >> n;

//     Time* arr = createArray(n);

//     sortArray(arr, n);

//     cout << "\nSorted Time Objects:\n";
//     displayArray(arr, n);

//     delete[] arr;
//     return 0;
// }


// 5. Define a class String with char pointer and length of the string as instance member variables.
//    Define a method to dynamically create an array of char type and hold the input string in such a way that the array length is just enough to accommodate the input string.

// class String {
//     private:
//           char *s;
//           int length;
//     public:
//             String() {
//               s = NULL;
//               length = 0;
//         }
//             void InputString() {
//                 char temp[1000];
//                 cin.getline(temp, 1000);

//                 length=strlen(temp);
//                 s=new char[length +1 ];

//                 strcpy(s,temp);
//             }

//             void PrintString() {
//                 cout << s << endl;
//             }

//             int getLength() {
//                 return length;
//             }

//             ~String() {
//                 delete[] s;
//             }

// };

// int main() {
//     String s1;

//     cout << "Enter String: ";
//     s1.InputString();

//     cout << "String Stored: " << " ";
//     s1.PrintString();

//     cout << "Length is: " << s1.getLength() << endl;

//     return 0;

// }

// 6. In question-5, define methods to convert string into uppercase and lowercase.

// class String {
//     private:
//         char *s;
//     public:
//         String() {
//             s=nullptr;
//         }

//         void InputString() {
//             char temp[1000];
//             cin >> temp;

//             delete []s;

//             int len=strlen(temp);
//             s=new char[len + 1];
//             strcpy(s,temp);
//         }

//         void Upper() {
//             if(!s) return ;
//             for(int i=0; s[i] != '\0'; i++) {
//                 if(s[i] >= 'a' && s[i] <= 'z') {
//                     s[i] = s[i] -32;
//                 }
//             }
//         }

//         void Lower() {
//             if(!s) return;
//             for(int i=0; s[i] != '\0'; i++) {
//                 if(s[i] >= 'A' && s[i] <= 'Z') {
//                     s[i] = s[i] + 32;
//                 }
//             }
//         }

//         void PrintString() {
//             if(s)
//             cout << s << endl;
//         }

//         ~String() {
//             delete[] s;
//         }
// };

// int main() {
//     String s1;

//     cout << "Enter String: ";
//     s1.InputString();

//     s1.Upper();
//     cout << "Uppercase: ";
//     s1.PrintString();

//     s1.Lower();
//     cout << "Lowercase: ";
//     s1.PrintString();

//     return 0;
// }

// 7. In question-5, define methods to print string, return string, and return length of string.

// class String {
//     char *str;
//     int length;

// public:
//     void create() {
//         char temp[100];
//         cout << "Enter string: ";
//         cin.getline(temp, 100);

//         length = strlen(temp);
//         str = new char[length + 1];
//         strcpy(str, temp);
//     }

//     void print() {
//         cout << "String: " << str << endl;
//     }

//     char* getString() {
//         return str;
//     }

//     int getLength() {
//         return length;
//     }

//     ~String() {
//         delete[] str;
//     }
// };

// int main() {
//     String s;
//     s.create();
//     s.print();

//     cout << "Returned String: " << s.getString() << endl;
//     cout << "Length of String: " << s.getLength() << endl;

//     return 0;
// }


