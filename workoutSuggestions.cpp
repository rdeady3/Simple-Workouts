//Russell Deady, program to suggest different workouts made using c++

#include <iostream>

using namespace std;

void printLegWorkout();
void printArmWorkout();
void printBackWorkout();
void printChestWorkout();
void printShoulderWorkout();
void printCoreWorkout();
void printCardioWorkout();

int main()
{
   string input  = "";
   
   cout << "Welcome to the workout suggester!" << endl;
   cout << "What kind of workout would you like to complete?" << endl;
   cout << "The available options are \"legs\", \"arms\", \"back\", \"chest\", \"shoulders\", \"core\", and \"cardio\" " << endl;
   cout << "Enter the type of workout now: ";
   cin >> input;
   
   if (input == "legs"){
      printLegWorkout();
   }
   else if (input == "arms"){
      printArmWorkout();
   }
   else if (input == "back"){
      printBackWorkout();
   }
   else if (input == "chest"){
      printChestWorkout();
   }
   else if (input == "shoulders"){
      printShoulderWorkout();
   }
   else if (input == "core"){
      printCoreWorkout();
   }
   else if (input == "cardio"){
      printCardioWorkout();
   }
   else {
      cout << "Improper input, try the program again!" << endl;
      cout << endl;
      return 0;
   }

   cout << "That's all for now!" << endl;
   cout << endl;
   return 0;
}

void printLegWorkout()
{
   cout << "You're going to do..." << endl;
   cout << "4 sets of 8 squats" << endl;
   cout << "4 sets of 12 dumbbell lunges on each leg" << endl;
   cout << "3 sets of 12 leg presses" << endl;
   cout << "4 sets of 15 leg extensions" << endl;
}

void printArmWorkout()
{
   cout << "You're going to do..." << endl;
   cout << "3 sets of 15 normal dumbbell curls" << endl;
   cout << "3 sets of 15 hammer curls" << endl;
   cout << "3 sets of 15 tricep extensions" << endl;
}

void printBackWorkout()
{
   cout << "You're going to do..." << endl;
   cout << "4 sets of 12 dumbbell rows on each side" << endl;
   cout << "4 sets of pull-ups to failure" << endl;
   cout << "3 sets of 10 barbell rows" << endl;
   cout << "3 sets of 12 pulldowns" << endl;
}

void printChestWorkout()
{
   cout << "You're going to do..." << endl;
   cout << "3 sets of 12 normal dumbbell presses" << endl;
   cout << "3 sets of 12 incline dumbbell presses" << endl;
   cout << "3 sets of 15 cable flys" << endl;
   cout << "3 sets of 10 dips" << endl;
   cout << "3 sets of 15 pushups" << endl;
}

void printShoulderWorkout()
{
   cout << "You're going to do..." << endl;
   cout << "4 sets of 12 dumbbell shoulder presses" << endl;
   cout << "4 sets of 12 dumbbell lateral raises" << endl;
   cout << "4 sets of 12 dumbbell front raises" << endl;
   cout << "4 sets of 12 bent over dumbbell raises" << endl;
}

void printCoreWorkout()
{
   cout << "You're going to do..." << endl;
   cout << "20 sit-ups" << endl;
   cout << "20 leg-lifts" << endl;
   cout << "20 russian-twists" << endl;
   cout << "A 1 minute plank" << endl; 
}

void printCardioWorkout()
{  
   cout << "You're going to do..." << endl;
   cout << "30 minutes on the treadmill, adjust the speed to push yourself" << endl;
   cout << "Ride 3 miles on the stationary bicycle" << endl;
}