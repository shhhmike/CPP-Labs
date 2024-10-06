#include <iomanip>
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

bool isDivisibleBy(int n, int d);
bool isPrime(int n);
int nextPrime(int n);
int countPrimes(int a, int b);
bool isTwinPrime(int n);
int nextTwinPrime(int n);
int largestTwinPrime(int a, int b);

int main()
{
    // Testing for Task A
    bool test1 = isDivisibleBy(100, 25);
    bool test2 = isDivisibleBy(35, 17);
    cout << "Task A testing: n = 100 and d = 25 is " << ((test1 == 1) ? "True" : "False") << endl;
    cout << "Task A testing: n = 35 and d = 17 is " << ((test2 == 1) ? "True" : "False") << endl;
    // Testing for Task B
    bool test3 = isPrime(7);
    bool test4 = isPrime(14);
    cout << "Task B testing n = 7 is " << ((test3 == 1) ? "True" : "False") << endl;
    cout << "Task B testing n = 14 is " << ((test4 == 1) ? "True" : "False") << endl;
}
// Task A:
// If n is divisible by d , the function should return true , otherwise return false .
bool isDivisibleBy(int n, int d)
{
    return (n % d) == 0;
}
// Task B:
// The function should return true if n is a prime, otherwise return false
bool isPrime(int n)
{
    // If the number is less than two, or is an even number then we can automatically return false
    if (n < 2)
        return false;
    else if (n == 2)
        return true;
    else if (n % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        // if we find another number that n is divisble by then n is not a prime number
        if (isDivisibleBy(n, i))
        {
            return false;
        }
    }
    // if we did not find another number then n is in fact a prime number.
    return true;
}
// Task C:
// 'Bertrand's theorem' states that givrn a number n > 1, we are guaranteed at least one prime number
// such that n < p < 2 * n. (I had to search this up)
int nextPrime(int n)
{
    int temp = n + 1;
    bool found = false;
    while (!found && temp < 2 * n)
    {
        if (isPrime(temp))
            found = true;
        else
            temp += 1;
    }
    return temp;
}
// Task D:
// returns the number of prime numbers in the interval a ≤ x ≤ b. Change the main function to test the new code.
int countPrimes(int a, int b)
{
    int result = 0;
    // Special case for 2 (the only even prime number)
    if (a <= 2 && b >= 2)
        result += 1;

    // If 'a' is even, start from 'a + 1' (the next odd number)
    if (a % 2 == 0)
        a += 1;

    // Loop through odd numbers only
    for (int i = a; i <= b; i += 2)
    {
        if (isPrime(i))
            result += 1;
    }

    return result;
}
// Task E:
// A prime number N is called a twin prime if either N-2 or N+2 (or both of them) is also a prime.
// For example, a prime 17 is a twin prime, because 17+2 = 19 is a prime as well.
// The first few twin primes are: 3, 5, 7, 11, 13, 17, 19, 29, 31
bool isTwinPrime(int n)
{
    // if n == 2 or less then OR if it is even then it cant be a 'twin' prime, because
    // if n is an even number, then n + 2 and n - 2 will just be another even number so we know
    // that if n is even in general, it can never be a prime number let alone a 'twin' prime.
    // Therefore we need to only be looking at odd values.
    if (n <= 2 || !isPrime(n))
        return false;
    return (isPrime(n - 2) || isPrime(n + 2));
}
// Task F
// returns the smallest twin prime greater than n
int nextTwinPrime(int n)
{
    // in order for a twin prime to occur, n must be odd. the lowest possible twin
    // prime that can occur is 3 because 3 + 2 = 5 which is also a prime.
    // if n is even then adjust it
    n = (n % 2 == 0) ? n + 1 : n + 2;
    bool found = false;
    while (!found)
    {
        if (isTwinPrime(n))
            found = true;
        else
            n += 2;
    }
    return n;
}
// Task G
// returns the largest twin prime in the range a ≤ N ≤ b.
// If there is no twin primes in range, then return -1
int largestTwinPrime(int a, int b)
{
    int num = -1;
    // Start with an odd number, handle the case where a is even
    if (a % 2 == 0)
        a += 1;
    for (int i = b; i >= a; i -= 2)
    {
        if (isTwinPrime(i))
        {
            num = i;
            // We found the largest twin prime, so we can stop
            break;
        }
    }
    return num;
}
