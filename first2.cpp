#include<iostream>
using namespace std;

//                        Ass ---------- 12 ( Operator Overloading )
//                       --------------------------------------------

// 1. Deifne a class complex with appropriate instance variable and member functions.                          //  41 Program
//    Define following class
// i.      +
// ii.     -
// iii.    *
// iv .    ==

// class Complex {
//        private:
//            int a,b;
//        public:
//            void setData() {
//                  cout << "Enter real part: ";
//                  cin >> a;

//                  cout << "Enter imaginary part: ";
//                  cin >> b;
//            }
          
//            void showData() {
//                cout << "a =" << a  << " "<< "b =" << b << endl;
//            }

//            Complex operator+(Complex c) {
//               Complex temp;
//               temp.a = a + c.a;
//               temp.b = b + c.b;
//               return temp;
//            }

//            Complex operator-(Complex c) {
//                Complex temp;
//                temp.a = a - c.a;
//                temp.b = b - c.b;
//                return temp;
//            }

//            Complex operator*(Complex c) {
//                 Complex temp;
//                 temp.a = (a * c.a) - (b * c.b);
//                 temp.b = (a * c.b) - (b * c.a);
//                 return temp;
//            }

//            bool operator==(Complex c) {
//                 return(a == c.a && b == c.b);
//            }
            
// };

// int main() {
//     Complex c1, c2, c3;

//     cout << "\nEnter first complex number:  ";
//     c1.setData();

//     cout << "\nEnter second complex number:\n ";
//     c2.setData();

//     cout << "\nFirst complex number: ";
//     c1.showData();

//     cout << "\nSecond complex number: ";
//     c2.showData();

//     c3 = c1 + c2;
//     cout << "\nAddition: ";
//     c3.showData();

//     c3 = c1 - c2;
//     cout << "Subtraction: ";
//     c3.showData();

//     c3 = c1 * c2;
//     cout << "Multiplication: ";
//     c3.showData();

//     if (c1 == c2)
//         cout << "Complex numbers are equal." << endl;
//     else
//         cout << "Complex numbers are not equal." << endl;

//     return 0;
// }

// 2. Create a class Time which contains hour, min and second as fields overload greater than ( > ) operator to compare two time objects.      // 42 program

// class Time {
//      private:
//            int hour,minute,second;
//      public:
//            Time(int hr = 0,int min = 0,int sec = 0) {
//                 hour = hr;
//                 minute = min;
//                 second = sec;
//            }
    
//      void setTime() {
//              cout << "Enter hour: ";
//              cin >> hour;

//              cout << "Enter minute: ";
//              cin >> minute;

//              cout << "Enter second: ";
//              cin >> second;
//           }

//      void showTime() {
//              cout << hour << " : " << minute << " : " << second << endl;
//          }

//      bool operator>(Time t) {
//            if(hour > t.hour)
//                 return true;
//             else if(hour == t.hour && minute > t.minute)
//                 return true;
//             else if(hour == t.hour && minute == t.minute && second > t.second)
//                 return true;
//             else
//                return false;
//      }
     
// };

// int main() {
//      Time t1,t2;

//      cout << "Enter first time:\n";
//      t1.setTime();

//      cout << "\nEnter second time:\n";
//      t2.setTime();

//      cout << "\nFirst time: ";
//      t1.showTime();

//      cout << "Second time: ";
//      t2.showTime();

//      if(t1 > t2)
//          cout << "\nFirst time is greater than second time.\n";
//      else
//          cout << "\nSecond time is greater than or eaual to first time.\n";

//           return 0;
// }

// 3. In Question-2, overload pre-increment and post increment operator to increment Time object value by one second.                   / 43 Program

// class Time {
//     int hour, min, sec;

// public:
//     Time(int h = 0, int m = 0, int s = 0) {
//         hour = h;
//         min = m;
//         sec = s;
//         normalize();
//     }

//     void input() {
//         cout << "Enter time (hour minute second): ";
//         cin >> hour >> min >> sec;
//         normalize();
//     }

//     void display() const {
//         cout << hour << " hr : " << min << " min : " << sec << " sec" << endl;
//     }

