//
// Created by haoranx98 on 12/25/22.
//

#include <iostream>
#include "divide_algorithm.h"

using namespace std;
void Merge(std::vector<Number> &numbers, int l, int q, int r){
    int count = r - l + 1;
    vector<Number> temp(count);
    int i = 0;
//    int j = 0;
    int left = l;
    int right = q + 1;

    while (left <= q && right <= r){
        if(!numbers[left].is_valid() && !numbers[right].is_valid()){
            left++;
            right++;
        }else if(!numbers[left].is_valid()){
            left++;
        }else if(!numbers[right].is_valid()){
            right++;
        }else{
            if(numbers[left].num < numbers[right].num){
                temp[i] = numbers[left];
                numbers[left].valid = false;
                i++;
                left++;
            }else if(numbers[left].num == numbers[right].num){
                temp[i] = numbers[left];
                numbers[left].valid = false;
                temp[i].amount = temp[i].amount + numbers[right].amount;
                numbers[right].valid = false;
//                cout << temp[i].amount << endl;
                i++;
                left++;
                right++;
            }else{
                temp[i] = numbers[right];
                numbers[right].valid = false;
                i++;
                right++;
            }
        }
    }

    while(left<=q){
        if(numbers[left].is_valid()){
            temp[i]=numbers[left];
            i++;
            left++;
        }else{
            break;
        }
    }

    while(right<=r){
        if(numbers[right].is_valid()){
            temp[i]=numbers[right];
            i++;
            right++;
        }else{
            break;
        }
    }

    for(int j = 0; j < count; j++){
        numbers[l+j] = temp[j];
    }

}
void MergeSort(std::vector<Number> &numbers, int l, int r){
    if(l==r)
        return;  //递归基是让数组中的每个数单独成为长度为1的区间
    int q = (l + r)/2;
//    std::cout << 'a' << std::endl;
    MergeSort(numbers, l, q);
    MergeSort(numbers, q + 1, r);
    Merge(numbers, l, q, r);
}