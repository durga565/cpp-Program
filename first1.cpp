#include <iostream>
#include <string.h>
using namespace std;

//                         Ass ------------------ 8 ( Classes and Obejects )
//                        ---------------------------------------------------

// 1. Define a class complex to represent a complex number . Declare member variable to store real and
//    imaginary part of a complex number, also define instance member function to set values of complex number and print values of complex number.   //   21 Program

//  class Complex{
//     private:
//      int a,b;
//     public:
//      void setdata(int x,int y) {
//         a=x;
//         b=y;
//      }
//       void showdata(int x,int y) {
//         cout << " Real =" << a << " Imagunary = " << b << endl;
//       }
//  };

//   int main() {
//      Complex c1;

//      c1.setdata(10,30);

//      c1.showdata(0,0);

//      return 0;
//   }

// 2. Define a class time to present time ( like 3 hr 45 minutes 20 sec ). Declare appropriate number of instance member variable and also define instance member functions to set         //   22 Program
//    values for time and display values of time.

// class Time {
// private:
//     int hours;
//     int minutes;
//     int seconds;

// public:
//     void setTime(int h, int m, int s) {
//         hours = h;
//         minutes = m;
//         seconds = s;
//     }

//     void displayTime() {
//         cout << hours << " hr "
//              << minutes << " min "
//              << seconds << " sec";
//     }
// };

// int main() {
//     Time t1;
//     int h, m, s;
//     cout << "Enter hours: ";
//     cin >> h;

//     cout << "Enter minutes: ";
//     cin >> m;

//     cout << "Enter seconds: ";
//     cin >> s;

//     t1.setTime(h, m, s);

//     cout << "\nTime is: ";
//     t1.displayTime();

//     return 0;
// }

// 3. Define a class date to represent date ( like d=31, m-12, y=2022 ). Declare appropriate number of instance member variable and aldo define instance member functions to set date and get date.   //   23 Program

// class Date {
// private:
//     int d, m, y;

// public:
//     void setData(int x, int y1, int z) {
//         d = x;
//         m = y1;
//         y = z;
//     }

//     const char* getMonthName() {
//         switch (m) {
//             case 1: return "January";
//             case 2: return "February";
//             case 3: return "March";
//             case 4: return "April";
//             case 5: return "May";
//             case 6: return "June";
//             case 7: return "July";
//             case 8: return "August";
//             case 9: return "September";
//             case 10: return "October";
//             case 11: return "November";
//             case 12: return "December";
//         }
//         return "Invalid";
//     }

//     void showData(int format = 1) {
//     if (format == 1) {
//         cout << endl << d << "/" << m << "/" << y;
//     }
//     else if (format == 2) {
//         cout << endl << "d=" << d << " " <<"m" << "-" << m << " "  << "y" << y;
//     }
//     else if (format == 3) {
//         cout << endl << "d=" << d << " " << "m" << "-" << getMonthName() << " " << "y=" << y;
//     }
//     else {
//         cout << "\nInvalid format! ";
//         return;
//        }
//     }

// };

// int main() {
//     Date d1;
//     int d, m, y;

//     do {
//         cout << "Enter day: ";
//         cin >> d;

//         if (d < 1 || d > 31) {
//             cout << "Invalid day! Please enter valid day\n";
//         }

//     } while (d < 1 || d > 31);

//     cout << "Enter month: ";
//     cin >> m;

//     cout << "Enter year: ";
//     cin >> y;

//     d1.setData(d, m, y);
//     d1.showData(3);

//     return 0;
// }

// 4. In question 3. Define a methods to display date in the following pattern.
// i. 31-12-2022.
// ii. 31-Dec-2022.                                                                                          // 24 Program

// class Date {
// private:
//     int day, month, year;

// public:
//     void setDate(int d, int m, int y) {
//         day = d;
//         month = m;
//         year = y;
//     }

//     void displayNumeric() {
//         cout << day << "-" << month << "-" << year << endl;
//     }

//     void displayWithMonthName() {
//         string monthName;

