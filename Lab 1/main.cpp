// Michael Liz

#include <iostream>
using namespace std;

// Question 1
// What will the following C++ code print? (Do not use compiler to answer)

// int main() {
//     int a = 1, b = 2, c = 3;

//     cout << a++ << " " << ++b << " " << (c *= 2) << " " << (b = a + b) << " " << (a += b++) << endl
//          << "a = " << a << ", b = " << b << ", c = " << c << endl;

//     return 0;
// }

// Answer 

// The code will submit the following:
// 1 3 6 5 and then it will print a = 3, b = 5, c = 6

// Question 2
// The Sorting Hat at the wizarding school has three magical numbers, but it’s feeling lazy today. It wants the numbers sorted in ascending order without using any loops or complex spells. Help the Sorting Hat by writing a simple C++ program that sorts these three numbers! Only using tenrary operator.
// Input: 7 3 5
// Output: 3 5 7

// Input: 10 2 8
// Output: 2 8 10

// Answer 

// int main() {
//   int a, b, c;
//   a = 7, b = 3, c = 5;
//   int smallest;
//   int mid;
//   int largest;
//   smallest = a < b && a < c ? a : b < a && b < c ? b : c;
//   mid = a < b && a > c ? a : b < a && b > c ? b : c;
//   largest = a > b && a > c ? a : b > a && b > c ? b : c;
//   cout << "" << smallest << " " << mid << " " << largest << endl;
//   a = 10, b = 2, c = 8;
//   smallest = a < b && a < c ? a : b < a && b < c ? b : c;
//   mid = a < b && a > c ? a : b < a && b > c ? b : c;
//   largest = a > b && a > c ? a : b > a && b > c ? b : c;
//   cout << "" << smallest << " " << mid << " " << largest << endl;
// }

// Question 3:
// Consider the following C++ program in which the statements are in the incorrect order. Rearrange the statements so that it prompts the user to input the radius of a circle and outputs the area and circumference of the circle.

// int main() {
//   cout << "Enter the radius: ";
//   cin >> radius;
//   cout << endl;
//   double radius;
//   double area;
//   using namespacece std;
//   return 0;
//   cout << "Area = " << area << endl;
//   area = PI * radius * radius;
//   circumference = 2 * PI * radius;
//   cout << "Circumference = " << circumference << endl;
//   const double PI = 3.14;
//   double circumference;
// }

// Answer 
// int main() {
//   using namespace std;
//   const double PI = 3.14;
//   double area;
//   double circumference;
//   double radius;
//   cout << "Enter the radius: ";
//   cin >> radius;
//   cout << endl;
//   area = PI * radius * radius;
//   cout << "Area = " << area << endl;
//   circumference = 2 * PI * radius;
//   cout << "Circumference = " << circumference << endl;
//   return 0;
// }

// Question 4
// Write a program that prompts the user to input a decimal number and outputs the number rounded to the nearest integer (you cannot use a function).

// Answer

// int main() {
//   double num;
//   cout << "enter a decimal value: ";
//   cin >> num;
//   cout << "rounded to the nearest integer: " << static_cast<int> (num + 0.5) << endl;
//   return 0;
// }

// Question 5
// Write a C++ program that prompts the user to input the elapsed time for an event in seconds. The program then outputs the elapsed time in hours, minutes, and seconds. (For example, if the elapsed time is 9,630 seconds, then the output is 2:40:30.)

// Answer

// int main() {
//   int totalSeconds, hours, minutes, seconds;
//   cout << "Enter an elapsed time in seconds" << endl;
//   cin >> totalSeconds;
//   // There are 3600 seconds in an hour
//   hours = totalSeconds / 3600;
//   minutes = (totalSeconds % 3600) / 60;
//   seconds = totalSeconds % 60;
//   cout << "The total amount of elapsed time is: " << hours << ":" << minutes << ":" << seconds;
// }

// Question 6
// A milk carton can hold 3.78 liters of milk. Each morning, a dairy farm ships cartons of milk to a local grocery store. The cost of producing one liter of milk is $0.38, and the profit of each carton of milk is $0.27. Write a program that does the following:
// a. Prompts the user to enter the total amount of milk produced in the morning.
// b. Outputs the number of milk cartons needed to hold milk. (Round your answer to the
// nearest integer.)
// c. Outputs the cost of producing milk.
// d. Outputs the profit for producing milk.

// Answer

// int main() {
//   double cost = 0.38;
//   double profit = 0.27;
//   double milk;
//   cout << "Enter the total amount of milk that was produced this morning: ";
//   cin >> milk;
//   cout << "The number of milk cartons needed to hold milk is: " 
//        << static_cast<int> (milk / 3.78) << endl;
//   cout << "The cost of producing milk is: " << milk * cost << endl;
//   cout << "The profit for producing milk is: " << milk * profit << endl;
// }