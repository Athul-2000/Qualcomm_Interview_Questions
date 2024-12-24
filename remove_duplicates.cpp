#include <iostream>

bool CheckInArray(int arr[], int data, int cap_index){
	bool found_status = false;
	int iter = 0;
	for(iter = 0; iter < cap_index; iter++){
		if(arr[iter] == data){
			found_status = true;
			break;
		}
	}
	return found_status;
}

int main(){

	int arr[] = {0, 1, 1, 3, 4, 3, 1, 6, 7, 0, 0, 2, 1, 9};
	
	int arr_size = sizeof(arr);
	int int_size = sizeof(int);
	int arr_count = arr_size / int_size;
	int temp_arr[arr_count];
	int element = 0;
	bool status = false;
	int add_loc = 0;

	for(int i = 0; i < arr_count; i++){
		element = arr[i];
		status = CheckInArray(temp_arr, element, add_loc);
		if(status == false){
			temp_arr[add_loc] = element;
			add_loc++;
		}
	}	
	std::cout << "Array Before : ";	
	for(int m = 0; m < arr_count; m++){
		std::cout << arr[m] << " ";
	}
	std::cout << std::endl << "Array After  : ";
	for(int j = 0; j < add_loc; j++){
		std::cout << temp_arr[j] << " ";
	}
	std::cout << std::endl;

	return 0;
}
