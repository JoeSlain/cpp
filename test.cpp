#include <iostream>
#include <iomanip>
#include <vector>
#include <numeric>
#include <chrono>
#include <time.h>       /* time_t, struct tm, difftime, time, mktime */

int main()
{
	time_t t;
	struct tm * timeinfo;

	time(&t);
	timeinfo = localtime (&t);
	std::cout << timeinfo->tm_year + 1900 << timeinfo->tm_mday << timeinfo->tm_mon 	<< "_" << timeinfo->tm_hour << timeinfo->tm_min << timeinfo->tm_sec << std::endl;
	return 0;
}