#include<iostream>
#include<string.h>
using namespace std;


//                           Ass ------- Basics of C++
//                          ---------------------------

// 1. Write a C++ program to print Helloo My SirG on the screen.   //   1 Program

//  int main() {
//      cout<<"Hello My SirG";
//      return 0;
//  }

 // int main() {
 //    std::cout<<"Hello My SirG";      // With out using namespace
 // }


// 2. Write a c++ program to print Hello on the first line and My SirG on the second line using endl.   //   2 Program

//  int main() {
//      cout<<"Hello"<<endl<<"My SirG";
//      return 0;
//  }

//   int main() {
//      std::cout<<"Hello"<<std::endl<<"My SirG";      // With out using namespace
//   }


// 3. Write a C++ program to calculate the sum of two numbers.   //   3 Program

//  int main() {
//      int a,b;
//      cout<<"Enter first numbers: ";
//      cin>>a;

//      cout<<"Enter second numbers: ";
//      cin>>b;

//      cout<<"Sum of "<< a <<" and "<< b <<" is "<<a+b;
//      return 0;

//  }

//  int main() {
//     int a,b;

//     std::cout<<"Enter first numbers: ";
//     std::cin>>a;

//     std::cout<<"Enter second numbers: ";
//     std::cin>>b;

//     std::cout<<"Sum of "<< a <<" and "<< b << " is : "<< a + b;      // With out using namespace

//     return 0;
//  }


// 4. Write a C++ program to calculate the area of a circle.   //   4 Program

//  int main() {
//      int r;
     
//      cout<<"Enter radius of the circle: ";
//      cin>>r;

//      cout<<"Area of the circle is: "<< 3.14 * r * r;
//      return 0;
//  }

//  int main() {
//     int r;

//     std::cout<<"Enter radius of thr circle: ";
//     std::cin>>r;

//     std::cout<<" Area of the circle is: "<< 3.14 * r * r;      // // With out using namespace
//     return 0;
//  }

// 5. Write a C++ program to calculate the volume of a cuboid.   //   5 Program

//  int main() {
//      int l,h,w;

//      cout<<"Enter length of the of the cuboid: ";
//      cin>>l;

//      cout<<"Enter height of the cuboid: ";
//      cin>>h;

//      cout<<"Enter width of the cuboid: ";
//      cin>>w;

//      cout<<"Volume of the cuboid is: "<< l * h * w;
//      return 0;
//  }

//  int main() {
//      int l,h,w;

//      std::cout<<"Enter length of the cuboid: ";
//      std::cin>>l;

//      std::cout<<"Enter height of the cuboid: ";
//      std::cin>>h;

//      std::cout<<"Enter width of the cuboid: ";
//      std::cin>>w;

//      std::cout<<"Volume of the cuboid is: "<< l * h * w;      // With out using namespace
//      return 0;
//  }

//                          Ass ---------- 2 Basics of C++
//                         --------------------------------

// 1. Write a C++ programto calculate an average of 3 numbers.   //   6 Program

//  int main() {
//      int a,b,c;

//      cout<<"Enter three numbers: ";
//      cin >> a >>b >>c;

//      cout<<"Average of is " << a  + b + c / 3.0;
//      return 0;
//  }

//  int main() {
//      int a,b,c;

//      std::cout<<"Enter three numbers: ";
//      std::cin >> a>> b >> c;

//      std::cout<<"Average is: "<< a + b + c / 3.0;       // With out using namespace

//      return 0;

//  }
// 2. Write a C++ program to calculate the square of a number.   // 7 Program

//  int main() {
//      int a;

//      cout<<"Enter a number: ";
//      cin >> a;

//      cout << "Square of " << a << " is " << a * a;
//      return 0;
//  }

//  int main() {
//     int a;

//     std::cout << "Enter a numbers: ";
//     std::cin >> a;

//     std::cout << " Square of " << a << " is " << a * a;       // With out using namespace
//     return 0;
//  }

// 3. Write a C++ program to swap values of two int variables without using third variable.   //   8 Program

//  int main() {
//      int a,b;

//      cout << "Enter  numbers: ";
//      cin >> a >> b;

