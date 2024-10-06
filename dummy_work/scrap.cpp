#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    using namespace std;

    string s;
    cout << "Enter a word: ";
    cin.ignore(1, 'o') >> s;
    cout << "The word that you entered was: " << s << endl;

    return 0;
}