//     void normalize() {
//         if (sec >= 60) {
//             min += sec / 60;
//             sec = sec % 60;
//         }
//         if (min >= 60) {
//             hour += min / 60;
//             min = min % 60;
//         }
//         if (hour >= 24)
//             hour = hour % 24;
//     }

//     Time& operator++() {
//         sec++;
//         normalize();
//         return *this;
//     }

//     Time operator++(int) {
//         Time temp = *this;
//         sec++;
//         normalize();
//         return temp;
//     }
// };

// int main() {
//     Time t1;

//     cout << "Enter Time Details:\n";
//     t1.input();

//     cout << "\nOriginal Time: ";
//     t1.display();

//     ++t1;                                        // Pre-increment
//     cout << "After Pre-Increment (++t1): ";
//     t1.display();

//     t1++;                                        // Post-increment
//     cout << "After Post-Increment (t1++): ";
//     t1.display();

//     return 0;
// }

// 4. In Question-2, overloaded operator + to add two Times objects.                                                                // 44 Program

// class Time {
//     int hour, min, sec;

// public:
//     Time(int h = 0, int m = 0, int s = 0) {
//         hour = h;
//         min  = m;
//         sec  = s;
//         normalize();
//     }

//     void input() {
//         cout << "Enter time (hour minute second): ";
//         cin >> hour >> min >> sec;
//         normalize();
//     }

//     void display() const {
//         cout << hour << " hr : " << min << " min : " << sec << " sec";
//     }

//     void normalize() {
//         if (sec >= 60) {
//             min += sec / 60;
//             sec  = sec % 60;
//         }
//         if (min >= 60) {
//             hour += min / 60;
//             min   = min % 60;
//         }
        
//     }
                               
//     Time operator+(const Time &t) const {                      //  Overload + operator to add two Time objects   
//         Time temp; 
//         temp.sec  = sec  + t.sec;
//         temp.min  = min  + t.min;
//         temp.hour = hour + t.hour;
//         temp.normalize();
//         return temp;
//     }
// };

// int main() {
//     Time t1, t2, t3;

//     cout << "Enter first time:\n";
//     t1.input();

//     cout << "Enter second time:\n";
//     t2.input();

//     cout << "\nFirst Time: ";
//     t1.display();
//     cout << "\nSecond Time: ";
//     t2.display();

//     t3 = t1 + t2;                               // using overloaded + operator

//     cout << "\n\nSum of two times (t1 + t2): ";
//     t3.display();
//     cout << endl;

//     return 0;
// }

// 5. Define a class matrix to represent 3x3 matrix. Provide appropriate instance methods, also define operator +,                      // 45 program
//    - operator, operator * to perform addition subtraction and multiplication operation respectively.

// class Matrix {
//     int A[3][3];
// public:
//     void setData() {
//         cout << "Enter 9 elements of 3x3 matrix:\n";
//         for (int i=0; i<3; i++) {
//             for (int j=0; j<3; j++) {
//                 cin >> A[i][j];
//             }
//         }
//     }

//     void display() const {
//         for (int i=0; i<3; i++) {
//             for (int j=0; j<3; j++) {
//                 cout << A[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }

//     Matrix operator+(const Matrix &M) const {
//         Matrix temp;
//         for (int i=0; i<3; i++) {
//             for (int j=0; j<3; j++) {
//                 temp.A[i][j] = A[i][j] + M.A[i][j];
//             }
//         }
//         return temp;
//     }

//     Matrix operator-(const Matrix &M) const {
//         Matrix temp;
//         for (int i=0; i<3; i++) {
//             for (int j=0; j<3; j++) {
//                 temp.A[i][j] = A[i][j] - M.A[i][j];
//             }
//         }
//         return temp;
//     }

//     Matrix operator*(const Matrix &M) const {
//         Matrix temp;
//         for (int i=0; i<3; i++) {
//             for (int j=0; j<3; j++) {
//                 temp.A[i][j] = 0;
//                 for (int k=0; k<3; k++) {
//                     temp.A[i][j] += A[i][k] * M.A[k][j];
//                 }
//             }
//         }
//         return temp;
//     }
// };

// int main() {
//     Matrix m1, m2, result;

//     cout << "Enter first matrix:\n";
//     m1.setData();

//     cout << "Enter second matrix:\n";
//     m2.setData();