//         switch (month) {
//         case 1:
//             monthName = "Jan";
//             break;
//         case 2:
//             monthName = "Feb";
//             break;
//         case 3:
//             monthName = "Mar";
//             break;
//         case 4:
//             monthName = "Apr";
//             break;
//         case 5:
//             monthName = "May";
//             break;
//         case 6:
//             monthName = "Jun";
//             break;
//         case 7:
//             monthName = "Jul";
//             break;
//         case 8:
//             monthName = "Aug";
//             break;
//         case 9:
//             monthName = "Sep";
//             break;
//         case 10:
//             monthName = "Oct";
//             break;
//         case 11:
//             monthName = "Nov";
//             break;
//         case 12:
//             monthName = "Dec";
//             break;
//         default:
//             monthName = "Invalid";
//         }

//         cout << day << "-" << monthName << "-" << year << endl;
//     }
// };

// int main() {
//     Date d;

//     int day, month, year;

//     cout << "Enter day: ";
//     cin >> day;

//     cout << "Enter month: ";
//     cin >> month;

//     cout << "Enter year: ";
//     cin >> year;

//     d.setDate(day, month, year);

//     cout << "\nFormat 1: ";
//     d.displayNumeric();

//     cout << "Format 2: ";
//     d.displayWithMonthName();

//     return 0;
// }

// 5. Define a clas circle with radius as its property provide setRadius() and getRadius() methods,
// Also define methods to return area and circumference of circle.                                           // 25 Program

// class circle {
// private:
//     int radius;
// public:
//     void setRadius(int r) {
//        radius = r;
//     }

//     float getRadius() {
//         return 3.14 * radius * radius;
//     }

//     float getCircumference() {
//         return 2 * 3.14 * radius;
//     }

// };

//  int main() {
//      circle c;
//      int r;

//      cout << "Enter area: ";
//      cin >> r;

//      c.setRadius(r);

//      cout << "Area of circle is: " << c.getRadius() << endl;
//      cout << "Circumference of circle is: " << c.getCircumference() << endl;

//      return 0;
//  }

//                      Ass ----------------- 9 ( Member function )
//                     --------------------------------------------

// 1. Define a class complex to represent a complex number with instance variable a and b to store real and imaginary parts. Also define following member functions     //   26 Program

// i. Void setData(int,int)

// ii. Void showData()

// iii. Complex add(complex)

// iv. Complex subtract(complex)

// v. Complex multiply(Complex)

// class Complex {
// private:
//     int a, b;

// public:
//     void setData(int x, int y) {
//         a = x;
//         b = y;
//     }

//     void showData() {
//         cout << "a = " << a << " and b = " << b << endl;
//     }

//     Complex add(Complex c) {
//         Complex temp;
//         temp.a = a + c.a;
//         temp.b = b + c.b;
//         return temp;
//     }

//     Complex subtract(Complex c) {
//         Complex temp;
//         temp.a = a - c.a;
//         temp.b = b - c.b;
//         return temp;
//     }

//     Complex multiply(Complex c) {
//         Complex temp;
//         temp.a = a * c.a - b * c.b;
//         temp.b = a * c.b + b * c.a;
//         return temp;
//     }
// };

// int main() {
//     Complex c1, c2, result;
//     int real, imag;

//     cout << "Enter real and imaginary parts of first complex number: ";
//     cin >> real >> imag;
//     c1.setData(real, imag);

//     cout << "Enter real and imaginary parts of second complex number: ";
//     cin >> real >> imag;
//     c2.setData(real, imag);

//     cout << "\nFirst Complex Number: ";
//     c1.showData();

//     cout << "Second Complex Number: ";
//     c2.showData();

//     result = c1.add(c2);
//     cout << "\nAddition Result: ";
//     result.showData();

//     result = c1.subtract(c2);
//     cout << "Subtraction Result: ";
//     result.showData();

//     result = c1.multiply(c2);
//     cout << "Multiplication Result: ";
//     result.showData();

//     return 0;
// }

// 2. Define a class time to represent a time with instance variable h,m and s to store hour, minute and secrete also define member functions         //     27 Program

// i. void setTime(int,int,int)

// ii. void showTime()

// iii. void normalize()

// iv. Time add(Time)

// v. bools is _greater(Time)

// class Time {
//     int h, m, s;

// public:
//     void setTime() {
//         cout << "Enter hours: ";
//         cin >> h;

