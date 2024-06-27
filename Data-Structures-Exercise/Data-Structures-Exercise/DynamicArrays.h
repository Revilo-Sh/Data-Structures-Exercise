#pragma once
class DynamicArrays
{
public:
	// Setting Up the Dynmaic Array
	DynamicArrays();
	~DynamicArrays();

public:

	///// Adding And Removing data From the Array
	void AddToArray(int index, int SelectedData);
	void RemoveFromArray(int index);
	// Need To Add In The Middel Of the array ("DONT KNOW IF I NEED THIS ONE")
	
	///// Sorting the Array
	void SortArray();
	void Shuffelarray();

	void printdata(); // Showing the Data Of the Array

	///// Operators
	DynamicArrays& operator= (const DynamicArrays* other);
	DynamicArrays& operator = (int intarray[]);


private:
	int SelectedData; // To Select Where On the Array To edit
	int* Dataarray; // Setting The Array Size
};

