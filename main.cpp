#include <Windows.h>
#include <iostream>

int main(int argc, char* argv[]) {
	if (argc != 3) {
		std::cerr << "Wrong Input" << std::endl;
	}
	
	long x = strtol(argv[1], nullptr, 10);
	long y = strtol(argv[2], nullptr, 10);

	// �}�E�X���ړ�
	SetCursorPos((int)x, (int)y);

	// ���N���b�N
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	Sleep(50);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

	return 0;
}