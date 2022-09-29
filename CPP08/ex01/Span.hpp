#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Span
{
	private:
		unsigned int _N;
		std::vector<int> _tab;

	public:
		Span(unsigned int N);
		~Span();
		Span(const Span &obj);

		void addNumber(int N);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		void displaySpan();

		Span & operator=(const Span &obj);

};