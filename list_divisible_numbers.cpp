#include <iostream>

struct Numbers{
        const char* number_in_words;
        int number_in_int;
};

int main(){
        int start = 1;
        int end = 500;
        int count = 0;
        int index = 0;

        struct Numbers num[] = {{"three", 3}, {"five", 5}, {"seven", 7}};
        int num_of_mod = sizeof(num)/sizeof(Numbers);

        for(count = start; count <= end;  count++){
                std::cout << count << ":";
                for(index = 0; index < num_of_mod; index++){
                        if(count % num[index].number_in_int == 0){
                                std::cout << num[index].number_in_words << " ";
                        }       
                }
                std::cout << std::endl;
        }

        return 0;
}
