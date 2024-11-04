#include "examples.h"

//tail recursion
//     print numbers in reverse order 
//     where starting value is 9
//     call to 'self' is last
void example1(int n) {
    if (n >= 1) {
        cout << n << " ";
        example1(n - 1);
    }
}

//head recursion
//     print numbers in order 
//     where starting value is 9
//     call to 'self' is first
void example2(int n) {
    if (n >= 1) {
        example2(n - 1);
        cout << n << " ";
    }
}

//head recursion
//     print a tree
//     call to 'self' is first
void example3(int n) {
    if (n > 1)
        example3(n - 2);
    for (int i = 0; i < (9 - n / 2); i++)
        cout << " ";
    for (int i = 0; i < n; i++)
        cout << "*";
    cout << endl;
}

//factorial: n! = n*(n-1)!
int factorial(int n) {
    if (n == 0 || n == 1)         //base case
        return 1;
    cout << n << " ";
    return n * factorial(n - 1);
}

//print an integer backwards using tail recursion
void example4(int n) {
    if (n < 10)      //base case
        cout << n;
    else {
        cout << (n % 10) << " ";
        example4(n / 10);
    }
}

//fibonacci sum at n = n-2 + n-1
int fibonacci(int n) {
    // 1,1,2,3,5,8,13,21,34..
    if (n <= 1)
        return n;
    return fibonacci(n - 2) + fibonacci(n - 1);
}

// use recursion to eliminate duplicate 
// characters in a string
string stringClean(string str) {
    if (str.length() < 2)
        return str;

    if (str.substr(0, 1) == str.substr(1, 1))
        return stringClean(str.substr(1));

    else
        return str.substr(0, 1) + stringClean(str.substr(1));
}

// use recursion to count abc in a string 
// characters in a string
int countAbc(string str) {
    if (str.length() < 3)
        return 0;
    if (str.substr(0, 3) == "abc")
        return 1 + countAbc(str.substr(3));
    return countAbc(str.substr(1));
}

// use a loop to find greatest common divisor
int gcd1(int a, int b) {
    int x = 0;
    while (b > 0) {
        x += 1;
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    cout << "GCD1 LOOP COUNT = " << x << ". GCD = ";
    return a;
}

// use recursion to find greatest common divisor
// this is the Euclidean Algorithm for finding gcd
int gcd2(int a, int b, int count) {
    count += 1;

    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b == 0) {
        cout << "GCD1 RECURSIVE COUNT = "
            << count << ". GCD = ";
        return a;
    }
    int r = a % b;
    return gcd2(b, r, count);
}

//use recursion to find the number of 
//bunny ears w/o loops or multiplication
int bunnyPart1(int c) {
    //base case
 
    //recursive call
     

    return -1;
}

//use recursion to find the number of 
//bunny ears w/ special conditions
int bunnyPart2(int c) {
    //base case

    //recursive call

    return -1;
}

//Only review the following if there is time
//geeksforgeeks tree traversal (preOrder)
struct node {
    int data;
    node* left;
    node* right;
};
node* newNode(int d) {
    node* newN = new node;
    newN->data = d;
    newN->left = nullptr;
    newN->right = nullptr;
    return newN;
}

//Only review the following if there is time
//geeksforgeeks tree traversal (preOrder)
//this is one example of a depth first search (DFS)

void printPreOrder(struct node* n) {
    if (n == nullptr)
        return;
    //print node data
    cout << n->data << " ";
    printPreOrder(n->left);  //traverse left side
    printPreOrder(n->right); //traverse right side
}

//Only review the following if there is time
//geeksforgeeks tree traversal (postOrder)
//this is also an example of a depth first search (DFS)

void printPostOrder(struct node* n) {
    if (n == nullptr)
        return;

    printPostOrder(n->left);  //traverse left side
    printPostOrder(n->right); //traverse right side
    //print node data
    cout << n->data << " ";
}
//Only review the following if there is time
//geeksforgeeks tree traversal (postOrder)
//this is also an example of a depth first search (DFS)

