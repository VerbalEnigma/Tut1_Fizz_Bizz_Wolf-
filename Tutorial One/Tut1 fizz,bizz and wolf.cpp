#include <iostream>
using namespace std;
int main()
{
	int i;
	for (i = 1; i <= 20; i++)
	{
		if ((i % 3) == 0 && (i % 5) != 0)
			cout << "Fizz" << endl;
		else if (i % 5 == 0 && (i % 3) != 0)
			cout << "Bizz" << endl;
		else if ((i % 3) == 0 && (i % 5) == 0)
			cout << "Fizz and Bizz" << endl;
		//Prior to this point is the additio  of the wolf code 
		if (i % 7 == 0 && (i % 5) != 0 && (i % 3) != 0)
			cout << "Wolf" << endl;
		else if ((i % 7 == 0) && (i % 3) == 0 && (i % 5) == 0)
			cout << "Fizz , Bizz and wolf " << endl;
		
	}
}
