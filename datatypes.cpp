#include<iostream>
#include<string>
using namespace std;

int main() {
    // Integer number
    int intNum;
    cout << "Enter an Integer number: " << endl;
    cin >> intNum;
    cout << "The Integer is " << intNum << " and its size is " << sizeof(intNum) << " bytes.\n";

    // Float number
    float floatNum;
    cout << "Enter a Float number: " << endl;
    cin >> floatNum;
    cout << "The Float is " << floatNum << " and its size is " << sizeof(floatNum) << " bytes.\n";

    // Double number
    double doubleNum;
    cout << "Enter a Double number: " << endl;
    cin >> doubleNum;
    cout << "The Double is " << doubleNum << " and its size is " << sizeof(doubleNum) << " bytes.\n";

    // Character
    char character;
    cout << "Enter a character: " << endl;
    cin >> character;
    cout << "The Character is " << character << " and its size is " << sizeof(character) << " bytes.\n";

    // String
    string text;
    cout << "Enter a string: " << endl;
    cin >> text;
    cout << "The String is " << text << " and its size is " << sizeof(text) << " bytes.\n";

    // Boolean
    bool booleanValue;
    cout << "Enter a Boolean value (i.e. 1 for True or 0 for False): ";
    cin >> booleanValue;
    cout << "The Boolean value is " << booleanValue << " and its size is " << sizeof(booleanValue) << " bytes.\n";

    // Short Integer
    short shortNum;
    cout << "Enter a short integer number: " << endl;
    cin >> shortNum;
    cout << "The Short Integer is " << shortNum << " and its size is " << sizeof(shortNum) << " bytes.\n";

    // Long Integer
    long longNum;
    cout << "Enter a long integer number: " << endl;
    cin >> longNum;
    cout << "The Long Integer is " << longNum << " and its size is " << sizeof(longNum) << " bytes.\n";

    return 0;
}
