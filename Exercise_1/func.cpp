#include "func.h"

void flush_stdin()
{
	cin.clear();
	while (cin.get() != '\n');
}
