//  INSERTION_SORT.HPP

/*!
    \file
    \brief Заголовочный файл print.hpp
    \author Автор
    \date  2017 года
    Декларация функций bubble_sort и messageBubble
*/
#ifndef _INSERTION_HPP_
#define _INSERTION_HPP_

#include <time.h>
#include <iostream>



/*!
Функция insertsort (1)
\param[in] arr[] - массив
\param[in] s - размер массива
*/
void insertsort(int arr[], int s){
    for (int i = 1; i < s; i++){
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}



/*!
Функция messageInsertsort (2)
\param[in] arr[] - массив
\param[in] size - размер
*/
void messageInsertsort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

#endif  // _INSERTION_HPP_