//     cout << "\nMatrix Addition:\n";
//     result = m1 + m2;
//     result.display();

//     cout << "\nMatrix Subtraction:\n";
//     result = m1 - m2;
//     result.display();

//     cout << "\nMatrix Multiplication:\n";
//     result = m1 * m2;
//     result.display();

//     return 0;
// }

 
//                         Ass -------------- 13 ( Operator Overloading )
//                        -----------------------------------------------

// 1. Define a C++ class fraction
//   Class fraction {
//           long numerator;
//           long denominator;
//           
//     public:
//        fraction ( long n=0, long d=0); 
//        }
//  
//  Define an operator + to add two fraction object.           // 46 Program

// class fraction {
//     long numerator;
//     long denominator;

// public:
//     fraction(long n=0, long d=1) {
//         numerator=n;
//         if (d == 0) {
//             cout << "Denominator cannot be zero! Setting it to 1.\n";
//             denominator=1;
//         } else {
//             denominator=d;
//         }
//     }

//     void input() {
//         cout << "Enter numerator: ";
//         cin >> numerator;
//         cout << "Enter denominator: ";
//         cin >> denominator;
//         if (denominator == 0) {
//             cout << "Denominator cannot be zero! Setting it to 1.\n";
//             denominator = 1;
//         }
//     }

//     fraction operator+(fraction f) {
//         fraction temp;
//         temp.numerator = (numerator * f.denominator) + (f.numerator * denominator);
//         temp.denominator = denominator * f.denominator;
//         return temp;
//     }

//     void display() {
//         cout << numerator << "/" << denominator << endl;
//     }
// };

// int main() {
//     fraction f1, f2, f3;

//     cout << "Enter first fraction:\n";
//     f1.input();

//     cout << "\nEnter second fraction:\n";
//     f2.input();

//     f3 = f1 + f2; 

//     cout << "\nFirst fraction: ";
//     f1.display();

//     cout << "Second fraction: ";
//     f2.display();

//     cout << "Sum of fractions: ";
//     f3.display();

//     return 0;
// }

// 2. In question-1, define an operator < to compare two fraction objects.     // 47 Program

// class fraction {
//     long numerator;
//     long denominator;

// public:
//     fraction(long n=0, long d=1) {
//         if (d == 0) {
//             cout << "Denominator cannot be zero! Setting to 1." << endl;
//             d=1;
//         }
//         numerator = n;
//         denominator = d;
//     }

//     void input() {
//         cout << "Enter numerator: ";
//         cin >> numerator;
//         cout << "Enter denominator: ";
//         cin >> denominator;
//         if (denominator == 0) {
//             cout << "Denominator cannot be zero! Setting to 1." << endl;
//             denominator = 1;
//         }
//     }

//     void display() const {
//         cout << numerator << "/" << denominator << endl;
//     }

//     fraction operator+(const fraction &f) const {
//         fraction temp;
//         temp.numerator = numerator * f.denominator + f.numerator * denominator;
//         temp.denominator = denominator * f.denominator;
//         return temp;
//     }

//     bool operator<(const fraction &f) const {
//         long left = numerator * f.denominator;
//         long right = f.numerator * denominator;
//         if (left < right)
//             return true;
//         else
//             return false;
//     }
// };

// int main() {
//     fraction f1, f2, f3;

//     cout << "Enter first fraction:\n";
//     f1.input();

//     cout << "\nEnter second fraction:\n";
//     f2.input();

//     f3 = f1 + f2;  

//     cout << "\nFirst fraction: ";
//     f1.display();
//     cout << "Second fraction: ";
//     f2.display();
//     cout << "Sum of fractions: ";
//     f3.display();

//     if (f1 < f2)
//         cout << "\nFirst fraction is smaller than second fraction." << endl;
//     else
//         cout << "\nFirst fraction is not smaller than second fraction." << endl;

//     return 0;
// }


// 3. Consider a class distanc
//          class Distance {
//               int km,m,cm;
//     public:
//            // methods;  
//     };
//     
//   Overloaded the operator + to add two distance objects.

//  class Distance {
//      int km,m,cm;

//  public:
//      Distance() : km(0), m(0), cm(0) {}
    
//  void getDistance() {
//      cout << "Enter distance(km, m, cm): ";
//      cin >> km >> m >> cm;
//      }
    
