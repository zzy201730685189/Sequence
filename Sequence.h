using namespace std;
#include<string>

class Sequence
{
public:
	Sequence(string);
	int length();
	int numberOf(char);
	string longestConsecutive();
	string longestRepeated();
	string h;
	int len;
};
