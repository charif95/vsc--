#include <iostream>
#include <cmath>
#include <cctype>
#include <algorithm>

using namespace std;

    /* // Assignment 01 Custom Calculation Function


void calcspecial(int x, int y)
{
    if (x == y)
    {
        cout << x + y << endl;
    } else if (x > y)
    {
        cout << x - y << endl;
    } else if (x < y)
    {
        cout << y - x << endl;
    }     
}

int main()
{
    calcspecial(40, 40);  // First = Second  -> 40 + 40 = 80
    calcspecial(200, 50);  // First = Second  -> 200 - 50 = 150
    calcspecial(100, 300);  // First = Second  -> 300 - 100 = 200
    
    return 0;
} */

    
        // Assignment 02 Money Needed Per Day

/* int calcHolidays(int days)
{
   int week = 7;
    return floor(days/week)*2;
}
void money(float salary, int days)
{
   int holi = calcHolidays(days);
    
   cout << salary / (days - holi) << endl;

}

int main()
{
    money(2015, 21);  // 134.333
    money(4500, 40);  // 150
} */

    // Assignment 03 Functions In Wrong Place

/* int plusnums(int numone, int numtwo);
int minusnums(int numone, int numtwo);
int divnums(int numone, int numtwo);

int main()
{
    cout << plusnums(50, 60) << "\n"; // 110
    cout << minusnums(150, 50) << "\n"; // 100
    cout << divnums(100, 5) << "\n"; // 20

    return 0;
}

int plusnums(int numone, int numtwo)
{
    return numone + numtwo;
}

int minusnums(int numone, int numtwo)
{
    return numone - numtwo;
}

int divnums(int numone, int numtwo)
{
    return numone / numtwo;
} */


    // Assignment 04 Functions With Missing Arguments

/* int calculation(int a, int b=50, int c=150)
{
    return a + b + c;
}
int main()
{
    cout << calculation(50, 100, 150) << "\n"; // 300
    cout << calculation(100, 50) << "\n"; // 300
    cout << calculation(100) << "\n"; // 300

    return 0;
} */

    // Assignment 05 The Power Of A Number

/* void thepower(int x, int y)
{
    int result = 1;
    
    cout << pow(x, y) << "\n";

    for (int  i = 0; i < y; i++)
    {
        result *= x;
    }
    cout << result << endl;
    
}

int main()
{
    thepower(2, 5); // 32
    return 0;
} */


    // Assignment 06 Custom Swapping Function

/* void swapping(string text)
{
    
    int textSize = size(text);

    for (int i = 0; i < textSize; i++)
    {
        if (islower(text[i]) && text[i] != 'h'  || text[i] == 'H')
        {
            cout << char(toupper(text[i]));
        }
        
        else
        {
            cout << char(tolower(text[i]));
        }
    }
}

int main()
{
    swapping("hero Of THe PROgramming");  // hERO oF tHE proGRAMMING
    return 0;
} */

    // Assignment 07 Result Of Number And Numbers Before


/* int beforeresult(int number, int count)
{
    int result = number;

    for (int i = 1; i <= count; ++i)
    {
        result += (number - i);
    }

    return result;
}

int main()
{
    cout << beforeresult(10, 5) << "\n";  // 10 + 9 + 8 + 7 + 6 + 5 = 45
    cout << beforeresult(15, 3) << "\n";  // 15 + 14 + 13 + 12 = 54
    cout << beforeresult(20, 10) << "\n";  // = 165
     
} */


    // Assignment 08 Plus For Even And Multiply For Odd

/* void plusAndMultiply(int numbers[], int size)
{
    int SumEven = 0;
    int SumOdd = 1;
   

    for (int i = 0; i < size ; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            SumEven += numbers[i];
        }
        else
        {
            SumOdd *= numbers[i];
        }  
    }
    numbers[0] = SumEven;
    numbers[1] = SumOdd;
    int result = numbers[0] + numbers[1];

    cout << "Sum of Even numbers: " << SumEven << "\n";
    cout << "Sum of Odd numbers: " << SumOdd << "\n";
    cout << "total = " << result << endl;
}

int main()
{
    int numbers[] = {10, 20, 3, 30, 5, 7, 40};
    int numsSize = size(numbers);

    plusAndMultiply(numbers, numsSize);

    return 0;
} */

    // Assignment 09 Sum All Numbers After Exclude

/* int sumAll(int numbers[], int size, int noNeed)
{
    int SumN = 0;
    
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] != noNeed)
        {
            SumN += numbers[i];
        }
    }
    
    return SumN;
}

int main()
{
    int numbers[] = { 13, 20, 3, 30, 5, 7, 40, 13};
    int numssize = size(numbers);
    int noNeed = 13;
    cout << "Sum excluding " << noNeed << " : " <<sumAll(numbers, numssize, noNeed) << endl;
    return 0;
} */

// Assignment 10 Minimum Positive Number

