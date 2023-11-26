#include <iostream>

using namespace std;

enum enMonthYear { Jan=1, Feb=2, Mar=3, Apr=4, May=5, Jun=6, Jul=7, Aug=8, Sep=9, Oct=10, Nov=11, Dec=12 };

void ShowMonthYearMenue()
{
    cout << "**********************************\n";
    cout << "            Months Year           \n";
    cout << "**********************************\n\n";
    cout << "1: Jan\n";
    cout << "2: Feb\n";
    cout << "3: Mar\n";
    cout << "4: Apr\n";
    cout << "5: May\n";
    cout << "6: Jun\n";
    cout << "7: Jul\n";
    cout << "8: Aug\n";
    cout << "9: Sep\n";
    cout << "10: Oct\n";
    cout << "11: Nov\n";
    cout << "12: Dec\n";
    cout << "**********************************\n";
    cout << "Please enter the number of Month?\n";

}
enMonthYear ReadMonthYear()
{
    int MY;
    cin >> MY;
    return (enMonthYear)MY;
}

string GetMonthYearName(enMonthYear MonthYear)
{
    switch (MonthYear)
    {
    case enMonthYear::Jan:
        return "January";
        break;
    
    case enMonthYear::Feb:
        return "February";
        break;

    case enMonthYear::Mar:
        return "March";
        break;

    case enMonthYear::Apr:
        return "April";
        break;

    case enMonthYear::May:
        return "May";
        break;
    
    case enMonthYear::Jun:
        return "June";
        break;

    case enMonthYear::Jul:
        return "July";
        break;

    case enMonthYear::Aug:
        return "August";
        break;

    case enMonthYear::Sep:
        return "September";
        break;

    case enMonthYear::Oct:
        return "October";
        break;

    case enMonthYear::Nov:
        return "November";
        break;

    case enMonthYear::Dec:
        return "December";
        break;

    default:
        return "Not a Month Years!";
    }
}
int main()
{
    ShowMonthYearMenue();

    cout << "Month is " << GetMonthYearName(ReadMonthYear()) << endl;

    return 0;
}