void printInOrder(struct node* n) {
    if (n == nullptr)
        return;

    printInOrder(n->left);  //traverse left side
    //print node data
    cout << n->data << " ";
    printInOrder(n->right); //traverse right side
}
void printBinaryTree() {
    //create 'tree'
    //         1
    //     2      3
    //   4   5       6
    struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->right = newNode(6);
    cout << "\nBinary Tree: PreOrder\n";
    printPreOrder(root);
    cout << "\nBinary Tree: PostOrder\n";
    printPostOrder(root);
    cout << "\nBinary Tree: InOrder\n";
    printInOrder(root);
}

void printVector(vector<string> s) {
    for (auto wrd : s)
        cout << left << setw(10) << wrd;
    cout << endl;
}

void printVector(vector<int> s) {
    for (auto wrd : s)
        cout << right << setw(5) << wrd;
    cout << endl;
}


// Function to print permutations of the string
// This function takes two parameters:
// 1. String
// 2. Starting index of the string.

void permute1(vector<string>& list, int left, int right) {
    // Base case
    if (left == right) {
        cout << "\t";
        printVector(list);
    }
    else {
        for (int i = left; i <= right; ++i) {
            swap(list[left], list[i]);
            permute1(list, left + 1, right);
            swap(list[left], list[i]);
        }
    }
}

void permute2(vector<int> listOld, vector<int> listNew) {
    // Base case
    vector<int>::iterator it;
    int hold;

    if (listOld.size() == 0) {
        printVector(listNew);
    }
    else {
        for (int i = 0; i < listOld.size(); ++i) {
            hold = listOld[i];
            it = listOld.begin() + i;
            listOld.erase(it);
            listNew.push_back(hold);

            permute2(listOld, listNew);

            it = listOld.begin() + i;
            listOld.insert(it, hold);
            listNew.pop_back();


        }
    }
}

void permute3(vector<string>& s, int idx) {
    // Base case
    cout << "\n\tPERMUTE1 CURRENT INDEX: " << idx << " VALUE: " << s[idx] << " : \t";
    printVector(s);
    if (idx == s.size() - 1) {
        printVector(s);
    }
    else {
        for (int i = idx; i < s.size(); ++i) {
            swap(s[idx], s[i]);
            cout << "\t\t\tAfter swap 1: (" << s[idx] << ", " << s[i] << ") : \t";
            printVector(s);
            permute3(s, idx + 1);   // First idx+1 characters fixed
            swap(s[idx], s[i]);
            cout << "\t\t\tAfter swap 2: (" << s[idx] << ", " << s[i] << ") : \t";
            printVector(s);
        }
    }
}

/* Output every combination of items that fit
   in a shopping bag. Each recursive call moves
   one item into the shopping bag.
*/
void ShoppingBagCombinations(vector<Item> currBag,          // Bag contents
    vector<Item> remainingItems) { // Available items

    const unsigned int MAX_ITEMS_IN_SHOPPING_BAG = 3; // Max num items
    int bagValue;        // Cost of items in shopping bag
    Item tmpGroceryItem; // Grocery item to add to bag
    unsigned int i;      // Loop index

    if (currBag.size() == MAX_ITEMS_IN_SHOPPING_BAG) { // Base case: Shopping bag full
        bagValue = 0;
        for (i = 0; i < currBag.size(); ++i) {
            bagValue += currBag.at(i).priceDollars;
            cout << currBag.at(i).itemName << "  ";
        }
        cout << "= $" << bagValue << endl;
    }
    else {                                              // Recursive case: move one
        for (i = 0; i < remainingItems.size(); ++i) {     // item to bag
            // Move item into bag
            tmpGroceryItem = remainingItems.at(i);
            remainingItems.erase(remainingItems.begin() + i);
            currBag.push_back(tmpGroceryItem);

            ShoppingBagCombinations(currBag, remainingItems);

            // Take item out of bag
            remainingItems.insert(remainingItems.begin() + i, tmpGroceryItem);
            currBag.pop_back();
        }
    }
}