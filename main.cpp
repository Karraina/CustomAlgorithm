#include <iostream>
#include <vector>
#include <string>
#include "algorithms.h"

using namespace std;

template <typename T>
void display_vector(const vector<T>& items)
{
	for (const T& item : items)
    	{
        	cout << item << " ";
    	}

    	cout << endl;
}

int main()
{
    	cout << "Custom Search & Sort Library\n";

    	vector<int> numbers = {25, 15, 45, 35, 10};

    	cout << "Original numbers: ";
    	display_vector(numbers);

    	cout << "\nLinear Search\n";

    	int target = 12;

    	if (linear_search(numbers, target))
    	{
        	cout << target << " Was Found.\n";
    	}
    	else
    	{
        	cout << target << " Was Not Found.\n";
    	}

    	cout << "\nSelection Sort\n";

    	selection_sort(numbers);

    	cout << "Sorted numbers: ";
    	display_vector(numbers);

    	cout << "\nBinary Search\n";

    	target = 25;

    	cout << target << (binary_search_custom(numbers, target) ? " Was Found.\n" : " Was Not Found.\n");

    	cout << "\nCount Occurrences\n";

    	vector<int> numbers2 = {10, 20, 10, 30, 10, 40};

    	cout << "Numbers: ";
    	display_vector(numbers2);

    	target = 10;

    	cout << target << " occurs " << count_occurrences(numbers2, target) << " times.\n";

    	target = 50;

    	cout << target << " occurs " << count_occurrences(numbers2, target) << " times.\n";

    	cout << "\nFind Maximum\n";

    	cout << "Largest number: " << find_max(numbers2) << endl;

    	vector<string> names = {"Karraina", "Karma", "Sapphire"};

    	cout << "\nOriginal Names: ";
    	display_vector(names);

    	cout << "Linear Search For Karma: " << (linear_search(names, string("Karma")) ? " Was Found.\n" : " Was Not Found.\n");

    	selection_sort(names);

    	cout << "Sorted names: ";
    	display_vector(names);

    	cout << "Binary Search For Karraina: " << (binary_search_custom(names, string("Karraina")) ? " Was Found.\n" : " Was Not Found.\n");

    	cout << "\nCount Occurrences For Names\n";

	cout << "Karma occurs " << count_occurrences(names, string("Karma")) << " times.\n";

    	cout << "\nFind Maximum Name\n";

    	cout << "Largest name: " << find_max(names) << endl;
}
