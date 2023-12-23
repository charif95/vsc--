#include <iostream>
using namespace std;

/* int recursion(int x)
{
    if (x > 1)
        return recursion(x-1)*x;
    return x;
}
 
int main()
{

    cout << recursion(5);

    return 0;
} */

void calc(int nums[], int count)
{
    int result = 0;
    for (int i = 0; i < count; i++)
    {
        result += nums[i];
    }
    cout << "Result Is: " << result << "\n";
}

int main()
{
    // calc(10, 20, 30, 40, 100);

    int arrayOfNumbers[] = {10, 20, 30, 40, 100};
    int numsSize = size(arrayOfNumbers);

    calc(arrayOfNumbers, numsSize); 

    return 0;
}
