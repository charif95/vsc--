#include <iostream>
#include <cmath> 
#include <string>

using namespace std;

void MyFunction1()
{
    int Num1, Num2,Temp;

    cout <<"Please enter the Num1?" << endl;
    cin >> Num1; 
    cout <<"Please enter the Num2?" << endl;
    cin >> Num2;

    Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;

    cout << Num1 << endl;
    cout << Num2 << endl;

}
void MyFunction2()
{
    int a = 10, b = 20, Area;
    Area = a * b;

    cout << Area << endl;
}
void MyFunction3()
{
    double d, a, Area; 

    cout << "Enter the d ?" << endl;
    cin >> d;
    cout << "Enter the a ?" << endl;
    cin >> a;

    Area = a * sqrt(d*d - a*a ); 

    cout << Area << endl; 
}
void MyFunction4()
{
    double r, PI=3.14, Area; 

    cout << "Enter the r ?" << endl;
    cin >> r;
   

    Area = PI * (r * r); 

    cout << Area << endl; 

}
void MyFunction5()
{
    double D, PI=3.14, Area; 

    cout << "Enter the D ?" << endl;
    cin >> D;
   
    Area = (PI * D * D)/4; 

    cout << Area << endl; 

}
void MyFunction6()
{
    double A, PI=3.14, Area; 

    cout << "Enter the A ?" << endl;
    cin >> A;
   
    Area = (PI * (A * A))/4; 

    cout << Area << endl; 

}
void MyFunction7()
{
    double L, PI=3.14, Area; 

    cout << "Enter the L ?" << endl;
    cin >> L;
   
    Area = (L * L) / (4 * PI);

    cout << Area << endl; 
}
void MyFunction8()
{
    double a, b, PI=3.14, Area; 

    cout << "Enter the a ?" << endl;
    cin >> a;
    cout << "Enter the b ?" << endl;
    cin >> b;
   
    Area = ((PI * b * b) / 4) * ((2 * a - b) / (2 * a + b));

    cout << Area << endl;   
}
void MyFunction9()
{
    double a, b, c, p, PI=3.14, Area,
    T, K;

    cout << "Enter the a ?" << endl;
    cin >> a;
    cout << "Enter the b ?" << endl;
    cin >> b;
    cout << "Enter the c ?" << endl;
    cin >> c;
    p = (a + b + c) / 2;
    T = (a * b * c);
    K = (4 * sqrt(p * (p - a) * (p - b) * (p - c)));

    Area = PI * ((T * T) / (K * K));

    cout << Area << endl;  

}
void MyFunction10()
{
    int Num1;

    cout << "Please enter Num1 ?" << endl; 
    cin >> Num1;
    

    cout << "Power value num1: " << pow(Num1, 2) << endl;
    cout << "Power value num1: " << pow(Num1, 3) << endl;
    cout << "Power value num1: " << pow(Num1, 4) << endl;
 
}

void MyFunction11()
{
    int Num, M;

    cout << "Please enter Num ?" << endl; 
    cin >> Num;
    cout << "Please enter M ?" << endl; 
    cin >> M;
    
    cout << "Power value Num: (Num ^ M) " << pow(Num, M) << endl;
    
}
void MyFunction12()
{
    int NumberOfDays, NumberOfHours,
     NumberOfMinutes, NumberOfSeconds,
      TotalSeconds;

    cout << "Enter the NumberOfDays ?" << endl;
    cin >> NumberOfDays;

    cout << "Enter the NumberOfHours ?" << endl;
    cin >> NumberOfHours;

    cout << "Enter the NumberOfMinutes ?" << endl;
    cin >> NumberOfMinutes;

    cout << "Enter the NumberOfSeconds ?" << endl;
    cin >> NumberOfSeconds;

 TotalSeconds = (NumberOfDays * 24 * 60 * 60) + (NumberOfHours * 60 * 60) + (NumberOfMinutes * 60) + NumberOfSeconds;


cout << "Total Seconds = " << TotalSeconds << endl;

}
void MyFunction13()
{ 
	int  SecondsoPerDay = 24 * 60 * 60, SecondsoPerHour = 60 * 60, SecondsoPerMinute = 60,
		TotalSeconds, NumberOfDays, NumberOfHours,
		NumberOfMinutes, NumberOfSeconds, Remainder;



	cout << "Enter the number of seconds\n"; 

	cin >> TotalSeconds;  


	NumberOfDays = floor(TotalSeconds / SecondsoPerDay);

	Remainder = TotalSeconds % SecondsoPerDay;

	NumberOfHours = floor(Remainder / SecondsoPerHour);

	Remainder = Remainder % SecondsoPerHour;

	NumberOfMinutes = floor(Remainder / SecondsoPerMinute);

	Remainder = Remainder % SecondsoPerMinute;

	NumberOfSeconds = Remainder;

	cout << NumberOfDays << ':';
	cout << NumberOfHours << ':';
	cout << NumberOfMinutes << ':';
	cout << NumberOfSeconds ;
}

int main()
{
    MyFunction1();
    MyFunction2();
    MyFunction3();
    MyFunction4();
    MyFunction5();
    MyFunction6();
    MyFunction7();
    MyFunction8();
    MyFunction9();
    MyFunction10();
    MyFunction11();
    MyFunction12();
    MyFunction13();


}