//      a = a * b;
//      b = a / b;
//      a = a / b;

//      cout << a << " " << b;

//      return 0;
//  }

//  int main() {
//      int a,b;

//      std::cout << "Enter two numbers: ";                  // With out using namespace
//      std::cin >> a >> b;

//      a = a * b;
//      b = a / b;
//      a = a / b;

//      std::cout << a << " " << b;
//      return 0;
//  }

// 4. Write a C++ program to find the maximum of two numbers.   //   9 Program

//  int main() {
//      int a,b;

//      cout<<"Enter two numbers: ";
//      cin >> a >> b;

//      if( a > b) {
//         cout << a;
//      } else
//         cout << b;

//         return 0;
 // }


//   int main() {
//      int a,b;

//      std::cout<<"Enter two numbers: ";
//      std::cin >> a >> b;

//      if( a > b) {
//         std::cout << a;
//      } else
//         std::cout << b;       // With out using namespace

//         return 0;
//     }

// 5. Write a C++ program to add all the numbers of an array of size 10.   //   10 Program

// int main() {
//     int arr[10],sum=0;

//     cout << " Enter numbers: ";
//     for(int i=0; i<10; i++) {
//         cin >> arr[i];
//         sum += arr[i];
//     }
//      cout << " Sum is: " << sum;

//      return 0;
// }


//  int main() {
//      int arr[10],sum=0;

//      std::cout << "Enter numbers: ";                         // With out using namespace
//      for(int i=0; i<10; i++) {
//         std::cin >> arr[i];
//         sum += arr[i];
//      }
//       std::cout << "Sum is: " << sum;

//       return 0;
//  }

//                          Ass ------- 4 ( Function related )
//                         -----------------------------------


// 1. Define a C++ function to print all prime numbers between two given numbers.    //   11 Program

//  int is_prime(int n) {
//       int i;
//       if(n>2)
//        return 0;
//         for(i=2; i<=n; i++) {
//             if(n%i==0)
//              return 0;
//         }
//          return 1;
//  }

//   void prime(int a,int b) {
//      int x;
//      for(x=a+1; x<b; x++) {               //       Pending
//         if(is_prime(x))
//          cout<<x<<" ";
//      }
//   }
 
//    int main() {
//       int x,y;

//       cout << "Enter two numbers: ";
//       cin>>x>>y;

//       prime(x,y);
      
//       cout << prime;

//       return 0;
//    }

// 2. Define a C++ function to find the highest value digit in a given number.   //   12 Program

//  int main() {
//      int a,digit,max_digit=0;

//      cout << "Enter number: ";
//      cin >> a;
      
//      while(a!=0) {
//         digit = a%10;
//         if(digit > max_digit) {
//             max_digit = digit;
//         }
//          a=a/10;
//      }
//         cout << "Highest digit is: " << max_digit;

//        return 0;
//  }

//  int main() {
//      int a,digit,max_digit=0;

//      std::cout << "Enter number: ";
//      std::cin >> a;

//      while(a!=0) {
//         digit= a%10;
//          if(digit > max_digit) {                           // With out using namespace
//             max_digit = digit;
//          }
//            a=a/10;
//      }

//       std::cout << " Highest digit is: " << max_digit;
//         return 0;

//     }

// 3. Define a C++ function to calculate c raised to power y.   //   13 Program

//  int main() {
//      int a,b;

//         cout << "Enter base and exponent: ";
//         cin >> a >> b;
//         int result = 1;
//         for(int i=1; i<=b; i++) {
//             result = result * a;
//         }
//          cout << a << " raised to power " << b << " is: " << result;

//          return 0;
//  }

//   int main() {
//      int a,b;
       
//        std::cout << "Enter base and exponent: ";
//        std::cin >> a >> b;

//        int result = 1;
//        for(int i=1; i<=b; i++) {
//            result = result * a;
//        }
//         std::cout << a << " raised to power " << b << " is: " << result;    // With out using namespace

//         return 0;
//   }

// 4. Define a C++ function to print Pascal triangle up to N terms.   //   14 Program