//         cout << "Enter minutes: ";
//         cin >> m;

//         cout << "Enter seconds: ";
//         cin >> s;
//         normalize();
//     }

//     void showTime() {
//         cout << h << " hr " << m << " min " << s << " sec" << endl;
//     }

//     void normalize() {
//         if (s >= 60) {
//             m += s / 60;
//             s = s % 60;
//         }
//         if (m >= 60) {
//             h += m / 60;
//             m = m % 60;
//         }
//     }

//     Time add(Time t) {
//         Time temp;
//         temp.h = h + t.h;
//         temp.m = m + t.m;
//         temp.s = s + t.s;
//         temp.normalize();
//         return temp;
//     }

//     bool is_greater(Time t) {
//         if (h > t.h) return true;
//         else if (h == t.h && m > t.m) return true;
//         else if (h == t.h && m == t.m && s > t.s) return true;
//         else return false;
//     }
// };

// int main() {
//     Time t1, t2, t3;

//     cout << "Enter first time:\n";
//     t1.setTime();

//     cout << "\nEnter second time:\n";
//     t2.setTime();

//     cout << "\nTime 1: ";
//     t1.showTime();
//     cout << "Time 2: ";
//     t2.showTime();

//     t3 = t1.add(t2);
//     cout << "\nAdded Time: ";
//     t3.showTime();

//     if (t1.is_greater(t2))
//         cout << "\nTime 1 is greater than Time 2\n";
//     else
//         cout << "\nTime 2 is greater than or equal to Time 1\n";

//     return 0;
// }

// 3. Defina a class TestResult with properties roll_no, right, wrong, net_score also define class properties right_weightage, wrong_weightage.           //      28 Program
//    Provide methods to setand get all the properties.

// class TestResult {
//     int roll_no, right, wrong;
//     float net_score;

//     static float right_weightage;
//     static float wrong_weightage;
// public:
//     static void setWeightage(float rw, float ww) {
//         right_weightage = rw;
//         wrong_weightage = ww;
//     }

//     void setData(int r, int right_ans, int wrong_ans) {
//         roll_no = r;
//         right = right_ans;
//         wrong = wrong_ans;
//         calculateNetScore();
//     }

//     void calculateNetScore() {
//         net_score = (right * right_weightage) - (wrong * wrong_weightage);
//     }

//     void showData() {
//         cout << "\nRoll No: " << roll_no;
//         cout << "\nRight Answers: " << right;
//         cout << "\nWrong Answers: " << wrong;
//         cout << "\nNet Score: " << net_score << endl;
//     }

//     int getRollNo() { return roll_no; }
//     int getRight() { return right; }
//     int getWrong() { return wrong; }
//     float getNetScore() { return net_score; }
//     static float getRightWeightage() { return right_weightage; }
//     static float getWrongWeightage() { return wrong_weightage; }
// };

// float TestResult::right_weightage = 0;
// float TestResult::wrong_weightage = 0;

// int main() {
//     int roll, right, wrong;
//     float rw, ww;

//     cout << "Enter marks per right answer: ";
//     cin >> rw;
//     cout << "Enter penalty per wrong answer: ";
//     cin >> ww;

//     TestResult::setWeightage(rw, ww);

//     TestResult t1;

//     cout << "\nEnter Roll Number: ";
//     cin >> roll;
//     cout << "Enter number of right answers: ";
//     cin >> right;
//     cout << "Enter number of wrong answers: ";
//     cin >> wrong;

//     t1.setData(roll, right, wrong);
//     t1.showData();

//     return 0;
// }

// 4. Write a driver function main() to use TestResult class (Question 3) create an array to 5 TestResult objects, set values to all the objects and display the resultin sortedorder (by net_score).       //      29 Program

// class TestResult {
//     int roll_no,right,wrong;
//     float net_score;

//     static float right_weightage;
//     static float wrong_weightage;

// public:
//       static void setweightage(float rw,float ww) {
//           right_weightage = rw;
//           wrong_weightage = ww;
//      }

// void setData(int r,int right_ans,int wrong_ans) {
//           roll_no = r;
//           right = right_ans;
//           wrong = wrong_ans;
//           calculateNetscore();
//     }
// void calculateNetscore() {
//     net_score = (right * right_weightage) - (wrong * wrong_weightage);
//     }

