#include <iostream>
#include <string>

using namespace std;

class Roommate {
public:
    string name;
    int age;
    float height;
    string nationality;
    string skinColour;
    string personality;
    string hobby;
    string educationLevel;
};

int main() {
    // Create an object (instance) of the Roommate class
    Roommate myRoommate;

    // Assigning details to the object's members
    myRoommate.name = "John Smith";   // Updated name
    myRoommate.age = 25;              // Updated age
    myRoommate.height = 5.9;          // Updated height (feet)
    myRoommate.nationality = "American";
    myRoommate.skinColour = "Light Brown";
    myRoommate.personality = "Friendly and outgoing";
    myRoommate.hobby = "Gardening";
    myRoommate.educationLevel = "Master's Degree";

    // Displaying the details
    cout << "Roommate's Details:" << endl;
    cout << "-------------------" << endl;
    cout << "Name: " << myRoommate.name << endl;
    cout << "Age: " << myRoommate.age << " years old" << endl;
    cout << "Height: " << myRoommate.height << " feet" << endl;
    cout << "Nationality: " << myRoommate.nationality << endl;
    cout << "Skin Colour: " << myRoommate.skinColour << endl;
    cout << "Personality: " << myRoommate.personality << endl;
    cout << "Hobby: " << myRoommate.hobby << endl;
    cout << "Education Level: " << myRoommate.educationLevel << endl;

    return 0;
}
