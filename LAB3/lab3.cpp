#include <iomanip>
#include <iostream>

// Question 1:
// 1) Write a program that prompts the user to input an integer between 0 and 35.
// If the number is less than or equal to 9, the program should output the number;
// otherwise, it should output A for 10, B for 11, C for 12,..., and Z for 35.
// (Hint: Use the cast operator, static_cast<char>(), for numbers >= 10.)

// ANSWER
// int main()
// {
//     using namespace std;

//     int num;
//     cout << "Enter a number between 0 and 35: ";
//     cin >> num;
//     bool condition = (num <= 9);
//     if (condition == 1)
//         cout << num;
//     else
//         cout << static_cast<char>('A' + (num - 10)) << endl;
// }

// Question 2:
// The cost of renting a room at a hotel is, say $100.00 per night.
// For special occasions, such as a wedding or conference, the hotel offers a special discount as follows:
// If the number of rooms booked is at least 10, the discount is 10%; at least 20, the discount is 20%;
// and at least 30, the discount is 30%. Also if rooms are booked for at least three days,
// then there is an additional 5% discount.
// Write a program that prompts the user to enter the cost of
// renting one room, the number of rooms booked, the number of days the rooms are booked, and the sales tax
// (as a percent).
// The program outputs the cost of renting one room, the discount on each room as a percent,
// the number of rooms booked, the number of days the rooms are booked, the total cost of the rooms, the sales tax,
// and the total billing amount. Your program must use appropriate named constants to store special values
// such as various discounts.

// ANSWER:

// #include <iostream>
// #include <iomanip>

// int main()
// {
//     using namespace std;

//     // Cost of one room in dollars
//     const int roomCost = 100;

//     int numBooked, daysBooked, salesTax;

//     // input number of rooms, number of days, and sales tax
//     cout << "Enter the number of rooms booked, number of days the rooms are booked, and the sales tax (as a percentage): ";
//     cin >> numBooked >> daysBooked >> salesTax;

//     // determine if additional discount applies
//     bool addDiscount = (daysBooked >= 3);

//     // determine the special discount based on the number of roo25ms booked
//     int specDiscount;
//     if (numBooked >= 30)
//     {
//         specDiscount = 30;
//     }
//     else if (numBooked >= 20)
//     {
//         specDiscount = 20;
//     }
//     else if (numBooked >= 10)
//     {
//         specDiscount = 10;
//     }
//     else
//     {
//         specDiscount = 0;
//     }

//     // Total discount
//     int totalDiscount = specDiscount + (addDiscount ? 5 : 0);

//     // Calculate the total cost before tax and discount
//     int costBeforeDisc = roomCost * numBooked * daysBooked;

//     // Apply the total discount
//     double discountAmount = costBeforeDisc * (totalDiscount / 100.0);
//     double costAfterDiscount = costBeforeDisc - discountAmount;

//     // Calculate sales tax
//     double taxAmount = costAfterDiscount * (salesTax / 100.0);

//     // Total billing amount
//     double totalBilling = costAfterDiscount + taxAmount;

//     // Output
//     cout << fixed << setprecision(2);
//     cout << "The base amount for renting one room is: $" << roomCost << endl;
//     cout << "The discount on each room will be: " << totalDiscount << "%" << endl;
//     cout << "Total rooms booked: " << numBooked << endl;
//     cout << "Days they are booked for: " << daysBooked << endl;
//     cout << "Total cost of the rooms (after discount): $" << costAfterDiscount << endl;
//     cout << "Sales tax: " << salesTax << "%" << endl;
//     cout << "The total billing amount is: $" << totalBilling << endl;

//     return 0;
// }

// Question 3:
// One way to determine how healthy a person is by measuring the body fat of the person.
// Write a program that calculates the body fat of a person

// ANSWER:

// #include <iostream>
// #include <iomanip>

// int main()
// {
//     using namespace std;

//     int num;
//     cout << "Enter 0 if you are Male or 1 if you are Female: ";
//     cin >> num;
//     // if this variable is in fact == to 1 then isFemale will contain a 1 indicating that the user
//     // is a female, however if the condition is not true then 0 will be assigned instead indictaing that
//     // user is a male
//     bool isFemale = (num == 1);

//     double weight, wrist, bodyFat, fatPercent, bmi;

//     // Common inputs for both male and female
//     cout << "Please enter your weight (in lbs) and wrist measurement (in inches): ";
//     cin >> weight >> wrist;

//     if (isFemale)
//     {
//         // Additional inputs for females
//         double waist, hip, forearm;
//         cout << "Now enter your waist, hip, and forearm measurements: ";
//         cin >> waist >> hip >> forearm;

//         // Calculations
//         double a1 = (weight * 0.732) + 8.987;
//         double a2 = wrist / 3.140;
//         double a3 = waist * 0.157;
//         double a4 = hip * 0.249;
//         double a5 = forearm * 0.434;
//         bmi = a1 + a2 - a3 - a4 + a5;
//     }
//     else
//     {
//         // Calculations for males
//         double a1 = (weight * 1.082) + 94.42;
//         double a2 = wrist * 4.15;
//         bmi = a1 - a2;
//     }

//     // Calculate body fat and body fat percentage
//     bodyFat = weight - bmi;
//     fatPercent = (bodyFat * 100) / weight;

//     // Output the results
//     cout << fixed << setprecision(2);
//     string gender = isFemale ? "Female" : "Male";
//     cout << "Gender: " << gender << endl
//          << "Weight: " << weight << " lbs" << endl
//          << "Body Fat Percentage: " << fatPercent << "%" << endl;

//     return 0;
// }