//     void showData() {
//         cout << "\nRollno no: " << roll_no;
//         cout << "\nRight answers: " << right;
//         cout << "\nWrong answers: " << wrong;
//         cout << "\nNet score is : " << net_score << endl;
//     }

//     float getNetscore() {
//         return net_score;
//     }

//     int gerRollNo() {
//         return roll_no;
//     }
// };

// float TestResult :: right_weightage =0;
// float TestResult :: wrong_weightage = 0;

// int main() {
//     TestResult students[5];
//     float rw,ww;
//     int roll,right,wrong;

//     cout << "Enter marks per right answers: ";
//     cin >> rw;

//     cout << "Enter penalty per wrong marks: ";
//     cin >> ww;

//     TestResult :: setweightage(rw,ww);

//     cout << "\n--- Enter data for 5 students ---\n";
//     for(int i=0; i<5; i++) {
//         cout <<"\nStudent " << (i+1) <<":\n";
//         cout << "Enter rolll numbers: ";
//         cin >> roll;

//         cout << "Enter number of right answers: ";
//         cin >> right;

//         cout << "Enter numbers of wrong answers: ";
//         cin >> wrong;

//         students[i].setData(roll,right,wrong);
//     }

//     for(int i=0; i<5-1; i++) {
//         for(int j=0; j<5-1; j++) {
//             if(students[j].getNetscore() < students[j+1].getNetscore()) {
//                 TestResult temp = students[j];
//                 students[j] = students[j+1];
//                 students[j+1] = temp;

//             }
//         }
//     }

//     cout << "\n---- Result in Descending order (by Net score)---- \n";
//     for(int i=0; i<5; i++) {
//         cout << "\nRank: " << (i+1) << ": ";
//         students[i].showData();
//     }

//      return 0;
// }

// 5. Define a class metrix to represent a 3x3 order matrix peovid appropriate maethodsand properties to the class also define following methods in the class.         //     30 program

// i. Matrix add(Matrix)

// ii. Matrix sub(Matrix)

// iii. Matrix multiply(Matrix)

// iv. Matrix transpose()

// // v. bool is_singular()

// class Matrix {
//      int metr[3][3];

// public:
//       void input() {
//           cout << "Ennter elements of 3x3 matris:\n";
//           for(int i=0; i<3; i++) {
//             for(int j=0; j<3; j++) {
//                 cin >> metr[i][j];
//               }
//           }
//       }

//       void display() {
//          for(int i=0; i<3; i++) {
//             for(int j=0; j<3; j++) {
//                 cout << metr[i][j] << "\t";
//             }
//              cout << endl;
//          }
//       }

//       Matrix add(Matrix m) {
//           Matrix temp;
//           for(int i=0; i<3; i++) {
//             for(int j=0; j<3; j++) {
//                 temp.metr[i][j] = metr[i][j] + m.metr[i][j];
//             }
//           }
//            return temp;
//       }

//       Matrix sub(Matrix m) {
//         Matrix temp;
//           for(int i=0; i<3; i++) {
//              for(int j=0; j<3; j++) {
//                 temp.metr[i][j] = metr[i][j] - m.metr[i][j];
//              }
//           }
//            return temp;
//       }

//       Matrix multiply(Matrix m) {
//          Matrix temp;
//          for(int i=0; i<3; i++) {
//             for(int j=0; j<3; j++) {
//                 temp.metr[i][j]=0;
//                 for(int k=0; k<3; k++) {
//                     temp.metr[i][j] += metr[i][k] * m.metr[k][j];
//                 }
//             }
//          }
//           return temp;
//       }

//       Matrix transpose() {
//         Matrix temp;
//         for(int i=0; i<3; i++) {
//             for(int j=0; j<3; j++) {
//                 temp.metr[i][j] = metr[j][i];
//             }
//          }
//           return temp;
//       }

//       bool is_singular() {
//         int det = metr[0][0] * (metr[1][1]*metr[2][2] - metr[1][2]*metr[2][1])
//                 - metr[0][1] * (metr[1][0]*metr[2][2] - metr[1][2]*metr[2][0])
//                 + metr[0][2] * (metr[1][0]*metr[2][1] - metr[1][1]*metr[2][0]);
//         return (det == 0);
//     }

