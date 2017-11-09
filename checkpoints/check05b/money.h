/******************
 * File: money.h
 ******************/
#ifndef MONEY_H
#define MONEY_H

class Money
{
private:
   int dollars;
   int cents;

public:
   Money();
   Money(int dollars);
   Money(int dollars, int cents);
   void prompt();
   void display() const;
   int getDollars() const;
   int getCents() const;
   void setDollars(int dollars);
   void setCents(int cents);
};

#endif
