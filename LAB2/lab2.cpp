// LAB 2
// Michael Liz

// Q1) Suppose x, y, and z are int variables and ch is a char variable. Consider the following input: 78 86 18 #42 &
// What value (if any) is assigned to x, y, z, and ch after each of the following statements executes?
// (Use the same input without changing the order for each statement and run each statement separately)

// 78 86 18 #42 &

// a) cin >> x >> y >> z >> ch;
// ANSWER: After this is executed, x will equal 78, y will equal 86, z will equal 18 and ch will contain #
//
// b) cin >> ch >> x >> y >> z;
// ANSWER: After this is executed, x will equal 8, y will equal 86, z will equal 18 and ch will contain 7

// c) cin >> x;
//    cin.get(ch);
//    cin >> y >> z;
//    ANSWER: After this is executed, x will equal 78, y will equal 86, z will equal 18 and ch will contain ' '

//  d) cin >> x >> ch >> y >> z;
//     cin.get(ch);
//     ANSWER: After this is executed, x will equal 78, y will equal 6, z will equal 18 and ch will contain ' '

// e) cin >> x >> y >> z;
//    ANSWER: After this is executed, x will equal 78, y will equal 86, z will equal 18 and ch will not be assigned

// #include <iostream>
// int main()
// {
//     using namespace std;
//     int x, y, z;
//     char ch;

//     cout << "Enter the stream of data (x y z ch): ";

//     // logic
//     cin >> x >> y >> z;

//     // print the results
//     cout << "x is: " << x << " y is: " << y << " z is: " << z << " ch is: " << ch << endl;

//     return 0;
// }

// 2)
// Consider the follwoing incomplete c++ program:

// #include <iostream>
// int main() {
//     ...
// }

// a) Write a statement that includes the header files fstream, string, and iomanip in this program.

// ANSWER:

// #include <iostream>
// #include <fstream>
// #include <string>
// #include <iomanip>
// int main() {
//     using namespace std;
// }

// b) Write statements that declare inFile to be an ifstream variable and outFile to be an ofstream variable.

// ANSWER:
// #include <fstream>
// int main() {
//     using namespace std;
//     ifstream inFile;
//     ofstream output;
//     ...
// }

// c) The program will read data from the file inData.txt and write output to the file outData.txt. Write statements to open both files, associate inFile with inData.txt, and associate outFile with outData.txt.

// ANSWER:

//  #include <fstream>
//  int main() {
//     using namespace std;
//     ifstream inFile;
//     ofstream output;
//
//     inFile.open("inData.txt");
//     ouput.open("outData.txt");
//     ...
// }

// d) Suppose that the file inData.txt contains the following data:
// Gisselle Robinson Accounting
// 5600 5 30
// 75 1.5

// The first line contains a person’s first name, last name, and the department the person works in.
// In the second line, the first number represents the monthly gross salary, the bonus (as a percent), and the taxes (as a percent).
// The third line contains the distance traveled and the traveling time.
// The fourth line contains the number of coffee cups sold and the cost of each coffee cup.

// Write statements so that after the program executes, the contents of the file outData.txt are as shown below. If necessary, declare additional variables. Your statements should be general enough so that if the content of the input file changes and the program is run again (without editing and recompiling), it outputs the appropriate results.

// Name: Gisselle Robinson, Department: Accounting
// Monthly Gross Salary: $5600.00, Monthly Bonus: 5.00%, Taxes: 30.00%
// Paycheck: $4116.00

// Distance Traveled: 450.00 miles, Traveling Time: 9.00 hours
// Average Speed: 50.00 miles per hour

// Number of Coffee Cups Sold: 75, Cost: $1.50 per cup
// Sales Amount = $112.50

// ANSWER:

// #include <iostream>
// #include <fstream>
// #include <string>
// #include <iomanip>
// int main() {
//     using namespace std;
//     ifstream inFile;
//     ofstream output;
//     string firstName, lastName, department;
//     double bSalary, bonus, taxes, distance, time, numCups, costCups;
//     inFile.open("inData.txt");
//     output.open("outData.txt");
//     inFile >> firstName >> lastName >> department;
//     infFile >> bSalary >> bonus >> taxes;
//     inFlie >> distance >> time;
//     inFile >> numCups >> costCups;
//     // first line
//     output << "Name: " << firstName << " " << lastName << ", Department: "
//            << department << endl;
//     // second line
//     output << "Monthly Gross Salary: $" << bSalary << ", Monthly Bonus: "
//            << bonus << "%, Taxes: " << taxes << "%" << endl;
//     // third line
//     output << "Paycheck: $" << bSalary * (1 + bonus / 100) * (1 - taxes / 100) << endl;
//     // fourth line
//     output << "Distance Traveled: " << distance << " miles, Traveling Time: "
//            << time << " hours" << endl;
//     // fifth line
//     output << "Average Speed: " << distance / time << " miles per hour" << endl;
//     // sixth line
//     output << "Number of Coffee Cups Sold: " << numCups << ", Cost: $" << costCups
//            << " per cup" << endl;
//     inFile.close();
//     output.close();
// }

// QUESTION 3) Write a program that prompts the user to enter the weight of a person in kilograms and outputs
// the equivalent weight in pounds. Output both the weights rounded to two decimal places. (Note that ‍‍1‍ kilogram = 2.2‍ pounds)
// Format your output with two decimal places.

// ANSWER:

// #include <iostream>
// #include <iomanip>
// int main() {
//     using namespace std;
//     double userWeightKG;
//     const double conversionFactor = 2.2;

//     // Prompt the user to enter their weight in kilograms
//     cout << "Please enter your weight in kilograms: ";
//     cin >> userWeightKG;

//     // Convert the weight from kilograms to pounds
//     double convertedWeight = userWeightKG * conversionFactor;

//     // Set the precision for output
//     cout << fixed << setprecision(2);

//     // Output the weight in kilograms and pounds, rounded to two decimal places
//     cout << "Weight in kilograms: " << userWeightKG << " kg" << endl;
//     cout << "Equivalent weight in pounds: " << convertedWeight << " lbs" << endl;

//     return 0;
// }

// 4) Paula and Danny want to plant evergreen trees along the back side of their yard.
//    They do not want to have an excessive number of trees. Write a program that prompts
//    the user to input the following:

//    a) The length of the yard
//    b) The radius of a fully grown tree
//    c) The required space between fully grown trees

//    The program outputs the number of trees that can be planted in the yard and the total space that
//    will be occupied by the fully grown trees.
//   (The area of a tree is computed the same as an area of a circle)

// ANSWER:

// #include <iostream>
// #include <iomanip>
// int main() {
//     using namespace std;

//     const double PI = 3.14159;

//     double yardLength;
//     double treeRadius;
//     double spaceBetweenTrees;

//     // Prompt the user for input
//     cout << "Enter the length of the yard (in meters): ";
//     cin >> yardLength;
//     cout << "Enter the radius of a fully grown tree (in meters): ";
//     cin >> treeRadius;
//     cout << "Enter the required space between fully grown trees (in meters): ";
//     cin >> spaceBetweenTrees;

//     // Calculate the area of a fully grown tree
//     double treeArea = PI * treeRadius * treeRadius;

//     // Calculate the total space required per tree including spacing
//     double totalSpacePerTree = (2 * treeRadius) + spaceBetweenTrees;

//     // Calculate the number of trees that can be planted
//     int numberOfTrees = static_cast<int>(yardLength / totalSpacePerTree);

//     // Calculate the total space occupied by the trees
//     double totalOccupiedSpace = numberOfTrees * totalSpacePerTree;

//     // Output the results
//     cout << fixed << setprecision(2);
//     cout << "Number of trees that can be planted: " << numberOfTrees << endl;
//     cout << "Total space occupied by the trees: " << totalOccupiedSpace << " meters" << endl;
//     cout << "Area of each fully grown tree: " << treeArea << " square meters" << endl;

//     return 0;
// }
