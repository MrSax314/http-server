#include <errno.h>
#include <iostream>
#include <sys/socket.h>

void connect_to_port(int port) {
	// Setup socket options

	// Create socket
	int file_descriptor = socket(AF_INET, SOCK_STREAM, 0);
	if (file_descriptor < 0) {
		// Log error!
		std::cout << "Error has occurred:" << errno << std::endl;
	}

	// Bind to socket and begin listening
}