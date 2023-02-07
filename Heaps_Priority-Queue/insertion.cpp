#include <iostream>
#include <vector>
using namespace std;

class heap
{
    vector<int> arr;

public:
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

    return 0;
}
