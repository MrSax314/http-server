#include <atomic>
#include <iostream>

std::atomic<bool> interrupted(false);

int main() {

	std::cout << "Starting program\n";

	while (!interrupted) {
		// Listen for incoming tcp messages
		// Decipher message
		// Respond to message
	}

	std::cout << "Ending program...\n" << std::flush;
	return 0;
}