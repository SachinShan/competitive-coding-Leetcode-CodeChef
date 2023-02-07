#include <iostream>
#include <vector>
using namespace std;

class heap
{

public:
    vector<int> arr;
    void insert(int val)
    {
        arr.push_back(val);
        int index = arr.size() - 1;

        while (index > 0 && arr[index] > arr[(index - 1) / 2])
        {
            int parent = ((index - 1) / 2);

            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
            }
            else
            {
                break;
            }

            index = parent;
        }
    }

    void heapify(int n, int i)
    {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && arr[left] > arr[largest])
        {
            largest = left;
        }

        if (right < n && arr[right] > arr[largest])
        {
            largest = right;
        }

        if (largest != i)
        {
            swap(arr[i], arr[largest]);
            heapify(n, largest);
        }
    }

    void print()
    {
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    heap h;

    h.insert(55);
    h.insert(45);
    h.insert(65);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.print();

    int n = h.arr.size();
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        h.heapify(n, i);
    }

    h.print();

    return 0;
}
