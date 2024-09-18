/*
TITLE: Chapter 3 Exercise 6 - Ingredient Adjuster
FILE NAME: Chapter3Ex6_DAngeloFrancis.cpp
PROGRAMMER: D'Angelo Francis
DATE: 9/18/2024
REQUIREMENTS: A cookie recipe calls for the following ingredients:

• 1.5 cups of sugar

• 1 cup of butter

• 2.75 cups of flour

The recipe produces 48 cookies with this amount of the ingredients. 
Write a program that asks the user how many cookies he or she wants to make, 
then displays the number of cups of each ingredient needed for the specified number of cookies.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //ingredients for 48 cookies
    const double sugarPerRecipe = 1.5;
    const double butterPerRecipe = 1;
    const double flourPerRecipe = 2.75;
    
    //custom amount of cookies
    int cookiesWanted;

    //user inputs how many cookies they want
    cout << "Enter how many cookies you would like to make: ";
    cin >> cookiesWanted;
    cout << endl;

    //using a ratio to adjust the amount of cookies based on user input
    double ratio = cookiesWanted / 48;

    //adjust ingredients for custom amount of cookies
    double sugarNeeded = sugarPerRecipe * ratio;
    double butterNeeded = butterPerRecipe * ratio;
    double flourNeeded = flourPerRecipe * ratio;

    //cups of ingredients needed for cookies
    cout << setprecision(3);
    cout << "Here are the ingredients you will need in order to make " << cookiesWanted << " cookies:" << endl;
    cout << "___________________________________________________________________" << endl << endl;
    cout << "- " << sugarNeeded << " cups of sugar" << endl;
    cout << "- " << butterNeeded << " cups of butter" << endl;
    cout << "- " << flourNeeded << " cups of flour" << endl;
    
    return 0;
}

