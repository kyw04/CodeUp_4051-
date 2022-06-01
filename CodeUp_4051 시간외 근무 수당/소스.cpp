#include <iostream>
using namespace std;

int main()
{
	double start_time, end_time, sum = 0;
	int result = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> start_time >> end_time;
		double t = end_time - start_time - 1;

		if (t > 4)
			t = 4;
		if (t > 0)
			sum += t;
		if (t > 0)
			result += 5000 * t / 0.5;
		//cout << sum << ' ' << result << endl;
	}
	if (sum >= 15)
		result -= result * 0.05;
	else if (sum <= 5)
		result += result * 0.05;

	cout << result;
	return 0;
}