// void printPascalTriangle(int n) {
//     int i,j;
//     for (i=0; i<n; i++) {
//         for (j=0; j<n-i-1; j++) {
//             cout << "  ";
//         }
//         int k=1;
//         for (j=0; j<=i; j++) {
//             cout << k << "   ";
//         k = k*(i-j) / (j+1);
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int rows;
//     cout << "Enter number of rows: ";
//     cin >> rows;
//     printPascalTriangle(rows);
//     return 0;
// }

//  void printPascalTriangle(int n) {
//      int i,j;
//      for(i=0; i<n; i++) {
//         for(j=0; j<n-i-1; j++) {
//             std :: cout << " ";
//         }
//           int k=1;
//           for(j=0; j<=i; j++) {                         // With out using namespace
//              std :: cout << k << " ";
//              k=k*(i-j) / (j+1);
//           }
//            std :: cout << endl;
//      }
//  }

//   int main() {
//      int rows;
//      std :: cout << "Enter number of rows: ";
//      std :: cin >> rows;

//      printPascalTriangle(rows);

//      return 0;
//   }

// 5. Define a C++ function to check whether a given number is a term in a Fibonacci seriese or not.   //   15 Program

//   int main() {
//     int a = -1, b = 1, c, num;
//     cout << "Enter a number: ";
//     cin >> num;
//     while (1) {
//         c = a + b;
//         if (c == num) {
//             cout << num <<" "<< "is in the Fibonacci series" << endl;
//             break;
//         }
//         if (c > num) {
//             cout << num <<" "<<" is not in the Fibonacci series" << endl;
//             break;
//         }
//         a = b;
//         b = c;
//     }
//     return 0;
//   }


//                        Ass ------------ 5 ( Function C++ )
//                       -------------------------------------


// 1. Define a C++ function to swap data of two int variables using call by reference.   //   16 Program

//  void swap(int&,int&);

//  void swap (int &x,int &y) {
//     x = x + y;
//     y = x - y;
//     x = x - y;
      
//  }

//   int main() {
//      int a,b;

//      cout << " Enter two numbers: ";
//      cin >> a >> b;
     
//      swap(a,b);

//      cout << a << " " << b << endl;
     
//      return 0;

//   }


// 2. Write a C++ function using the default argument that is able to add 2 or 3 numbers.   //   17 Program

// int add(int a, int b, int c = 0); 

// int add(int a, int b, int c) {
//     return a + b + c;
// }

// int main() {
//     cout << add(5, 10) << endl;     
//     cout << add(5, 10, 20) << endl; 
//     return 0;
// }


//  int add(int a, int b, int c = 0);

//  int add(int a, int b, int c) {               
//     return a + b + c;                                    //  With out using namespace
//  }

//   int main() {
//     std::cout << add(5,5) << endl;
//     std::cout << add(5,5,5) << endl;

//     return 0;
//   }


// 3. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle.   //   18 Program

//  float area(float r);                   // circle
//  int area(int l,int w);                 // rectangle
//  float area(float a,float b,float c);   // triangle

//  float area(float r) {
//      return 3.14 * r * r;
//  }

//  int area(int l, int w) {
//     return l * w;
//  }

//  float area(float a,float b,float c) {
//     return (a+b+c) / 2.0;
//  }

//   int main() {
//      cout << area(5.0) << endl;
//      cout << area(3,4) << endl;
//      cout << area(2.,2,2) << endl;

//      return 0;
//   }


// 4. Write function using function overloading to find a maximum of two numbers and both the numbers can be integer or real.   //   19 Program

 

// 5. Write a function using function overloading to add two numbers having different data types.   //   20 Program

// int sum(int a,int b);
// float sum(float x,float y);

// int sum(int a,int b) {
//      return a+b;
// }
// float sum(float x,float y) {
//     return x+y;
// }

//  int main() {
//     cout << sum(10,15) << endl;
//     cout << sum(23.0f,200.0) << endl;

//  }



//                      Ass ------------ 6 Program
//                     ----------------------------

// 1. Define a C++ function to sort an array of integer in ascending of descending order depending on 
//    bool type argument( True for ascending and false for descending).   //   21 Program

// void sortArray(int arr[], int n, bool asc = true) {

