//Selection sort(MAX..MIN)
#include <iostream>
#include <vector>

using namespace std;

void printRes(vector <int> array){
    for (int i = array.size(); i >0 ; i--)
        cout << array[i - 1] << " ";
}

void selectSort(vector <int> &array){
    for (int i = 0; i < array.size() - 1; i++)
        for (int j = i + 1; j < array.size(); j++)
            if (array[i] > array[j]) {
                swap(array[i], array[j]);
            }
}


int main() {
    int n;
    cout << "Enter the array size:\n";
    cin >> n;
    vector <int> array(n);
    cout << "Enter your array:\n";
    for (int i = 0; i < n; i++ )
        cin >> array[i];
    selectSort(array);
    printRes(array);
    return 0;
}
