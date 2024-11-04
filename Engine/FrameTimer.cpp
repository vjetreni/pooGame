#include "FrameTimer.h"
#include <chrono>

using std::chrono::steady_clock;
using namespace std;

FrameTimer::FrameTimer()
{
	last = steady_clock::now();
}

float FrameTimer::Mark()
{
	auto old = last;
	last = steady_clock::now();
	std::chrono::duration<float> runtime = last - old;
	return runtime.count();
}