//     for (int i = 0; i < n - 1; i++) {
//         int index = i;
//         for (int j = i + 1; j < n; j++) {

//             if (asc) {
//                 if (arr[j] < arr[index])
//                     index = j;
//             } else {
//                 if (arr[j] > arr[index])
//                     index = j;
//             }
//         }

//         int temp = arr[i];
//         arr[i] = arr[index];
//         arr[index] = temp;
//     }
// }

// int main() {
//     int n;

//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter " << n << " elements: ";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     bool asc;
//     cout << "Enter 1 for ascending, 0 for descending: ";
//     cin >> asc;

//     sortArray(arr, n, asc);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }


// 2. Define a function to sort an array of strings in ascending or descending order depending on bool type argument
//    ( True for ascending and false for descending ) use default argument to implement it.   //   22 Program

// void sortStrings(string arr[], int n, bool ascending = true) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {                       // Function to sort array of strings manually using bubble sort
                                                
//             if (ascending && arr[j] > arr[j + 1]) {         //  Ascending order
//                 swap(arr[j], arr[j + 1]);
//             }

//             else if (!ascending && arr[j] < arr[j + 1]) {            // Descending order
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }

// int main() {
//     int n;
//     cout << "Enter number of strings: ";
//     cin >> n;

//     string arr[n];
//     cout << "Enter " << n << " strings:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     bool asc;
//     cout << "Enter 1 for Ascending, 0 for Descending: ";
//     cin >> asc;

//     sortStrings(arr, n, asc);                             // call function

//     cout << "Sorted strings: " << endl;
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// 3. Define a function to rotate an array by n postions in the d direction implement position and direction 
//    using default arguments. Arguments d can bw -1 or 1 denoting left or right direction . Argument n shoulde be the last argument with default value 1.   //   23 Program


// Function to rotate array by n positions in direction d
// d = -1 → left,  d = 1 → right
// // n has default value 1 (should be last argument)
// void rotateArray(int arr[], int size, int d = -1, int n = 1) {
//     n = n % size;  // To avoid extra rotations

//     if (d == -1) {      // Left rotation
//         while (n--) {
//             int temp = arr[0];
//             for (int i = 0; i < size - 1; i++) {
//                 arr[i] = arr[i + 1];
//             }
//             arr[size - 1] = temp;
//         }
//     } 
//     else if (d == 1) {       // Right rotation
//         while (n--) {
//             int temp = arr[size - 1];
//             for (int i = size - 1; i > 0; i--) {
//                 arr[i] = arr[i - 1];
//             }
//             arr[0] = temp;
//         }
//     }
// }

// int main() {
//     int size;
//     cout << "Enter array size: ";
//     cin >> size;

//     int arr[size];
//     cout << "Enter array elements:\n";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     int d, n;
//     cout << "Enter direction (-1 for left, 1 for right): ";
//     cin >> d;

//     cout << "Enter number of positions to rotate: ";
//     cin >> n;

//     rotateArray(arr, size, d, n);      // calling function

//     cout << "\nArray after rotation:\n";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// 4. Define a function to calculate LCM of three numbers.   //   24 Program

// int lcm(int a, int b, int c) {
//     int L;
    
//     int start = (a > b ? (a > c ? a : c) : (b > c ? b : c));

//     for (L = start; L <= a * b * c; L++) {
//         if (L % a == 0 && L % b == 0 && L % c == 0)
//             return L;
//     }
//     return -1; 
// }

// int main() {
//     int x, y, z;

//     cout << "Enter three numbers: ";
//     cin >> x >> y >> z;

//     int L = lcm(x, y, z);

//     cout << "LCM is: " << L << endl;

//     return 0;
// }


// 5. Define a function to print all the prime factors of a given number. [ for example   num = 36, Prime factors are 2, 3 ].   //   25 Program

// void printPrimeFactors(int num) {
//     if (num <= 1) {
//         cout << "Invalid input! Number must be greater than 1.";
//         return;
//     }

//     cout << "Prime factors are: ";
//     while (num % 2 == 0) {
//         cout << 2 << " ";
//         num /= 2;
//     }

