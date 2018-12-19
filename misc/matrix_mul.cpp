/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array 
**and a vector of size 4. 
**Use the dot product to multiply the array by the vector. 
**Print the resulting vector. 
*/

#include<iostream>

int main()
{
    
    int matrix[4][4];
    int vector[4];
    int result[4];
    
    // accept inputs for matrix
    for (int i=0; i<4; ++i) {
        for (int j=0; j<4; ++j) {
            std::cin >> matrix[i][j];
        }
    }
    
    // accept inputs for vector
    for (int i=0; i<4; ++i) {
        std::cin >> vector[i];
    }
    
    // perform dot product
    for (int i=0; i<4; ++i) {
        int temp = 0;
        for (int j=0; j<4; ++j) {
            temp += matrix[i][j] * vector[j];
        }
        result[i] = temp;
    }
    
    // print resultant matrix
    for (int i=0; i<4; ++i) {
        std::cout << result[i] << ' ';
    }
    
    return 0;
}