// };

// int main() {
//     Matrix m1,m2, results;

//     cout << "Enter elements of first matrix: ";
//     m1.input();

//     cout << "Enter elements of the second matrix: ";
//     m2.input();

//     cout << "\nMatrix 1:\n";
//     m1.display();
//     cout << "\nMatrix 2:\n";
//     m2.display();

//     cout << "\nMatrix Addition:\n";
//     results = m1.add(m2);
//     results.display();

//     cout << "\nMatrix Subtraction:\n";
//     results = m1.sub(m2);
//     results.display();

//     cout << "\nMatrix multiplication:\n";
//     results = m1.multiply(m2);
//     results.display();

//     cout << "\nTranspose of matrix 1:\n";
//     results = m1.transpose();
//     results.display();

//     if(m1.is_singular()) {
//         cout <<"\nMatrix 1 is Singular\n";
//     } else
//         cout << "\nMatrix 1 is Not Singular\n";

//         return 0;

// }

//                           Ass ------------ 10 ( Constructer )
//                          ------------------------------------

// 1. Define a class cuboid with lenght, breadth and height as instance member variable. Define constructor to intialise number variable.       //    31  Program

// class Cuboid {
// private:
//     float length;
//     float breadth;
//     float height;

// public:
//     Cuboid(float l, float b, float h) {
//         length = l;
//         breadth = b;
//         height = h;
//     }

//     void display() {
//         cout << "Length: " << length << endl;
//         cout << "Breadth: " << breadth << endl;
//         cout << "Height: " << height << endl;
//     }

//     float volume() {
//         return length * breadth * height;
//     }
// };

// int main() {
//     float l, b, h;

//     cout << "Enter the length of cuboid: ";
//     cin >> l;

//     cout << "Enter the breadth of cuboid: ";
//     cin >> b;

//     cout << "Enter the height of cuboid: ";
//     cin >> h;

//     Cuboid c1(l, b, h);

//     cout << "\nCuboid Details:" << endl;
//     c1.display();

//     cout << "Volume of Cuboid: " << c1.volume() << endl;

//     return 0;
// }

// 2. Define a class customer with instance member cust_id, name, email, mobile. Define non parameterised constructor and parameterised constructor in the class.     //     32  Program

// class Customer {

//   private:
//     int cust_id;
//     string name,email,mobile;
//   public:
//     Customer() {
//         cust_id = 0;
//         name = "Not provided";
//         email = "Not provided";
//         mobile = "Not provided";
//     }

//   Customer(int id, string n, string e, string m) {
//             cust_id = id;
//             name = n;
//             email = e;
//             mobile = m;
//      }

//   void display() {
//         cout << "\nCustomer Details:\n";
//         cout << "----------------";
//         cout << "\nCustomer id =" << " " << cust_id << endl;
//         cout << "Name =" << " " << name << endl;
//         cout << "Email = " << email << endl;
//         cout << "Mobile =" << mobile << endl;
//      }
// };

// int main() {
//     Customer c1;

//     cout << "\nCustomer:1(Details):" << endl;
//     c1.display();

//     cout << "\nCustmoer:2(Details):\n" << endl;
//     int cust_id;
//     string name,email,mobile;

//     cout << "Enter Customer id: ";
//     cin >> cust_id;

//     cout << "Enter Name of the customer: ";
//     cin >> name;

//     cout << "Enter email: ";
//     cin >> email;

//     cout << "Enter mobile number: ";
//     cin >> mobile;

//     Customer c2(cust_id,name,email,mobile);

//     cout << "\nCustomer:2 (Details):\n";

//     c2.display();

//     return 0;

//  }

// 3. Define a class Time with hr,min,sec as instance member variable. Define constructor to intialise time object.     //   33  Program

// class Time {
//    private:
//          int hours,minute,second;
//    public:
//         Time(int hr,int min,int sec) {
//             hours = hr;
//             minute = min;
//             second = sec;
//         }

//         void showData() {
//               cout << endl << hours << " " << "hours" << " " << minute << " " << "minutes" << " " << second << " " << "second" << endl;
//         }
// };

