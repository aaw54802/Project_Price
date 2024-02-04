// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//The Program takes the users original price and then combines it with the mark up and the sales tax
//This is to find a new final price. Then all four varibles are displayed in a new window.

#include <iostream>

using namespace std;

int main()
{
    double originPrice, markUp, finalPrice;
    double tax, salesTax_perc, markUp_perc;
    
    cout << "||Enter Original Price of item: ||";
    cin >> originPrice;

    markUp = .60;
    tax = .0525;
    finalPrice = 0;

    finalPrice = originPrice + (originPrice * markUp);
    finalPrice = finalPrice + (finalPrice * tax);
    markUp_perc = markUp * 100;
    salesTax_perc = tax * 100;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "The Original Price was " << originPrice << "\n";
    cout << "The Mark Up was " << markUp_perc << "%.\n";
    cout << "The Sales Tax was " << salesTax_perc << "%\n";
    cout << "The Final Price is " << finalPrice << "\n";

    return 0;
}

