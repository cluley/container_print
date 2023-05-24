#pragma once

#include <vector>
#include <list>
#include <set>

template<class T>
void print_container(T container) {
	for (auto itr = container.begin(); itr != container.end(); ++itr)
	{
		std::cout << (*itr) << ' ';
	}
	std::cout << std::endl;
}