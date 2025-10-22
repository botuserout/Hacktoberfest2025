//short and easy code using the iterative method
//______________How to use____________________________//
// Very simple install the C++ system requirements from mingw and use an IDE you like to store the code in any name of the file, but the  important thing is the file extension, so use the (Name_of_file.cpp)
// then compile the code in the teriminal using the g++ or download the "Coderrunner" extension in VScode, you will be good to go,
// Or you could skip all these chores and directly use any online compilers available on the internet
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
