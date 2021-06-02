
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "myTime.h" // include definition of class Time from Time.h
using namespace std;

// Time constructor initializes each data member
myTime::myTime( int hour, int minute, int second )
{
   setTime( hour, minute, second ); // validate and set myTime
} // end myTime constructor

// set new myTime value using universal myTime
void myTime::setTime( int h, int m, int s )
{
   setHour( h ); // set private field hour
   setMinute( m ); // set private field minute
   setSecond( s ); // set private field second
} // end function setTime

// set hour value
void myTime::setHour( int h )
{
   if ( h >= 0 && h < 24 )
      hour = h;
   else
      throw invalid_argument( "hour must be 0-23" );
} // end function setHour

// set minute value
void myTime::setMinute( int m )
{
   if ( m >= 0 && m < 60 )
      minute = m;
   else
      throw invalid_argument( "minute must be 0-59" );
} // end function setMinute

// set second value
void myTime::setSecond( int s )
{
   if ( s >= 0 && s < 60 )
      second = s;
   else
      throw invalid_argument( "second must be 0-59" );
} // end function setSecond

// return hour value
unsigned int myTime::getHour() const
{
   return hour;
} // end function getHour

// return minute value
unsigned int myTime::getMinute() const
{
   return minute;
} // end function getMinute

// return second value
unsigned int myTime::getSecond() const
{
   return second;
} // end function getSecond

// print Time in universal-time format (HH:MM:SS)
void myTime::printMe() const
{
   cout << getHour() << ":"<< getMinute() << "." << getSecond()<<endl;
}

