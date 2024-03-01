

#include <iostream>
#include <ctime>

void fillArray(int* arr, int size) {
    srand(time(0));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 60 + 1;
    }
}

//для quick sort, bubble sort
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

//для quick sort
int partition(int* arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

//quick sort
void quickSort(int* arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

//bubble sort
void bubbleSort(int* arr, int size) {
    bool swapped;
    for (int i = 0; i < size - 1; i++) {
        swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

//Insertion sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main()
{
    //quick sort
    int size;
    std::cout << "Inter array size: ";
    std::cin >> size;
    int* arr = new int[size];

    fillArray(arr, size);
    quickSort(arr, 0, size - 1);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;

    //bubble sort
    int size2;
    std::cout << "Inter array2 size: ";
    std::cin >> size2;
    int* arr2 = new int[size2];

    fillArray(arr2, size2);
    bubbleSort(arr2, size2);

    std::cout << "Sorted array2: ";
    for (int i = 0; i < size2; i++) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr2;

    //Insertion sort
    int size3;
    std::cout << "Inter array3 size: ";
    std::cin >> size3;
    int* arr3 = new int[size3];

    fillArray(arr3, size3);
    bubbleSort(arr3, size3);

    std::cout << "Sorted array3: ";
    for (int i = 0; i < size3; i++) {
        std::cout << arr3[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr3;
    return 0;
}
