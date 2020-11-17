#pragma once

#include <string>

using namespace std;

namespace Eldercode
{
	class PlayerCharacter
	{
		string givenName;
		string familyName;
		string otherNames;


		int SaveToFile(string fileName, string filePath);
		int LoadFromFile(string fileName, string filePath);
	};
}