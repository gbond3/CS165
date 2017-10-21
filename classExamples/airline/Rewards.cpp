#include <iostream>
#include "Rewards.h"

using namespace std;

// Default Constructor
// Set all member data to defaults
Rewards::Rewards()
{
   setMiles(0);
}

Rewards::Rewards(int miles)
{
   setMiles(miles);
}

// Accessor: miles
int Rewards::getMiles() const
{
   return miles;
}

// Mutator: miles
// Validation: must be positive
// Error Handling: do not update data 
void Rewards::setMiles(int miles)
{
   if (miles < 0)
   {
      cout << "Invalid miles for rewards. No changes made." << endl;
   }
   else
   {
      this->miles = miles;
   }
}

bool Rewards::getGoldStatus() const
{
   if (miles >= 100000) 
   {
      return true;
   }
   return false;
}  


