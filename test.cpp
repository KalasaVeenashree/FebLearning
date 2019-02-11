#include<iostream>
int main()
{
	int **arrPtr;
	int a;
	std::cout << "Enter a number" << std::endl;
	std::cin >> a;
	arrPtr = new int*[a];
	for (int i = 0;i < a;i++)
	{
		arrPtr[i] = new int[a];
		memset(arrPtr[i], 0, a * sizeof(int));
	}
	int b, c;
	std::cout << "Enter 2 values between 0 and a" << a << std::endl;
	std::cin >> b;
	std::cin >> c;
	//arrPtr[b][c] = 10;
	for (int i = 0; i < a ;i++)
	{
		for (int j = 0;j < a;j++)
		{
			std::cout << arrPtr[i][j] << std::endl;
		}
	}
	std::cin.get();
	return 0;
}