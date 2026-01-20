#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

//                                           Ass -------- 18 ( Inheritance )
//                                           -------------------------------

// 1. Define a class person with name and age as instance variables as private member. Provide setters and getters as protected methods
//    Derive a class Employee from person class with private instance variable salary, provide public methods setEmployee() and showEmployee().    //   65 Program

// class Person {
// private:
//     string name;
//     int age;
// protected:
//     void SetName(string nm) {
//         name = nm;
//     }

//     void SetAge(int ag) {
//         age = ag;
//     }

//     string getName() {
//         return name;
//     }

//     int getAge() {
//         return age;
//     }
// };

// class Employee : public Person {
// private:
//     double salary;
// public:
//     void setEmployee(string nm, int ag, double slry) {
//          SetName(nm);
//          SetAge(ag);
//          salary = slry;
//     }
    
//     void showEmployee() {
//         cout << "Name : " << getName() << "Age : " << getAge() << "Salary : " << salary << endl;
//     }
// };

// int main() {
//     Employee e1;
//     string s;
//     int a;
//     double d;

//     cin >> s >> a >> d;
//     e1.setEmployee(s, a, d);
//     e1.showEmployee();

//     return 0;
// }

// 2. Define a class Circle with radius as private instance variable and setRadius(), getRadius(), getArea() as public instance methods. Define a class ThickCircle as a subclass   // 66 Program
//    of Circle with thickness as private instance variable and getThickness(), setThickness() as public instance methods. Provide an overridden method getArea() to calculate area of thick portion of circle.

// class Circle {
// private:
//   double radius;
// public:
//   void setRadius(double r) {
//      radius = r;
//   }

//   double getRadius() const {
//      return radius;
//   }

//   virtual double getArea() const {
//      return 3.14 * radius * radius;
//   }

// };

// class Thickness : public Circle {
// private:
//    double thickness;
// public:
//    void setThickness(double t) {
//        thickness = t;
//    }

//    double getThickness() const {
//       return thickness;
//    }

//    double getArea() const override {
//      if(thickness > getRadius())
//         return 0;

//         double outerRadius = getRadius();
//         double innerRadius = outerRadius - thickness;
//         return 3.14 * (outerRadius * outerRadius - innerRadius * innerRadius);

//    }

// };

// int main() {
//    Thickness tc;

//    tc.setRadius(5);
//    tc.setThickness(4);

//    cout << "Outer Radius: " << tc.getRadius() << endl;
//    cout << "Thickness: " << tc.getThickness() << endl;
//    cout << "Area: " << tc.getArea() << endl;

//    return 0;

// }

// 3. Define a class Coordinate with x and y as instance variable. Define overloaded versions ofgetDistance(), first no argument caculating distance between two corordinate.
//    Also define other methods if required.                                                                                                                                          //  67 Program

// class Coordinate {
// public:
//    int x,y;

//    Coordinate(int x = 0, int y = 0) {
//          this-> x = x;
//          this -> y = y;
//    } 

//    double getDistance() {
//         return ( x * x + y * y);
//    }

//    double getDistance(Coordinate c) {
//        return ((x - c.x) * (x - c.x) + (y - c.y) * (y - c.y));
//    }
// };

// int main() {
//     Coordinate C1(1,3);
//     Coordinate C2(3,4);

//     cout << "Distance of c1 from origin: " << C1.getDistance() << endl;
//     cout << "Distance between c1 and c2 is: " << C1.getDistance(C2) << endl;

//     return 0;

// }

// 4. Define a class Shape with shapeName as instance variable. Provide setter and getter.     //   68 Program

// class Shape {
// private:
//   string sap;
// public:
//   void setShape(string s) {
//      sap = s;
//   } 

//   string getShape() {
//       return sap;
//   }
// };

// int main() {
//     Shape s1;
//     string c1;

//     cout << "Enter Shape Name: ";
//     cin >> c1;

//     s1.setShape(c1);

//     cout << "Shape is: " << s1.getShape() << endl;

//     return 0;
// }

// 5. In question- 3 & 4, Derive a class StraightLine from Shape with two Corordinate type objects as instance member. Provide methods to setLine(), getLine(), and showLine().    // 68 Program 

// class Coordinate {
// private:
//     int x, y;
// public:
//     void setCoordinate(int x, int y) {
//         this->x = x;
//         this->y = y;
//     }

//     void showCoordinate() {
//         cout << "(" << x << "," << y << ")";
//     }

//     // Distance from origin
//     double getDistance() {
//         return sqrt(x * x + y * y);
//     }

//     // Distance between two coordinates
//     double getDistance(Coordinate C) {
//         return sqrt((x - C.x) * (x - C.x) + (y - C.y) * (y - C.y));
//     }
// };

// class Shape {
// private:
//     char shapeName[20];
// public:
//     void setShapeName(char n[]) {
//         strcpy(shapeName, n);
//     }

//     char* getShapeName() {
//         return shapeName;
//     }
// };

// class StraightLine : public Shape {
// private:
//     Coordinate c1, c2;
// public:
//     void setLine(Coordinate c1, Coordinate c2) {
//         this->c1 = c1;
//         this->c2 = c2;
//     }

//     double getDistance() {
//         return c1.getDistance(c2);
//     }

//     void showLine() {
//         c1.showCoordinate();
//         cout << " to ";
//         c2.showCoordinate();
//     }
// };

// int main() {
//     Coordinate p1, p2;
//     p1.setCoordinate(6,6);
//     p2.setCoordinate(76,6);

//     StraightLine line;
//     line.setShapeName((char*)"Straight Line");
//     line.setLine(p1, p2);

//     cout << "Shape Name: " << line.getShapeName() << endl;
//     cout << "Line Coordinates: ";
//     line.showLine();
//     cout << endl;

//     cout << "Distance between points: " << line.getDistance() << endl;

//     return 0;
// }