//  void Display() const {
//      cout << km << "km" << " " << m << "m" << " "<< cm << "cm" << endl;
//      }
    
//  Distance operator+(const Distance &d) {
//        Distance temp;
//        temp.cm = cm + d.cm;
//        temp.m = m + d.m + temp.cm / 100;
//        temp.cm = temp.cm % 100;

//        temp.km = km + d.km + temp.m /1000;
//        temp.cm = temp.cm % 1000;
//        return temp;
//     }
//  };

//  int main() {
//     Distance d1,d2,d3;

//     cout << "Enter first distance: ";
//     d1.getDistance();

//     cout << "\nEnter second distance:\n~ ";
//     d2.getDistance();

//     d3 = d1 + d2;

//     cout << "\nFirst DistanceL: ";
//     d1.Display();

//     cout << "Second Distance: ";
//     d2.Display();

//     cout << "Sum of Distance: ";
//     d3.Display();

//     return 0;

//  }

// 4. In question-3, define operator pre decrement and post decrement to decrease distance by 1 cm.      //   48 Program

// class Distance {
//     int km, m, cm;

// public:
//     Distance() : km(0), m(0), cm(0) {}

//     Distance(int k, int me, int c) : km(k), m(me), cm(c) {}

//     void getDistance() {
//         cout << "Enter distance (km m cm): ";
//         cin >> km >> m >> cm;
//     }

//     void display() const {
//         cout << km << " km " << m << " m " << cm << " cm" << endl;
//     }

//     Distance operator+(const Distance &d) const {
//         Distance temp;
//         temp.cm = cm + d.cm;
//         temp.m = m + d.m + temp.cm / 100;    
//         temp.cm = temp.cm % 100;

//         temp.km = km + d.km + temp.m / 1000; 
//         temp.m = temp.m % 1000;

//         return temp;
//     }

//     //  Pre-decrement operator (--d)
//     Distance operator--() {
//         if (cm > 0) {
//             cm--;
//         } else {
//             cm = 99;
//             if (m > 0) {
//                 m--;
//             } else {
//                 m = 999;
//                 if (km > 0)
//                     km--;
//                 else
//                     cout << "Distance cannot be negative!" << endl;
//             }
//         }
//         return *this; // Return the modified object
//     }

//     //  Post-decrement operator (d--)
//     Distance operator--(int) {
//         Distance temp = *this; 
//         --(*this);           
//         return temp;           
//     }
// };

// int main() {
//     Distance d1, d2, d3;

//     cout << "Enter first distance:\n";
//     d1.getDistance();

//     cout << "\nEnter second distance:\n";
//     d2.getDistance();

//     d3 = d1 + d2;

//     cout << "\nFirst Distance: ";
//     d1.display();
//     cout << "Second Distance: ";
//     d2.display();
//     cout << "Sum of Distances: ";
//     d3.display();

//     cout << "\nAfter Pre-Decrement (--d3): ";
//     --d3;
//     d3.display();

//     cout << "After Post-Decrement (d3--): ";
//     d3--;
//     d3.display();

//     return 0;
// }


// 5. Consider the following class Array
//
//     class Array{
//         int *p;
//         int size;
//      public:
//    // methods
//   };
//
//                Define constructor to allocate an array of given size ( Size is given through parameter ).
// 
//  Define a subscript operator to access element at given index. Define destructor to deallocate the memory of array.    //   49 Program

// class Array {
//     int *p;
//     int size;

// public:
//     Array(int s) {
//         size = s;
//         p = new int[size]; // dynamic allocation
//         cout << "Array of size " << size << " created." << endl;
//     }

//     // Overload [] operator to access elements
//     int &operator[](int index) {
//         if (index < 0 || index >= size) {
//             cout << "Array index out of bounds!" << endl;
//             return p[0];
//         }
//         return p[index];
//     }

//     // Destructor to free memory
//     ~Array() {
//         delete[] p;
//         cout << "Array memory released." << endl;
//     }
// };

// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;

//     Array arr(n); // Constructor called / allocates memory

//     cout << "\nEnter " << n << " elements:\n";
//     for (int i=0; i<n; i++) {
//         cin >> arr[i]; 
//     }

