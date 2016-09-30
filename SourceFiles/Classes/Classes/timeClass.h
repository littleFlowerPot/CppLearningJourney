//Class from C++ for eng and scientist exercise 11.1 2a
#include <iostream>
#include <iomanip>

class Time
{
private:
	int hours;
	int mins;
	int secs;
public:
	Time(int = 0, int = 0, int = 0);
	void showTime();
	void operator=(Time&);
};

Time::Time(int hh, int mm, int ss)
{
	hours = hh;
	mins = mm;
	secs = ss;
}

void Time::operator=(Time& newtime)
{
	hours = newtime.hours;
	mins = newtime.mins;
	secs = newtime.secs;
	return;
}

void Time::showTime()
{
	std::cout << std::setfill('0')
		  << std::setw(2) << hours << ':'
		  << std::setw(2) << mins << ':'
		  << std::setw(2) << secs << std::endl;
	return;
}



