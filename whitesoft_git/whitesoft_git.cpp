#include <iostream>
#include <list>
#include <deque>

using namespace std;

void MyArray(array<float, 10>& arr)
{
    int max = INT_MIN;
    float sum = 0;
    float m = 0;
    cout << "Array: ";
    for (int i = 0; i < arr.size(); i++) {
        arr[i] = -50 + rand() % 100;
        if (max < arr[i]) {
            max = arr[i];
        }

        sum += arr[i];
        cout << arr[i] << " ";
    }
    cout << endl << "Sum: " << sum << endl;
    m = sum / arr.size();
    cout << "Arithmetic average: " << m << endl;
    cout << "max: " << max << ", max/2: " << 0.5 * max << endl;

    cout << "New array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] / (0.5 * max) << " ";
    }
}

void MyVect(vector <float>& v) {
    int max = INT_MIN;
    const int size = 10;
    float sum = 0;
    float m = 0;

    cout << "Vector: ";
    for (int i = 0; i < size; i++) {
        v.push_back(-50 + rand() % 100);
        if (max < v[i])
            max = v[i];
        sum += v[i];

        cout << v[i] << " ";
    }
    cout << endl << "Sum: " << sum << endl;
    m = sum / v.size();
    cout << "Arithmetic average: " << m << endl;
    cout << "max: " << max << ", max/2: " << 0.5 * max << endl;

    cout << "New vector: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] / (0.5 * max) << " ";
    }
}

void MyList(list <float>& l)
{
    int max = INT_MIN;
    list <float>::iterator it;
    const int size = 10;
    float sum = 0;
    float m = 0;

    cout << "List: ";
    for (int i = 0; i < size; i++)
    {
        int t = -50 + rand() % 100;
        l.push_back(t);
        if (max < t)
            max = t;
    }

    for (it = l.begin(); it != l.end(); it++)
    {
        sum += *it;
        cout << *it << " ";
    }
    cout << endl << "Sum: " << sum << endl;
    m = sum / l.size();
    cout << "Arithmetic average: " << m << endl;
    cout << "max: " << max << ", max/2: " << 0.5 * max << endl;

    cout << "New list: ";
    for (it = l.begin(); it != l.end(); it++) {
        cout << *it / (0.5 * max) << " ";
    }
}

void MyDeque(deque<float>& d)
{
    int max = INT_MIN;
    const int size = 10;
    float sum = 0;
    float m = 0;

    cout << "Deque: ";
    for (int i = 0; i < size; i++)
    {
        d.push_back(-50 + rand() % 100);
        if (max < d[i])
            max = d[i];
        sum += d[i];
        cout << d[i] << " ";
    }
    cout << endl << "Sum: " << sum << endl;
    m = sum / d.size();
    cout << "Arithmetic average: " << m << endl;
    cout << "max: " << max << ", max/2: " << 0.5 * max << endl;

    cout << "New deque: ";
    for (int i = 0; i < size; i++)
    {
        cout << d[i] / (0.5 * max) << " ";
    }
    cout << endl;
}

int main()
{
    array <float, 10> arr;
    vector<float> vec;
    list<float> list;
    deque<float> deq;

    MyArray(arr);
    cout << endl << endl;
    MyVect(vec);
    cout << endl << endl;
    MyList(list);
    cout << endl << endl;
    MyDeque(deq);
    return 0;
}

