#include "grid.hpp"

class Test
{
public:
	Test();
	~Test();

	void test1();

	bool running() { return isRunning; };

private:

	bool isRunning = true;

};