// int main() {

//       int h,m,s;

//       cout << "Enter hours: ";
//       cin >> h;

//       cout << "Enter minutes: ";
//       cin >> m;

//       cout << "Enter second: ";
//       cin >> s;

//       Time t1(h,m,s);
//       t1.showData();

//       return 0;

// }

// 4. Define a class Book with booked. title and prices as instance member variables. Define non parameterised and parameterised constructor in the class.    //    34  Program

// class Book {
// private:
//       char title[20];
//       int price;
// public:
//       Book() {
//           strcpy(title,"No-title");
//           price = 200;
//       }
//        Book(char t1[],int p) {
//         strcpy(title, t1);
//         price = p;
//       }
// void showData() {
//         cout << "\nTitle: " <<title << endl;
//         cout << "Price: " << price << endl;
//       }
// };

// int main() {
//       Book c1;
//       c1.showData();

//       int p1;
//       char b1[20];

//       cout << "\nTitle of the Book: ";
//       cin >> b1;

//       cout << "Price of the book: ";
//       cin >> p1;

//       Book c2(b1,p1);
//       c2.showData();

//       return 0;
// }

// 5. Define a class complex with instance variables for real and imaginary part of a complex number. Define only one parameterised in the class to intialise complex object. Also define showData method in the class to display objectdata.
//    Now create an array of complex class with size 5 and display values of eachobject.    //    35  Program

// class Complex {
// private:
//     int a, b;
// public:
//     Complex() {
//         a = 0;
//         b = 0;
//     }

//     void setData(int x, int y) {
//         a = x;
//         b = y;
//     }

//     void showData() {
//         cout << "a = " << a << " "
//              << "b = " << b << endl;
//     }
// };

// int main() {
//     Complex c[5];

//     cout << "Enter 5 complex numbers:\n";
//     for (int i = 0; i < 5; i++) {
//         int x, y;
//         cout << "Complex number " << i + 1 << ": ";
//         cin >> x >> y;
//         c[i].setData(x, y);
//     }

//     cout << "\nComplex numbers entered:\n";
//     for (int i = 0; i < 5; i++) {
//         cout << "Complex number " << i + 1 << ": ";
//         c[i].showData();
//     }

//     return 0;
// }
//                          Ass --------------- 11 ( Constructor )
//                         ----------------------------------------

// 1. Define a class Number with size and arr pointer as instance variable. Provide constructor to intialise instance members, dyanamically allocate an array of given size and store address in arr variable of objects.      //      36 Program
//    Also define destructor to deallocate memory of array. Implement deep copy using copy constructor to avoid memory issues.

// class Number {
// private:
//     int size;
//     int *arr;

// public:
//     // Parameterized constructor
//     Number(int s) {
//         size = s;
//         arr = new int[size];  // allocate memory
//         cout << "Constructor called: Memory allocated for " << size << " elements.\n";
//         for (int i = 0; i < size; i++) {
//             arr[i] = i + 1;  // initialize values
//         }
//     }

//     // Copy constructor (Deep copy)
//     Number(const Number &obj) {
//         size = obj.size;
//         arr = new int[size];  // allocate new memory
//         for (int i = 0; i < size; i++) {
//             arr[i] = obj.arr[i];  // copy values
//         }
//         cout << "Copy Constructor called (Deep Copy).\n";
//     }

//     // Display function
//     void display() {
//         for (int i = 0; i < size; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }

//     // Destructor
//     ~Number() {
//         delete[] arr;  // deallocate memory
//         cout << "Destructor called: Memory released.\n";
//     }
// };

// int main() {
//     Number n1(5);
//     cout << "n1 array: ";
//     n1.display();

//     Number n2 = n1;
//     cout << "n2 array after copy: ";
//     n2.display();

//     return 0;
// }

// 2. Define a class student and write a program to enter student details using constructor and define member function to display all the details.//   37 Program

// class Student {
//       private:
//              char name[20];
//              int roll_no;
//              int mark;
//       public:
//              Student() {
//                   strcpy(name,"");
//                   roll_no = 0;
//                   mark = 0;
//              }
//              Student(char n[], int r, int m) {
//                   strcpy(name, n);
//                   roll_no = r;
//                   mark = m;
//             }
//       void showData() {
//              cout << "Name: " << name << endl;
//              cout << "Roll No: " << roll_no << endl;
//              cout << "Mark: " << mark << endl;
//       }

