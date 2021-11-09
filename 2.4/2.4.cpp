// 2.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int agentnumber;
    cout << "Input agent number!\n";
    cin >> agentnumber;

    switch (agentnumber) 
    {
    case 7:
        cout << "James Bond";
        break;
    case 117:
        cout << "John";
        break;
    case 616:
        cout << "Natasha Romanoff";
        break;
    case 700:
        cout << "Dnob Semaj";
        break;
    default:
        cout << "Agent number not found";
    }

    cout << "\nProgram end";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
