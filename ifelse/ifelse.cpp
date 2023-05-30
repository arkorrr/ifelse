#include <iostream>
using namespace std;

int main()
{
    int number;     //task1
    cout << "enter number: ";
    cin >> number;
    if (number % 2 == 0) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    int a,      //task2
        b,
        c;
    cout << "enter number1: ";
    cin >> a;
    cout << "enter number2: ";
    cin >> b;
    cout << "enter number3: ";
    cin >> c;
    if (a > b && a > c) {
        cout << a;
    }
    else if (b > a && b > c) {
        cout << b;
    }
    else if (c > b && c > a) {
        cout << c;
    }

    int number;         //task3
    cout << "enter number: ";
    cin >> number;
    if (number > 0) {
        cout << "positive";
    }
    else if (number == 0) {
        cout << "zero";
    }
    else if (number < 0) {
        cout << "negative";
    }

    double num1,        //task4 
           num2;
    cout << "enter a: ";
    cin >> num1;
    cout << "enter b: ";
    cin >> num2;
    cout << "functions of calculator:(a + b) or (a - b) or (a * b) or (a / b) or (a % b): " << endl;
    cout << "enter operator, for example ('+', '-', '*', '/', '%': ";
    string operation;
    cin >> operation;
    if (operation == "+") {
        cout << num1 + num2;
    }
    else if (operation == "-") {
        cout << num1 - num2;
    }
    else if (operation == "*") {
        cout << num1 * num2;
    }
    else if (operation == "/" && num1 != 0 && num2 != 0) {
        cout << num1 / num2;
    }
    else if (operation == "%") {
        cout << (int)num1 % (int)num2;
    }

    char symbol; //task5
    cout << "enter a symbol: ";
    cin >> symbol;
    if (isdigit(symbol)) {
        cout << "digit";
    }
    else if (ispunct(symbol)) {
        cout << "punct";
    }
    else if (isalpha(symbol)) {
        cout << "symbol";
    }

    int n,        //task6
        m,
        d;
    cout << "enter number1, range from n to m: "; //start of range
    cin >> n;
    cout << "enter number2, range from n to m: "; //end of range
    cin >> m;
    cout << "enter number: ";
    cin >> d;
    if (d > n && d <= m) {
        cout << "in the range";
    }
    else {
        cout << "not in the range";
    }

    int multiple_number1,      //task7
        multiple_number2;
    cout << "enter number1: ";
    cin >> multiple_number1;
    cout << "enter number2: ";
    cin >> multiple_number2;
    if (multiple_number1 % multiple_number2 == 0) {
        cout << "yes";
    }
    else {
        cout << "no";
    }

    int multiple; //task8
    cout << "enter number: ";
    cin >> multiple;
    if (multiple % 3 == 0 && multiple % 5 == 0 && multiple % 7 == 0) {
        cout << "yes";
    }
    else {
        cout << "no";
    }

    int module;     //task9
    cout << "enter number: ";
    cin >> module;
    cout << abs(module);
    
    string numbers;     //task10
    cout << "enter numbers: ";
    cin >> numbers;
    cout << numbers.length();

    int palindrom, //task11
        first,
        second,
        fourth,
        fifth;
    cout << "enter number: ";
    cin >> palindrom;
    first = palindrom / 10000;
    second = (palindrom / 1000) % 10;
    fourth = (palindrom / 10) % 10;
    fifth = palindrom % 10;
    if (first == fifth && second == fourth) {
        cout << "yes";
    }
    else {
        cout << "no";
    }

    int x,        //task12
    y,
    length1,
    length2,
    width1,
    width2;

    cout << "enter length1: ";
    cin >> length1;
    cout << "enter length2: ";
    cin >> length2;
    cout << "enter width1: ";
    cin >> width1;
    cout << "enter width2: ";
    cin >> width2;
    cout << "enter x: ";
    cin >> x;
    cout << "enter y: ";
    cin >> y;
    if (x > length1 && x <= length2 && y > width1 && y <= width2) {
        cout << "yes";
    }
    else {
        cout << "no";
    }

    int q = 8,      //task13
        w = 2,
        e = 6,
        r = 7,
        max;
    max = q > w ? q : w;
    max = q > e ? q : e;
    max = q > r ? q : r;

    cout << "max number = " << max;
    
}