#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{
	// 获取当前窗口句柄
	HWND current_window_hwnd = GetForegroundWindow();
	if (current_window_hwnd == NULL)
	{
		cout << "获取当前窗口句柄失败" << endl;
	}

	HWND lastTarget = NULL;
	HWND target = NULL;

	while (true)
	{
		// 获取鼠标指向的窗口句柄
		POINT cursor_pos;
		GetCursorPos(&cursor_pos);
		target = WindowFromPoint(cursor_pos);
		if (target == NULL)
		{
			cout << "获取鼠标指向的窗口句柄失败" << endl;
			return 1;
		}
		if (target != lastTarget)
		{
			cout << "鼠标指向的窗口句柄为：" << target << endl;
			if (target == current_window_hwnd)
			{
				cout << "鼠标指向的窗口为当前窗口" << endl;
			}
			lastTarget = target;
		}
	}

	return 0;
}