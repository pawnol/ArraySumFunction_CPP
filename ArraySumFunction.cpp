/*
Array Sum Function
Pawelski
5/10/2022
Please follow the instructions on the activity guide!
*/

#define ARRAY_LENGTH 5
#include <iostream>

/// <summary>
/// Calculates the sum of an array with 5 elements.
/// </summary>
/// <param name="arr">An array with 5 elements.</param>
/// <returns>The sum of the elements within the array.</returns>
int Sum(int arr[])
{
    return arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
}

int main()
{
    int some_numbers_1[ARRAY_LENGTH] = { 1, 2, 3, 4, 5 };
    std::cout << "Sum: " << Sum(some_numbers_1) << std::endl;
    return 0;
}