//     cout << "\nYou entered:\n";
//     for (int i=0; i<n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     Destructor called automatically at end of scope
//     return 0;
// }



//                          Ass ----------- 14 ( Operator overloading, friend operator )
//                         -------------------------------------------------------------

// 1. Define a class complex and overloading following operator as a friend               // 50 Program
// i.    +
// ii.   -
// iii.  *

// class Complex {
//     int a;  // real part
//     int b;  // imaginary part

// public:
//     Complex(int x=0, int y=0) {
//         a = x;
//         b = y;
//     }

//     friend Complex operator + (Complex c1, Complex c2);
//     friend Complex operator - (Complex c1, Complex c2);
//     friend Complex operator * (Complex c1, Complex c2);

//     // Friend functions for input/output operators
//     friend istream& operator >> (istream &in, Complex &c);
//     friend ostream& operator << (ostream &out, const Complex &c);
// };

// Complex operator + (Complex c1, Complex c2) {
//     Complex temp;
//     temp.a = c1.a + c2.a;
//     temp.b = c1.b + c2.b;
//     return temp;
// }

// Complex operator - (Complex c1, Complex c2) {
//     Complex temp;
//     temp.a = c1.a - c2.a;
//     temp.b = c1.b - c2.b;
//     return temp;
// }

// Complex operator * (Complex c1, Complex c2) {
//     Complex temp;
//     temp.a = (c1.a * c2.a) - (c1.b * c2.b);
//     temp.b = (c1.a * c2.b) + (c1.b * c2.a);
//     return temp;
// }

// istream& operator >> (istream &in, Complex &c) {
//     cout << "Enter real part: ";
//     in >> c.a;
//     cout << "Enter imaginary part: ";
//     in >> c.b;
//     return in;
// }

// ostream& operator << (ostream &out, const Complex &c) {
//     if (c.b >= 0)
//         out << c.a << " + " << c.b << "i";
//     else
//         out << c.a << " - " << -c.b << "i";
//     return out;
// }

// int main() {
//     Complex c1, c2, sum, diff, prod;

//     cout << "Enter first complex number:\n";
//     cin >> c1;

//     cout << "\nEnter second complex number:\n";
//     cin >> c2;

//     sum = c1 + c2;
//     diff = c1 - c2;
//     prod = c1 * c2;

//     cout << "\nFirst Complex Number: " << c1;
//     cout << "\nSecond Complex Number: " << c2;
//     cout << "\n\nAddition: " << sum;
//     cout << "\nSubtraction: " << diff;
//     cout << "\nMultiplication: " << prod << endl;

//     return 0;
// }

// 2. Define a class time with appropriate instance variables and member functions overloading following operators      // 51 Program
// i.  << insertion operator
// ii.  >> extraction operator

// class Time {
// private:
//      int hours,minutes,second;
// public:
//     void SetTime(int h=0,int m=0,int s=0) {
//         hours = h;
//         minutes = m;
//         second = s;
//     }

//     void ShowTime() {
//         cout << "\n" << hours <<" : " <<  minutes << " : " << second;
//     }

//     friend istream& operator>>(istream &Tin, Time &t) {
//         cout << "Enter hours: ";
//         Tin >> t.hours;

//         cout << "Enter minutes: ";
//         Tin >> t.minutes;

//         cout << "Enter second: ";
//         Tin >> t.second;
//         return Tin;
//     }

//     friend ostream& operator<<(ostream &out, const Time &t) {
//         out << t.hours << " " << "Hours"<< " " << " : " << t.minutes << " " << "Minutes" << " : "<< t.second << " " << "Second";
//         return out;
//     }
// };

// int main() {
//     Time t1;

//     cin >> t1;

//     cout <<"\nTime is: ";

//     cout << t1 << endl;

//     return 0;
// }

// 3. In question-2, over load operator = to perform copy of time object.                            // 52 Program

// class Time {
// private:
//     int hours, minutes, seconds;

// public:
//     Time(int h=0, int m=0, int s=0) {
//         hours = h;
//         minutes = m;
//         seconds = s;
//     }

//     void SetTime(int h, int m, int s) {
//         hours = h;
//         minutes = m;
//         seconds = s;
//     }

