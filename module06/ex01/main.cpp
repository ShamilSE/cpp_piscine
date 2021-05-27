#include <time.h>
#include <iostream>
#include <string>
#include "Data.hpp"

const size_t	string_len = 10;

char*	create_serialized_string() {
	char	characters[64] = "1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char*	str = new char[string_len];
	srand(time(NULL));

	for (size_t i = 0; i < string_len; i++)
		str[i] = characters[rand() % 32];
	std::cout << str << std::endl;
	return str;
}

void*	serialize(void) {
	char*	str1 = create_serialized_string();
	int		integer = rand();
	char*	str2 = create_serialized_string();

	char*	serialized = new char[(string_len * 2) + sizeof(int)];

	memcpy(serialized, str1, string_len);
	memcpy(serialized + string_len, &integer, sizeof(int));
	memcpy(serialized + string_len + sizeof(int), str2, string_len);
	std::cout << integer << std::endl;
	return serialized;
}

Data*	deserialize(void* raw) {
	Data	*data = new Data;
	char*	integer = new char[sizeof(int)];

	data->str1 = new char[string_len];
	data->str2 = new char[string_len];

	memcpy(data->str1, raw, string_len);
	memcpy(integer, reinterpret_cast<char*>(raw) + string_len, sizeof(int));
	memcpy(data->str2, static_cast<void*>(reinterpret_cast<char*>(raw) + string_len + sizeof(int)), string_len);

	data->integer = *(reinterpret_cast<int*>(integer));
	return data;
}

int main(void) {
	void*	serialized = serialize();
	Data*	data = deserialize(serialized);
	std::cout << std::endl;
	std::cout << data->str1 << std::endl;
	std::cout << data->str2 << std::endl;
	std::cout << data->integer << std::endl;
	return 0;
}
