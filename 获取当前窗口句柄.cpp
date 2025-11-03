#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{
	// 获取当前窗口句柄
	HWND hwnd = GetForegroundWindow();
	if (hwnd == NULL)
	{
		cout << "获取当前窗口句柄失败" << endl;
		return 1;
	}
	cout << "当前窗口句柄为：" << hwnd << endl;
	return 0;
}