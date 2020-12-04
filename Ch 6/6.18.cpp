/**
 * Write declarations for each of the following functions. When
 * you write these declarations, use the name of the function to indicate what
 * the function does.
 */

/**
 * A function named compare that returns a bool and has two parameters
 * that are references to a class named matrix.
 */
bool compare(matrix &a, matrix &b);
// compare if a and b are the same

/**
 * A function named change_val that returns a vector<int> iterator
 * and takes two parameters: One is an int and the other is an iterator for a
 * vector<int>.
 */
vector<int> change_val(int a, vector<int>::iterator it);
// change the value of indexed element *it with value of a