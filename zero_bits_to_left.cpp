#include <iostream>

void DisplayArray(int arr[], int size){
	for(int i = 0; i < size; i++){
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

int main(){
	int arr[] = {0, 1, 2, 0, 3, 4, 5, 4, 0, 7, 3, 7, 0, 9, 0};
	
	int size_o_arr = sizeof(arr);
	int size_o_int = sizeof(int);
	int num_of_ele = size_o_arr/size_o_int;
	int last_index = num_of_ele - 1;
	int temp_arr[num_of_ele];
	int temp_last_index = last_index;

	for (int i = last_index; i >= 0; i--){
		if (arr[i] != 0){
			temp_arr[temp_last_index] = arr[i];
			temp_last_index --;
		}
			
	}
	for (int j = 0; j < temp_last_index; j++){
		temp_arr[j] = 0;
	}
	
	// Original Array
	DisplayArray(arr, num_of_ele);

	// Modified Array
	DisplayArray(temp_arr, num_of_ele);
	
	return 0;
}

