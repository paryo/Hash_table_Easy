#include <limits.h>
#include <stdio.h>

int element_with_max_frq(int nums[], int num_size) {
    int count[10] = {0}; // Assume numbers are 0-9
    int max_val = 0;     // Badlav: Ismein hum sabse badi GINTI (frequency) rakhenge
    int final_ans = 0;   // Ismein asli number rahega

    for (int i = 0; i < num_size; i++) {

        // --- Aapka Counting Logic (Sahi hai, isse frequency milti hai) ---
        if (count[nums[i]] != 0) {
            count[nums[i]]++;
        }
        else {
            count[nums[i]] = 1;
        }

        // --- Badlav: Winner Check loop ke andar par if/else ke bahar ---
        // Isse {1, 2, 3} jaise cases bhi check honge kyunki check har element ke liye chalega
        
        if (count[nums[i]] > max_val) {
            max_val = count[nums[i]]; // Nayi sabse badi ginti save karo
            final_ans = nums[i];      // Winner number ko save karo
        }
    }

    return final_ans;
}

int main() {
    int nums[] = {1,2,3}; // Is par output 1 aayega (Winner)
    int num_size = sizeof(nums) / sizeof(nums);

    printf("%d", element_with_max_frq(nums, num_size));

    return 0;
}