//     for (int i = 3; i * i <= num; i += 2) {
//         while (num % i == 0) {
//             cout << i << " ";
//             num /= i;
//         }
//     }

//     if (num > 2) {
//         cout << num;
//     }
// }

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     printPrimeFactors(n);

//     return 0;
// }



//                     Ass -------------- 7 Program ( More on Functions in C++ )
//                    ------------------------------

// 1. Define a function to calculate HCF of two numbers.   //   26 Program

//  void HCF(void) {
//      int a,b,h;

//      cout << "Enter two numbers: ";
//      cin >> a >> b;

//      for(h=(a>b?:a); h>=1; h--) {
//         if(a%h==0 && b%h==0)
//         break;
//      }
//       cout << "HCF is: " << h;
//  }

//   int main() {
//      HCF();

//      return 0;
//  }

// 2. Define overloaded functions to calculate volume of a cuboid, cone and sphere.   //   27 Program

//  int volume(int l,int b,int h);
//  float volume(int r,int h);
//  float volume(int r);

//  int volume(int l,int b,int h) {
//      return l*b*h;
//  }

//  int volumr(int r,int h) {
//      return 3.14 * r * r * h / 3;
//  }

//  float volume(int r) {
//      return 4.0 / 3 * 3.14 * r * r * r;
//  }

//   int main() {
//      cout << volume(10,20,30) << endl;

//      cout << volume(10,20) << endl;

//      cout << volume(10) << endl;

//      return 0;
//   }
 

// 3. Define a function to print a substring from startindex ( inclusive ) to endlndex ( exclusive ). Define function in such a way if second argument is not provided, 
//    string will print till the last possible index.   //   28 Program

// 4. Define a function to swap two arrays.   //   29 Program

// void swapArrays(int a[], int b[], int size) {
//     for (int i = 0; i < size; i++) {
//         int temp = a[i];
//         a[i] = b[i];
//         b[i] = temp;
//     }
// }

// int main() {
//     int size;

//     cout << "Enter the size of arrays: ";
//     cin >> size;
//     int a[size], b[size];

//     cout << endl << "Enter elements of Array A: ";
//     for (int i = 0; i < size; i++) {
//         cin >> a[i];
//     }

//     cout << endl << "Enter elements of Array B: ";
//     for (int i = 0; i < size; i++) {
//         cin >> b[i];
//     }

//     cout << endl << "Before Swapping: " << endl;
//     cout << endl <<"Array A: ";
//     for (int i = 0; i < size; i++) cout << a[i] << " ";
//     cout << endl << "Array B: " << endl;
//     for (int i = 0; i < size; i++) cout << b[i] << " ";

//     swapArrays(a, b, size);

//     cout << endl << "After Swapping: " << endl;
//     cout << endl << "Array A: ";
//     for (int i = 0; i < size; i++) cout << a[i] << " ";
//     cout << endl << "Array B: ";
//     for (int i = 0; i < size; i++) cout << b[i] << " ";

//     return 0;
// }

// 5. Define a function to merge two sorted arrays of same size.   //   20 Program

// void mergeArrays(int arr1[], int arr2[], int n, int merged[]) {
//     int i = 0, j = 0, k = 0;
//     while (i < n && j < n) {
//         if (arr1[i] < arr2[j]) {
//             merged[k++] = arr1[i++];
//         } else {
//             merged[k++] = arr2[j++];
//         }
//     }

//     while (i < n) {
//         merged[k++] = arr1[i++];
//     }

//     while (j < n) {
//         merged[k++] = arr2[j++];
//     }
// }

// int main() {
//     int n;
//     cout << "Enter size of each sorted array: ";
//     cin >> n;

//     int arr1[n], arr2[n];
//     cout << "Enter " << n << " sorted elements of first array: " << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> arr1[i];
//     }

//     cout << "Enter " << n << " sorted elements of second array: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr2[i];
//     }

//     int merged[2 * n];

//     mergeArrays(arr1, arr2, n, merged);

//     cout << " Merged sorted array: " << endl;
//     for (int i = 0; i < 2 * n; i++) {
//         cout << merged[i] << " ";
//     }

//     return 0;
// }
