

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	double x1, y1, x2, y2, d, choice;
	do
	{
		cout << "please enter the first point(x1,y1)";
		cin >> x1 >> y1;
		cout << "please enter the second point (x2,y2)";
		cin >> x2 >> y2;
		d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		cout << "the distance between the two poitnts = " << d;
		cout << "\npress zero if you want to stop,  and one to contino ";
		cin >> choice;
		if (choice != 0 && choice != 1);
		cout << "wroung input";
	}

	while (choice);
	return 0;
}

