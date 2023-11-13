#include <iostream>
using namespace std;

enum enColor { Red, Green, Yellow, Blue};
enum enGendor { Male, Female };
enum enMaritalStatus { Single, Married};


struct stAddress
{
    string StreetName;
    string BuildingNo;
    string POBox;
    string ZipCode;
};


struct stContactInfo
{
    string Phone;
    string Email;
    stAddress Address;
};


struct stPerson
{

    string FirstName;
    string LastName;
  
    stContactInfo ContactInfo;

    enMaritalStatus MaritalStatues;
    enGendor Gendor;
    enColor FavourateColor;
};


int main()
{
    
    stPerson Person1;

    Person1.FirstName = "Charif";
    Person1.LastName = "El khamlichi";

    Person1.ContactInfo.Email = "elkhamlichi95charif@gmail.com";
    Person1.ContactInfo.Phone = "+212601404051";
    Person1.ContactInfo.Address.POBox = "7777";
    Person1.ContactInfo.Address.ZipCode = "93000";
    Person1.ContactInfo.Address.StreetName  = "Haroun erachid";
    Person1.ContactInfo.Address.BuildingNo = "92";
    
    Person1.Gendor = enGendor::Male;
    Person1.MaritalStatues = enMaritalStatus::Married;
    Person1.FavourateColor = enColor::Green;

    cout << Person1.FirstName << endl; 
    cout << Person1.LastName << endl;
    cout << Person1.ContactInfo.Email << endl;
    cout << Person1.ContactInfo.Phone << endl;
    cout << Person1.ContactInfo.Address.POBox << endl;
    cout << Person1.ContactInfo.Address.ZipCode << endl;
    cout << Person1.ContactInfo.Address.StreetName << endl;
    cout << Person1.ContactInfo.Address.BuildingNo << endl;
    cout << Person1.Gendor << endl;
    cout << Person1.MaritalStatues << endl;
    cout << Person1.FavourateColor << endl;
    



    
    return 0;
}