#pragma once
#include <vector>
#include <cstdint>

using namespace std;

class Rom
{
	public:
		Rom(vector<uint8_t> fileHeader, vector<uint8_t> data);

		void printRom();

	private:
		vector<uint8_t> fileHeader;
		vector<uint8_t> data;
};

