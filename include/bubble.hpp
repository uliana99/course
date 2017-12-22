//  BUBBLE_SORT.HPP

/*!
    \file
    \brief Заголовочный файл print.hpp
    \author Автор
    \date  2017 года
    Декларация функций bubble_sort и messageBubble
*/
#ifndef _BUBBLE_HPP_
#define _BUBBLE_HPP_

#include <iostream>
#include <cstdlib> //  rand, srand
#include <ctime> //  time
#include <fstream>

/*!
Функция bubble_sort (1)
\param[in] arr[] - массив
\param[in] arr_size - размер массива
*/
void bubble_sort(int arr[], int arr_size){
    if(arr_size > 1){
        int size = arr_size;
        for(bool sorted = 0; sorted != size; --size)
            for(int i = 1; i < size; ++i)
                if(arr[i-1] > arr[i]){
                    std::swap(arr[i-1], arr[i]);
                }
    }
}

/*!
Функция messageBubble (2)
\param[in] arr[] - массив
\param[in] size - размер
*/
void messageBubble(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

#endif  // _BUBBLE_HPP_
