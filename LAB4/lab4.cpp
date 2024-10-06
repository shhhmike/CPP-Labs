// Michael Liz

#include <iomanip>
#include <iostream>
#include <cmath>
#include <string>

// Question 1: Write a loop that takes whole numbers from the user and sums them until user enters
// an invalid input (input failure). Prompt the sum at the end

// ANSWER:
// int main()
// {
//     using namespace std;
//     cout << "Enter whole numbers to calculate sum (to exit and calculate sum, enter a non-integer data type): " << endl;
//     int num;
//     int sum = 0;
//     cin >> num;
//     while (cin >> num)
//     {
//         sum += num;
//         cin >> num;
//     }
//     cout << "The sum of all numbers entered is: " << sum << endl;
//     return 0;
// }

// Question 2
// Write a program that prints first n Fibonacci numbers. ( User enters the value of n)

// ANSWER:
// int main()
// {
//     using namespace std;
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     // First two Fibonacci numbers
//     int a = 0, b = 1;

//     cout << "The first " << n << " Fibonacci numbers are: " << endl;

//     for (int i = 1; i <= n; ++i)
//     {
//         cout << a << " ";
//         // Calculate next Fibonacci number
//         int next = a + b;
//         // Move to next numbers in the sequence
//         a = b;
//         b = next;
//     }
//     return 0;
// }

// Question 3:
// Write a loop that takes whole numbers from the user and sums them
// until user enters an invalid input (input failure). If user enters a negative value, do not add that negative value to sum.
// Prompt the sum at the end. (use continue)

// ANSWER:
// int main()
// {
//     using namespace std;
//     int sum = 0, num;
//     cout << "Enter only positive numbers to be summed and then displayed: " << endl;
//     // take user input
//     while (cin >> num)
//     {
//         if (num > 0)
//             sum += num;
//         else
//             continue;
//     }
//     cout << "The sum of all numbers entered is: " << sum << endl;
//     return 0;
// }

// Question 4:
// The population of town A is less than the population of town B. However, the population of town A
// is growing faster than the population of town B. Write a program that prompts the user to enter the
// population and growth rate of each town. The program outputs after how many years the population of
// town A will be greater than or equal to the population of town B and the populations of both the towns at that time.
// (A sample input is: Population of town ‍A = 5000, growth rate of town ‍A = 4% , population of town ‍B = 8000, and growth
// rate of town ‍B = 2%).

// ANSWER:
// int main()
// {
//     using namespace std;

//     double popA, popB;
//     double growthA, growthB;

//     // Input populations and growth rates
//     cout << "Please enter the population of town A followed by the population of town B: ";
//     cin >> popA >> popB;
//     cout << "Now enter the growth rates for town A, followed by the growth rate for town B (as a percentage): ";
//     cin >> growthA >> growthB;

//     // Convert percentages to decimal form
//     growthA = growthA / 100;
//     growthB = growthB / 100;

//     int years = 0;

//     // Loop until Town A's population is greater than or equal to Town B's population
//     while (popA < popB)
//     {
//         // Update populations for each year
//         popA += popA * growthA;
//         popB += popB * growthB;
//         years++;
//     }

//     // Output results
//     cout << "The population of Town A will exceed or equal the population of Town B after " << years << " years." << endl;
//     cout << "Final population of Town A: " << popA << endl;
//     cout << "Final population of Town B: " << popB << endl;

//     return 0;
// }

// Question 5:

// ANSWER:
// int main()
// {
//     using namespace std;

//     double approximate = 2;
//     int n, denominator;
//     cout << "Enter a value of n to approximate the value of e: " << endl;
//     cin >> n;
//     denominator = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         denominator *= i;
//         double num = 1.0 / denominator;
//         approximate += num;
//     }
//     cout << "The approximate value of e when n is equal to " << n << " is " << approximate;
//     return 0;
// }

// Question 6
// Note: String characters can be accessed by using index numbers.
// i.e. if string str = “Hello”, then str[0] is H, str[1] is e, str[2] is l, ….
// Hint: include <string> to use str.length() function to get string length)

// ANSWER
// using namespace std;
// bool isPalindrome(string str);

// int main()
// {
//     bool test1 = isPalindrome("a");
//     bool test2 = isPalindrome("mom");
//     bool test3 = isPalindrome("cat");
//     cout << "Test 1: " << test1 << endl;
//     cout << "Test 2: " << test2 << endl;
//     cout << "Test 3: " << test3 << endl;
//     return 0;
// }

// bool isPalindrome(string str)
// {
//     if (str.length() == 1)
//         return true;
//     for (int i = 0; i < str.length() / 2; i++)
//     {
//         char leftChar = str[i];
//         char rightChar = str[str.length() - i - 1];
//         if (leftChar != rightChar)
//             return false;
//     }
//     return true;
// }

// Question 7
// Write a function, reverseDigit, that takes an integer as a parameter and changes the number
// with its digits reversed. For example, the value of reverseDigit(12345) is 54321;
// the value of reverseDigit(5600) is 65; the value of reverseDigit(7008) is 8007;
// and the value of reverseDigit(-532) is -235. Function does not return a value. It changes the actual parameter

// ANSWER

// using namespace std;
// void reverseDigit(int &num);

// int main()
// {
//     int test1 = 100;
//     int test2 = -307;
//     int test3 = 1;
//     cout << "Prior to the reverseDigit function call, the values are: " << test1 << ", " << test2 << " and " << test3 << endl;
//     reverseDigit(test1);
//     reverseDigit(test2);
//     reverseDigit(test3);
//     cout << "After the execution of the function call, the values are: " << test1 << ", " << test2 << " and " << test3 << endl;
// }

// void reverseDigit(int &num)
// {
//     // Make the number positive if it's negative
//     // However if it is positive then make note of it
//     int is_negative = num < 0;
//     num = abs(num);

//     // Loop to reverse the digits
//     // once num = 0 then we know that we have no more digits to look at
//     int reversed_num = 0;
//     while (num != 0)
//     {
//         // Extract last digit and add it to reversed_num
//         reversed_num = reversed_num * 10 + num % 10;
//         // eliminate the last digit of num
//         num /= 10;
//     }

//     if (is_negative)
//     {
//         reversed_num = -reversed_num;
//     }

//     num = reversed_num;
// }

// practice
// using namespace std;
// void funcOne(int &x);
// void funcTwo(int x);
// int main()
// {
//     int num = 2;
//     int num2 = 2;
//     // refrence parameter function call:
//     cout << "Prior to using funcOne, num = " << num << endl;
//     funcOne(num);
//     cout << "After using funcOne, num = " << num << endl;
//     // value parameter function call
//     cout << "Prior to using funcTwo, num = " << num2 << endl;
//     funcTwo(num2);
//     cout << "After using funcTwo, num = " << num2 << endl;
//     return 0;
// }

// void funcOne(int &x)
// {
//     x = x * 2;
//     return;
// }
// void funcTwo(int x)
// {
//     x = x * 2;
// }