#include "DynamicArrays.h"
#include <iostream>

using namespace std;

DynamicArrays::DynamicArrays()
{
	int* tmpArray = new int[1];
	delete[] Dataarray;
	Dataarray = tmpArray;
}

DynamicArrays::~DynamicArrays(){
	delete[] Dataarray;
}

void DynamicArrays::AddToArray(int index, int SelectedData){
	// Get Array
	// select where in the array
	// Add Another Space In to The Array
	// Chnage Space In to A Number
	// return data
}

void DynamicArrays::RemoveFromArray(int index){
	// get array
	// select where in the array
	// Remove Number In array
	// Move Data Back by 1
	// return data
}

void DynamicArrays::SortArray(){
	// get array
	// sort data by binery size
	// return data
}

void DynamicArrays::Shuffelarray(){
	// get array
	// Make A Temp Array
	// Grab Data ramdomly from the Dataarray and put it in the temp
	// once done with all data set Temp Array data to Dataarray
	// Delate Data from Temp array
	// return data
}

void DynamicArrays::printdata(){
	for (int i = 0; i <= 10; i++) {
		cout << Dataarray[i] << endl;
	}
}

DynamicArrays& DynamicArrays::operator=(const DynamicArrays* other){
	
	bool continueCheck = true; // Make the ContinueCheck True
	int arraysize = other->Dataarray; // Make the i_ArraySize the Same size of the DataArray
	int* tmpArray = new int[arraySize + 1]; // make the temp array the same size as i_arraysize and adds 1 to it
	
	for (int i = 0; i <= _arraySize; i++) { // a For Loop That Gose Through the Array
		tmpArray[i] = other->Dataarray[i];// Set TempArray data to the new array
	}

	delete[] Dataarray; // delates Data from the Array
	Dataarray = tmpArray; // Sets New Data New data in the array
	Dataarray = sizeof(Dataarray); // Set The length Of the Array
	return *this; // return data
}

DynamicArrays& DynamicArrays::operator=(int intarray[])
{
	// TODO: insert return statement here
}
