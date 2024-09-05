#include <nagisa/concept/concept.h>

int main()
{
	namespace cpt = ::ngs::concepts;
	static_assert(cpt::any<int, float, double>);

	return 0;
}