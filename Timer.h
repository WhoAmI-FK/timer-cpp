#pragma once
#include <iostream>
#include <chrono>
#include <ctime>
#include <cmath>

namespace w_chrono {
	class Timer
	{
	public:
		Timer();
		Timer(const Timer& _t) = delete;
		Timer(Timer&& _t) = delete;
		Timer& operator=(const Timer& _t) = delete;
		void start();
		void stop();
		double getElapsedMs();
		double getElapsedS();
	private:
		typedef std::chrono::time_point<std::chrono::steady_clock> timePoint;
		timePoint m_Start;
		timePoint m_End;
		bool m_Run;
	};
};