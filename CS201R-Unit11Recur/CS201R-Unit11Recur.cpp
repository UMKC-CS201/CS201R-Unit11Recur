// CS201R-Unit11Recur.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include  "examples.h"
 
using namespace std;

int main()
{
    cout << "Example 1: Tail Recursion\n\t";
    example1(9);

    cout << "\n\nExample 2: Head Recursion\n\t";
    example2(9);

    cout << "\n\nExample 3: Head Recursion\n";
    example3(9);

    /*

    cout << "\n\nExample 4: Factorial\n\t";
    cout << factorial(6) << endl;

    cout << "\n\nExample 5: Backwards Print\n\t";
    example4(765432);

    cout << "\n\nExample 6: Fibonacci\n";
    cout << "\t Fibonacci of 6 = " << fibonacci(6) << endl;
    cout << "\t Fibonacci of 15 = " << fibonacci(15) << endl;
    cout << "\t Fibonacci of 25 = " << fibonacci(25) << endl;
    //cout << "\t Fibonacci of 35 = "<< fibonacci(35) << endl;
    //cout << "\t Fibonacci of 45 = "<< fibonacci(45) << endl;

    cout << "\n\nExample 7: String Clean\n\t";
    cout << stringClean("aabbbcdddfffg") << endl;

    cout << "\n\nExample 8: Count ABCs\n\t";
    cout << countAbc("abcabcaaabcabccabbcabcabcaaabc") << endl;
 
    cout << "\n\nExample 9a: GCD: Looping\n\t";
    cout << gcd1(153200,90)<< endl;

    cout << "\n\nExample 9b: GCD: Recursion\n\t";
    cout << gcd2(153200,90,0)<< endl;

    //YOUR TURN
    //output the number of bunny ears using recursion
    //NO LOOPS OR MULTIPLICATION CAN BE USED
    cout << "\n\nYOU DO THIS PART1: BUNNY EARS\n\t";
    cout << bunnyPart1(15) << endl;

    //
    //The bunnies standing in a line, numbered 1, 2, ...
    //The even bunnies (2, 4, ..) have the normal 2 ears.
    //The odd bunnies (1, 3, ..) we'll say have 3 ears
    //Recursively return the number of "ears" in the
    //bunny line without loops or multiplication
    cout << "\n\nYOU DO THIS PART2: BUNNY EARS\n\t";
    cout << bunnyPart2(5) << endl;
    */
    /*
    cout << "\n\nBinary Trees\n";
    printBinaryTree();


    cout << "\n\nPERMUTATIONS 1\n";
    vector<string> wordList = {"A", "B", "C"};
    permute1(wordList, 0, 2);
    cout << endl << endl << endl;

    cout << "\n\nPERMUTATIONS 2\n";
    vector<int> numbList = { 1,2,3 };
    vector<int> numbListNew;
    permute2(numbList, numbListNew);

    cout << "\n\nPERMUTATIONS 3\n";
    wordList = { "A", "B", "C" };
    permute3(wordList, 0);
    cout << endl << endl << endl;


    cout << endl << endl << endl;
    */
    /*
    vector<Item> possibleItems(0); // Possible shopping items
    vector<Item> shoppingBag(0);   // Current shopping bag
    Item tmpGroceryItem;           // Temp item

    // Populate grocery with different items
    tmpGroceryItem.itemName = "Milk";
    tmpGroceryItem.priceDollars = 2;
    possibleItems.push_back(tmpGroceryItem);

    tmpGroceryItem.itemName = "Belt";
    tmpGroceryItem.priceDollars = 24;
    possibleItems.push_back(tmpGroceryItem);

    tmpGroceryItem.itemName = "Toys";
    tmpGroceryItem.priceDollars = 19;
    possibleItems.push_back(tmpGroceryItem);

    tmpGroceryItem.itemName = "Cups";
    tmpGroceryItem.priceDollars = 12;
    possibleItems.push_back(tmpGroceryItem);

    // Try different combinations of three items
    ShoppingBagCombinations(shoppingBag, possibleItems);
    */
    return 0;
}
 
