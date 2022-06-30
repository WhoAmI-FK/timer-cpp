#include "Timer.h"

w_chrono::Timer::Timer() {
	m_Run = false;
}

void w_chrono::Timer::start()
{
	m_Start = std::chrono::steady_clock::now();
	m_Run = true;
}
void w_chrono::Timer::stop()
{
	m_End = std::chrono::steady_clock::now();
	m_Run = false;
}
double w_chrono::Timer::getElapsedMs()
{
	std::chrono::time_point<std::chrono::steady_clock> endTime;
	if (m_Run) 
	{
		endTime = std::chrono::steady_clock::now();
	}
	else {
		endTime = m_End;
	}
	return std::chrono::duration_cast<std::chrono::milliseconds>(endTime - m_Start).count();
}
double w_chrono::Timer::getElapsedS() {
	return getElapsedMs() / 1000;
}
// think about w_chrono::Timer::Timer(long long)