// };

// int main() {
//       char n[20];
//       int r1,m1;

//       cout << "Enter name of the student: ";
//       cin >> n;

//       cout << "Enter roll no: ";
//       cin >> r1;

//       cout << "Enter marks: ";
//       cin >> m1;

//       Student s1(n, r1, m1);

//       cout << "\n---Student Details---\n";
//       s1.showData();

//       return 0;
// }

// 3. Define a class Date with d,m,y as instance variable. initialise member usning initialisers. //  38 Program

//  class Date {
//      private:
//             int d,m,y;
//      public:
//             Date(int day,int month,int year) : d(day), m(month), y(year){       //   using Initilisers

//             }

//     void showDate() {
//         cout << d << "/" << m << "/" << y << endl;
//     }
//  };

//  int main() {
//       int da,mo,ye;

//       cout << "Enter date: ";
//       cin >> da;

//       cout << "Enter month: ";
//       cin >> mo;

//       cout << "Enter year: ";
//       cin >> ye;

//       Date m(da,mo,ye);

//       m.showDate();

//       return 0;
//  }

// 4. Define a class Room for a hotel management project with room  number, room type, is_Ac, price as instance variable. Initialise instance variable using constructor.//   39 Program

// class Room {
// private:
//     int room_no;
//     char room_type[20];
//     bool is_Ac;
//     float price;

// public:

//     Room() {
//         room_no = 0;
//         strcpy(room_type, "");
//         is_Ac = false;
//         price = 0.0;
//     }

//     Room(int r_no, const char rt[], bool ac, float p)
//         : room_no(r_no), is_Ac(ac), price(p) {
//         strcpy(room_type, rt);
//     }

//     void showRoomData() {
//         cout << "\nRoom Details:\n";
//         cout << "Room No     : " << room_no << endl;
//         cout << "Room Type   : " << room_type << endl;
//         cout << "AC Available: " << (is_Ac ? "Yes" : "No") << endl;
//         cout << "Price       : " << price << endl;
//     }
// };

// int main() {
//     int r_no;
//     float price;
//     char room_type[20];
//     char ac_choice;
//     bool is_Ac;

//     cout << "Enter room number: ";
//     cin >> r_no;

//     cout << "Enter room type (Single/Double/Suite): ";
//     cin >> room_type;

//     cout << "Is the room AC? (y/n): ";
//     cin >> ac_choice;
//     is_Ac = (ac_choice == 'y' || ac_choice == 'Y');

//     cout << "Enter room price: ";
//     cin >> price;

//     Room r1(r_no, room_type, is_Ac, price);

//     r1.showRoomData();

//     return 0;
// }

// 5. Define circle class with radius as instance variable. Define two constructors in the class -non parameterised and parameterised.            //  40 Program

// class circle {
//       private:
//              int radius;
//              float p;
//       public:
//              circle() {
//                radius=0;
//                p=3.14;
//              }
//           circle(int r,float pi) : radius(r), p(pi) {

//           }
//         void setData() {
//             cout << "Enter radius: ";
//             cin >> radius;

//             cout << "Enter value of pi: ";
//             cin >> p;
//         }
//        void showData() {
//             cout << "Radius" << radius << endl;
//             cout << "Pi value" << p << endl;
//             cout << "Area: " << p * radius * radius << endl;
//             cout << "Circumference: " << 2 * p * radius << endl;
//        }
// };

// int main() {
//     circle c1;
//     cout << "Enter data for Circle 1:" << endl;
//     c1.setData();

//     int r;
//     float pi;
//     cout << "\nEnter data for Circle 2 (to use parameterized constructor):" << endl;
//     cout << "Enter radius: ";
//     cin >> r;
//     cout << "Enter value of pi: ";
//     cin >> pi;

//     circle c2(r, pi);

//     cout << "\n--- Circle 1 Details ---";
//     c1.showData();

//     cout << "\n--- Circle 2 Details ---";
//     c2.showData();

//     return 0;

// }
