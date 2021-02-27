/*
 * Name: Justin Salazar
 * Date: 2/25/21
 * Recursion2.cpp
 * Three recursive problems.
 * Add your code to the four functions given below.
 * Do not change any part of the function headers (name, parameters, or return type).
 * Do not change any part of the main.
 * Do not create any global or static variables.
 */

#include <iostream>
#include <cmath>
using namespace std;

/* Finds the maximum value in an array
 * @param array array of values (sorted or unsorted)
 * @param size length of the array
 * @param i iterator
 * @param max maximum value found so far
 * @return maximum value
 */
int maxArray(int array[], int size, int i, int max) {
    if (i == size)
        return max;
    else if (array[i] >= max)
        max = array[i];
    return maxArray(array, size, i + 1, max);

}

/* Finds the maximum value in an array
 * @param array array of values (sorted or unsorted)
 * @param size length of the array
 * @return maximum value
 */
int findMax(int array[], int size) {
    //initialize i and max to be 0
    return maxArray(array, size, 0, 0);
}

/* Returns the number of times c appears in the string str
 * @param str string to test
 * @param c character to find
 * @return number of times the character appeared in the string
 */
int charFrequency(string str, char c) {
    if (str.length() > 0) {
        if (str[0] == c)
            //increment 1
            return 1 + charFrequency(str.substr(1), c);
        else
            return charFrequency(str.substr(1), c);
    }
    return 0;
}

/**Converts a binary string to decimal
 * @param bin the binary string
 * @return the decimal value
 */
int binToDec(string bin) {
    if (bin.length() == 0)
        return 0;
    else if (bin[0] == '1')
        return pow(2, bin.length() - 1) + binToDec(bin.substr(1));
    else
        return binToDec(bin.substr(1));
    return 0;
}


int main() {
    int array[] = { 46, 22, 7, 58, 91, 55, 31, 84, 12, 78 };
    if (findMax(array, 10) == 91) {
        cout << "1. findMax is correct!" << endl;
    }
    if (charFrequency("The quick brown fox jumps over the lazy dog.", 'o') == 4) {
        cout << "2. charFrequency1 is correct!" << endl;
    }
    if (charFrequency("The quick brown fox jumps over the lazy dog.", 'e') == 3) {
        cout << "3. charFrequency2 is correct!" << endl;
    }
    if (binToDec("1101100") == 108) {
        cout << "4. binToDec1 is correct!" << endl;
    }
    if (binToDec("1011101") == 93) {
        cout << "5. binToDec2 is correct!" << endl;
    }
}