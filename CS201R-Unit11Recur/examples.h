#pragma once
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void example1(int n);  //tail recursion
void example2(int n);  //head recursion 
void example3(int n);  //head recursion
void example4(int n);

int factorial(int n);  //n! = n*(n-1)!

int fibonacci(int n);  //sum at n = n-2 + n-1


// use recursion to eliminate duplicate 
// characters in a string
string stringClean(string str);

// use recursion to count abc in a string 
// characters in a string
int countAbc(string str);

// use a loop to find greatest common divisor
int gcd1(int a, int b);
int gcd2(int a, int b, int count);

int bunnyPart1(int c);
int bunnyPart2(int c);

void printBinaryTree();

// permutations

class Item {
public:
    string itemName;  // Name of item
    int priceDollars; // Price of item
};



void printVector(vector<string> s);
void printVector(vector<int> s);
void permute1(vector<string>& list, int left, int right);
void permute2(vector<int> listOld, vector<int> listNew);
void permute3(vector<string>& s, int idx);
void ShoppingBagCombinations(vector<Item> currBag, vector<Item> remainingItems);
