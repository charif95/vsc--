#include <iostream>
using namespace std;

	enum Gender { Male, Female };
	enum Status { Single, Married };
	enum Color { Red, Black, white, Green, Yellow };
	enum Direction { North, South, East, West };
	enum Week { Sat, Sun, Mon, Tue, Wed, Thu, Fri };

	  int main()
	  {
		  Gender MyGender;
		  Status MyStatus;
		  Color MyColor;
		  Direction MyDirection;
		  Week Today;

		  MyGender = Gender::Male;
		  MyStatus = Status::Single;
		  MyColor = Color::Black;
		  MyDirection = Direction::North;
		  Today = Week::Sun;

		  cout << "Gender is: " << MyGender << endl; 
		  cout << "Status is: " << MyStatus << endl;
		  cout << "Color is: " << MyColor << endl; 
		  cout << "Direction is: " << MyDirection << endl;
		  cout << "Today is: " << Today << endl;


	  }

