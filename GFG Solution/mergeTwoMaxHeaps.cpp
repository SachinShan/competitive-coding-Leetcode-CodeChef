class Solution
{
public:
    vector<int> arr;

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

    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m)
    {
        // your code here

        for (auto i : a)
            arr.push_back(i);
        for (auto i : b)
            arr.push_back(i);

        int size = arr.size();
        for (int i = size / 2 + 1; i >= 0; i--)
        {
            heapify(size, i);
        }
        return arr;
    }
};