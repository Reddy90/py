#include <iostream>

using namespace std;

class Defaultconstructor
{
	private :
		int num1, num2;
	public :
		Defaultconstructor()
		{
			num1 = 10;
			num2 = 20;
		}
		void  display()
		{
			cout << "num1 = "<< num1<<endl;
			cout << "num2 = " << num2 << endl;
		}
};

int main()
{
	Defaultconstructor obj;
	obj.display();
}

/*
	Output :
		num1 = 10
		num2 = 20
*/