/* int minPositive(int numbers[], int size)
{

    // Smart Solution 

    int MinNum = INT_MAX;

    for (int i = 0; i < size; i++) 
    {
        if (numbers[i] > 0) 
        {
            MinNum = min(MinNum, numbers[i]);
        }
    }

    return (MinNum == INT_MAX) ? -1 : MinNum;
}
    // Drawch Solution

//      int minp = numbers[0];
//     for (int i = 0; i < size; i++)
//     {
//         if ( numbers[i]>0)
//         {
//             minp = numbers[i];
//         } 
//     }  
    
//      for (int i = 0; i < size; i++)
//     {
//         if ( numbers[i]>0)
//         {
//             if (minp>numbers[i])
//             {
//                 minp = numbers[i];
//             }
//         } 
//     } 
//    return minp; 

// } 

int main()
{
  int numbers[] = { -10, -100, 1, -20, 15, 100, 10, 5, -50, 2, 0 }; // -5
  int numsSize = size(numbers);
  cout << minPositive(numbers,numsSize) << "\n";
  return 0;
} */

// Assignment 11 Maximum Negative Number

/* int firstNegaive(int numbers[], int size)
{
    int MaxNeg = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] < 0) 
        {
            MaxNeg = max(MaxNeg, numbers[i]);
        }
    }

    return  MaxNeg;
      
}

int main()
{
    int numbers[] = {-10, -3, -1, -20, 15, 100, 10, -2, 5, -50, 0, -5, -10}; // -5
    int numsSize = size(numbers);
    cout << firstNegaive(numbers, numsSize) << "\n";
    return 0;
} */

// Assignment 12 Create Full URL Function

/* void createurl(string protocol, string nameSite, string domaine, bool N = 1)
{
    // string A = "www";
    // if (N == 1)
    // {
    //     cout << protocol << "://" << A << "." << nameSite << "." << domaine << "\n"; 
    // }
    // else 
    // {
    //     cout << protocol << "://"<< nameSite << "." << domaine << "\n"; 
    // } 

    string A = (N == 1) ? "www." : "";
    cout << protocol << "://" << A << nameSite << "." << domaine << "\n"; 
}

int main()
{
        createurl("https", "elzero", "org"); // https://www.elzero.org
        createurl("https", "google", "com", false); // https://google.com
        createurl("http", "learn", "net"); // http://www.learn.net
  return 0;
} */

// Assignment 13 Very Simple Greeting Function

/* void greeting(string name, string gender = "")
{
    string title = (gender == "Male") ? "Mr " :
     (gender == "Female") ? "Miss ":"";
    // if (gender == "Male")
    // {
    //     cout << "Hello " << name << endl;
    // }
    // else if (gender == "Female")
    // {
    //     cout << "Hello  " << name << endl;
    // }
    // else
    // {
    //     cout << "Hello " << name << endl;
    // }
    
    cout << "Hello " << title << name << endl;
}


int main()
{
  greeting("Osama", "Male"); // Hello Mr Osama
  greeting("Eman", "Female"); // Hello Miss Eman
  greeting("Sameh"); // Hello Sameh
  return 0;
} */

// Assignment 14 Math Operations

/* int calculate(double num1, double num2, string op = "")
{
    
    if (op == "" || op == "a" )
    {
        return num1 + num2;
    }
    else if (op == "s" || op == "subtract")
    {
        return num1 - num2 ;
    }
    else if (op == "multiply" || op == "m")
    {
       return num1 * num2 ;
    }
    
    return 0;
    
}

int main()
{
    cout << calculate(10, 20) << "\n"; // 30
    cout << calculate(10, 20, "a") << "\n"; // 30
    cout << calculate(10, 20, "s") << "\n"; // -10
    cout << calculate(10, 20, "subtract") << "\n"; // -10
    cout << calculate(10, 20, "multiply") << "\n"; // 200
    cout << calculate(10, 20, "m") << "\n"; // 200
    cout << calculate(10, 20, "invalid") << "\n"; // 0
} */

// Assignment 15 Average Money Per Day Function


/* double avg(int money[], int monSize)
{
    double Result = 0;

    for (int i = 0; i < monSize; i++)
    {
        Result+= money[i];
    }

    return Result / monSize;
}

int main()
{
  int money[] = { 10, 20, 15, 25, 30, 35 };
  int monSize = size(money);
  cout << avg(money, monSize) << "\n"; // 22.5
  return 0;
} */

// Assignment 16 Available Space For Books

/* int books(int SmallBooks, int MediumBooks, int LargeBooks, int Shelf)
{
    int SB = 2, MB = 4, GB = 6, Sh = 20;
    int Result = SmallBooks * SB + MediumBooks * MB + LargeBooks * GB;
    int ReSh = Shelf * Sh;

    if (ReSh >  Result)
    {
        return ReSh - Result;
    }
    return 0;
    
}

int main()
{
  cout << books(10, 4, 3, 4) << "\n"; // 26
  cout << books(10, 4, 3, 2) << "\n"; // 0
  return 0;
} */

// Assignment 17 Phone Prices With VATs

double pricing(int NumPhpne, int NumUsedPhone, int Price, int VAT)
{
    int OldProPrice = Price - 200;
    int Result = (((NumPhpne - NumUsedPhone) * Price) + (NumUsedPhone * OldProPrice));

    return Result - ((Result * VAT) / 100);
}


int main()
{
  cout << pricing(50, 10, 800, 20) << "\n"; // 30400
  return 0;
}

