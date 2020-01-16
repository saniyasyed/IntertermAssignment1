#include <iostream>
using namespace std;

int main()
{
  // delcaring variables for the maximum room capacity and the number of people attending the meeting
  int maxRoomCapacity = 0;
  int numPeopleAttending = 0;

  // getting user input for max room capacity and number of people attending the meeting
  cout << "What is the maximum room capacity: " << endl;
  cin >> maxRoomCapacity;
  cout << "How many people are attending the meeting: " << endl;
  cin >> numPeopleAttending;

  // if the number of people is less than or equal to the maximum room capacity
  if(numPeopleAttending <= maxRoomCapacity)
  {
    cout << "It is legal to hold the meeting." << endl;
    if(maxRoomCapacity - numPeopleAttending > 0)  //  checking if additional people may be added to attend  the meeting
    {
      cout << maxRoomCapacity - numPeopleAttending << " additional people may attend the meeting." << endl;
    }
    else // if numPeopleAttending is equal to maxRoomCapacity
    {
      cout << "No additional people may attend the meeting. Capacity has been reached." << endl;
    }
  }
  else // if there are too many people attending the meeting
  {
    cout << "Meeting cannot be held as planned due to fire regulations." << endl;
    // stating how many people need to be excluded from the meeting to meet fire regulations
    cout << numPeopleAttending - maxRoomCapacity << " people must be excluded from the meeting in order to meet fire regulations." << endl;
  }

}
