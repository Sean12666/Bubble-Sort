// Bubble Sort.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <array>
#include <iostream>
using namespace std;

template <typename T>
void bubbleSort(T &data, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (data[j] > data[j + 1])
            {
                swap(data[j], data[j + 1]);
            }
        }
    }
}

int main()
{
    const int len = 10;
    array<int, len> arr = { 10, 21873, 384, 9128, 32671, 8123, 2837, 137, 1283, 8472 };
    bubbleSort(arr, len);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
