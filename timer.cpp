#include <iostream>
#include <windows.h>
//#include <stdlib.h>


void display_timer(int minutes, int seconds)
{
	// For outputing in 00:00 format. (Example : 09:42)
	if (minutes <= 9 && seconds <= 9)
	{
		std::cout << 0 << minutes << ":" << 0 << seconds;
	}
	else if (minutes <= 9)
	{
		std::cout << 0 << minutes << ":" << seconds;
	}
	else if (seconds <= 9)
	{
		std::cout << minutes << ":" << 0 << seconds;
	}


}


void input_duration(int& minutes, int& seconds)
{
	std::cout << "Minutes : ";
	std::cin >> minutes;
	std::cout << "Seconds : ";
	std::cin >> seconds;
}


int main()
{
	int minutes, seconds;
	input_duration(minutes, seconds);

	while (true)
	{
		display_timer(minutes, seconds);

		if (seconds == 0)
		{
			minutes--;
			seconds = 60;
		}
		Sleep(1000);
		system("cls");
		seconds--;



		// Stops the timer (breaks the loop) after reaching 0
		if (minutes == 0 && seconds == 0)
		{
			std::cout << "Timer is up!\n";
			break;
		}
	}
}
