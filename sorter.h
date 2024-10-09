#ifndef SORTER_H
#define SORTER_H
/*
Name: selection_int
Use: sorts an array of integers with selection sort
Inputs: array of integers, integer variable holding number of values in array
Output: none
*/
void sel_i(int array[], int n){
int i = 0;
int min, f, storage;
while (i < n-1){
	min = i;
	f = i + 1;
	while (f < n){
		if (array[f] < array[min]){
			min = f;
		}
		f++;
	}
	storage = array[i];
	array[i] = array[min];
	array[min] = storage;
	i++;
}
}
/*
Name: selection_char
Use: sorts an array of chars with selection sort
Inputs: array of chars, integer variable holding number of values in array
Output: none
*/
void sel_c(char array[], int n){
int i = 0;
int min, f;
char storage;
while (i < n-1){
	min = i;
	f = i + 1;
	while (f < n){
		if (array[f] < array[min]){
			min = f;
		}
		f++;
	}
	storage = array[i];
	array[i] = array[min];
	array[min] = storage;
	i++;
}
}
/*
Name: selection_double
Use: sorts an array of doubles with selection sort
Inputs: array of doubles, integer variable holding number of values in array
Output: none
*/
void sel_d(double array[], int n){
int i = 0;
int min, f;
double storage;
while (i < n-1){
	min = i;
	f = i + 1;
	while (f < n){
		if (array[f] < array[min]){
			min = f;
		}
		f++;
	}
	storage = array[i];
	array[i] = array[min];
	array[min] = storage;
	i++;
}
}
/*
Name: selection_float
Use: sorts an array of floatss with selection sort
Inputs: array of floats, integer variable holding number of values in array
Output: none
*/
void sel_f(float array[], int n){
int i = 0;
int min, f;
float storage;
while (i < n-1){
	min = i;
	f = i + 1;
	while (f < n){
		if (array[f] < array[min]){
			min = f;
		}
		f++;
	}
	storage = array[i];
	array[i] = array[min];
	array[min] = storage;
	i++;
}
}

void bubble_int(int[], int n){
	
}

#endif