//     friend istream& operator>>(istream &in, Time &t) {
//         cout << "Enter hours: ";
//         in >> t.hours;
//         cout << "Enter minutes: ";
//         in >> t.minutes;
//         cout << "Enter seconds: ";
//         in >> t.seconds;
//         return in;
//     }

//     friend ostream& operator<<(ostream &out, const Time &t) {
//         out << t.hours << " : " << t.minutes << " : " << t.seconds;
//         return out;
//     }

//     Time operator=(const Time &t) {
//         hours = t.hours;
//         minutes = t.minutes;
//         seconds = t.seconds;
//         return *this;  
//     }
// };

// int main() {
//     Time t1, t2;

//     cout << "Enter first time object:\n";
//     cin >> t1;

//     cout << "\nFirst Time: " << t1 << endl;
//     t2 = t1;

//     cout << "\nAfter copying: ";
//     cout << "\nSecond Time: " << t2 << endl;

//     return 0;
// }

// 4. Consider the following class Array                                                             // 53 Program
//
//    class Array {
//          int *p;
//          int size;
//        public:
//             
// };
// 
//   Define operator = to perform deep copy of Array objects.

// class Array {
//     int *p;
//     int size;

// public:
//     Array(int s = 0) {
//         size = s;
//         if (size > 0)
//             p = new int[size];
//         else
//             p = nullptr;
//     }

//     Array(const Array &a) {
//         size = a.size;
//         if (size > 0) {
//             p = new int[size];
//             for (int i = 0; i < size; i++)
//                 p[i] = a.p[i];
//         } else {
//             p = nullptr;
//         }
//     }

//     Array& operator=(const Array &a) {
//         if (this != &a) {             
//             delete[] p;               
//             size = a.size;
//             p = new int[size];        
//             for (int i = 0; i < size; i++)
//                 p[i] = a.p[i];        
//         } 
//           return *this;
//     }
                        

//     void setData() {
//         for (int i=0; i<size; i++)
//             p[i] = i+1;
//     }

//     void display() {
//         for (int i=0; i<size; i++)
//             cout << p[i] << " ";
//         cout << endl;
//     }

//     ~Array() {
//         delete[] p;                  
//     }
// };

// int main() {
//     Array a1(5);
//     a1.setData();

//     Array a2;
//     a2 = a1;  // deep copy

//     cout << "a1: ";
//     a1.display();
//     cout << "a2: ";
//     a2.display();

//     return 0;
// }


// 5. In question 4, Define a friend operator + to concatenate two Array objects.                  // 54 Program

// class Array {
//     int *p;
//     int size;
// public:
//     Array(int s = 0) {
//         size = s;
//         if (size > 0)
//             p = new int[size];
//         else
//             p = nullptr;
//     }

//     Array(const Array &a) {
//         size = a.size;
//         if (size > 0) {
//             p = new int[size];
//             for (int i = 0; i < size; i++)
//                 p[i] = a.p[i];
//         } else {
//             p = nullptr;
//         }
//     }

//     Array &operator=(const Array &a) {
//         if (this != &a) {
//             delete[] p;
//             size = a.size;
//             p = new int[size];
//             for (int i=0; i<size; i++)
//                 p[i] = a.p[i];
//         }
//         return *this;
//     }

//     void setData() {
//         for (int i=0; i<size; i++)
//             p[i] = i+1;
//     }

//     void display() const {
//         for (int i=0; i<size; i++)
//             cout << p[i] << " ";
//         cout << endl;
//     }

//     friend Array operator+(const Array &a1, const Array &a2);

//     ~Array() {
//         delete[] p;
//     }
// };

// Array operator+(const Array &a1, const Array &a2) {
//     Array temp(a1.size + a2.size);
//     int k = 0;

//     for (int i = 0; i < a1.size; i++, k++)
//         temp.p[k] = a1.p[i];

//     for (int i = 0; i < a2.size; i++, k++)
//         temp.p[k] = a2.p[i];

//     return temp; 
// }

// int main() {
//     Array a1(3), a2(4);
//     a1.setData(); 
//     a2.setData(); 

//     Array a3;
//     a3 = a1 + a2; // concatenate using overloaded +

//     cout << "a1: ";
//     a1.display();

//     cout << "a2: ";
//     a2.display();

//     cout << "a3 : ";
//     a3.display();

//     return 0;
// }


