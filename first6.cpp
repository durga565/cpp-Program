#include<iostream>
#include<cstring>
using namespace std;


//                                       Ass -------- 20 ( Overriding, Latebinding,Abstract class )
//                                      ------------------------------------------------------------

// 1. Define a class A with two int type member variables.
//    Define a member function setData() and showData() to set and display values of member variables.
//    Also define a member function with the name input() to take input from the user.
//    Define a class B with one int type member variable.
//    Override input() function in order to input three values from the user for all three member variables.     //  71 Program
//    Also override showData() function to display all three values.


// class A {
// protected:
//   int a,b;
// public:
//   void SetData(int x, int y) {
//      a = x;
//      b = y;
//   }

//   virtual void input() {
//     cout << "Enter two integer: ";
//     cin >> a >> b;
//   }

//   virtual void ShowData() {
//      cout << "A = " << a << ", B = " << b << endl;
//   }

// };

// class B : public A {
// private:
//   int c;
// public:
//   void input() {
//     cout << "Enter three intiger: ";
//     cin >> a >> b >> c;
//   }
  
//   void ShowData() {
//     cout << "A=" << a << " " <<  "B=" << b << " " << "C=" << c << endl;
//   }
// };

// int main() {
//     B obj;
//     obj.input();
//     obj.ShowData();
    
//     return 0;

// }


// 2. Define a class Shape with member variable to store name of the shape (like rectangle, square, circle, etc.).
//    Provide methods to set and display name of the shape.
//    Define a pure virtual function area() in Shape class.
//    Define two derived classes of Shape — one is Rectangle and the second is Square.                          //  72 Program
//    Define appropriate members in both the classes.
//    Demonstrate usage of the classes by making driver function main().


// class Shape {
// protected:
//     string name;
// public:
//     void setName(string n) {
//       name = n;
//      }
 
//     void showName() {
//       cout << "Shape: " << name << endl;
//      }

//     virtual float area() = 0;
// };

// class Rectangle : public Shape {
// private:
//    float length,breadth;
// public:
//    Rectangle(float l, float b) {
//      length = l;
//      breadth = b;
//      setName("Rectangle");
//     }
  
//    float area() {
//      return length * breadth;
//     }
// }; 

// class Square : public Shape {
// private:
//    float side;
// public:
//    Square(float s) {
//      side = s;
//      setName("Square");
//     }

//   float area() {
//     return side * side;
//    }

// };

// class Circle : public Shape {
// private:
//   float radius;
// public:
//   Circle(float r) {
//     radius = r;
//     setName("Circle");
//    }

//   float area() {
//      return 3.14 * radius * radius;
//    }
// };

// int main() {
//    Shape* P;

//    Rectangle r(8,5);
//    Square sq(5);
//    Circle C(5);

//    P = &r;
//    P->showName();
//    cout << "Area: " << P->area() << endl;
//    cout << endl;

//    P = &sq;
//    P->showName();
//    cout << "Area: " << P->area() << endl;
//    cout << endl;

//    P = &C;
//    P->showName();
//    cout << "Area: " << P->area() << endl;

//    return 0;

// }

