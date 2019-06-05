#include <vector>

using namespace std;

int find_even_index (const vector <int> numbers) {
    int s1 = 0;
    int s2 = 0;
    //O(n)
    for(int i = 1; i < numbers.size(); i++){
        s2 += numbers[i];
    }
    //O(n)
    for(int i = 0; i < numbers.size(); i++){
        if(s1 == s2){   
            return i;
        }
        if(i == numbers.size()){ 
            return -1;
        }
        s1 += numbers[i];
        s2 -= numbers[i + 1];
    }
    return -1;
}