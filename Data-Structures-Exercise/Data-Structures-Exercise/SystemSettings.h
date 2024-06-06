#pragma once
class SystemSettings
{
public:
	SystemSettings();
	~SystemSettings();

public:

	///// Person Inputs
	// Select What In the Array
	
	///// System Settings
	void ClsClear(); // Calls the Clean Screen
	
	///// Showing the Data
	void WriteAllDataToConsole();// Print All Data
	void WriteSelectedToConsole(); // Print Data Of Selected

	///// Setting All Values
	void SystemDataEqualToAllData();

public:

	int SystemSelectedData; // To Select Where On the Array To edit
	int* SystemDataarray[]; // Setting The Array Size
};

