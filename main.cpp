#include <winsock2.h>
#include <stdio.h>

#pragma comment (lib,"WSock32.lib")

int main() {

	WSADATA wsaData;

	if (WSAStartup(MAKEWORD(2, 0), &wsaData) != 0) {
		//�������G���[
		printf("WinSock�̏������Ɏ��s���܂���\n");
		return 1;
	}

	WSACleanup();

	return 0;
}