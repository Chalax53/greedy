#pragma once
#include <iostream>
#include <vector>
using namespace std;

class cajero
{
public:
	cajero(int a, int b, int c, int d);
	vector<int> check(int, int);

private:
	vector<int> coin_values = { 10, 5, 2, 1 }; // Coin denominations
	vector<int> coin_counts;
	void printer(vector<int>);

};

