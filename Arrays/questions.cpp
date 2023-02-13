#include <iostream>
#include <vector>
using namespace std;

int findUniqueElement(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = arr[i] ^ ans;
    }

    return ans;
}

int main()
{
    // Q1 > find unique element in array int n;
    // cout << "Enter the size of array: " << endl;
    // cin >> n;

    // vector<int> arr(n);

    // cout << "Enter elements in array: " << endl;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cin >> arr[i];
    // }

    // int unique_element = findUniqueElement(arr);

    // cout << "Unique_element is : " << unique_element << endl;

    // Q2 > Union of two arrays int arr[] = {1, 2, 3, 4, 5};
    // int sizea = 5;
    // int brr[] = {6, 7, 8};
    // int sizeb = 3;

    // vector<int> crr;

    // for (int i = 0; i < sizea; i++)
    // {
    //     crr.push_back(arr[i]);
    // }

    // for (int j = 0; j < sizeb; j++)
    // {
    //     crr.push_back(brr[j]);
    // }

    // cout << "Union array is : ";
    // for (int r = 0; r < crr.size(); r++)
    // {
    //     cout << crr[r] << " ";
    // }
    // cout << endl;

    // Q3 Intersection of array
    //     vector<int>
    //         arr{1, 2, 3, 4, 5};
    // vector<int> brr{9, 3, 3, 4, 7};

    // vector<int> crr;

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < brr.size(); j++)
    //     {
    //         if (arr[i] == brr[j])
    //         {
    //             brr[j] = -1;
    //             crr.push_back(arr[i]);
    //         }
    //     }
    // }

    // for (auto value : crr)
    // {
    //     cout << value << " ";
    // }
    // cout << endl;

    // Q4 Pair sum
    //     vector<int>
    //         arr{10, 20, 30, 40, 50, 60, 70};
    // int sum = 80;

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 1; j < arr.size(); j++)
    //     {
    //         if ((arr[i] + arr[j]) == sum)
    //         {
    //             cout << arr[i] << " " << arr[j] << endl;
    //         }
    //     }
    // }

    // // Q5 Triplet Pair sum
    // vector<int> arr{10, 20, 30, 40, 50, 60, 70};
    // int sum = 90;

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = i + 1; j < arr.size(); j++)
    //     {
    //         for (int k = j + 1; k < arr.size(); k++)
    //         {
    //             if ((arr[i] + arr[j] + arr[k]) == sum)
    //             {
    //                 cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
    //             }
    //         }
    //     }
    // }

    // Q6 sort array of 0 and 1

    // vector<int> arr{0, 1, 0, 1, 0, 0, 1, 1, 0, 0, 1};

    // int start = 0;
    // int end = arr.size() - 1;
    // int i = 0;

    // while (start <= end)
    // {
    //     if (arr[start] == 0)
    //     {
    //         swap(arr[start], arr[i]);
    //         i++;
    //         start++;
    //     }
    //     else
    //     {
    //         swap(arr[end], arr[i]);
    //         end--;
    //     }
    // }

    // for (auto value : arr)
    // {
    //     cout << value << " ";
    // }

    // Q Left shift array by 1
    // vector<int> arr{1, 2, 3, 4, 5};
    // int end = arr[0];
    // for (int i = 0; i < arr.size(); i++)
    // {

    //     if (i == arr.size() - 1)
    //     {
    //         arr[i] = end;
    //     }
    //     else
    //     {
    //         arr[i] = arr[i + 1];
    //     }
    // }

    // for (auto value : arr)
    // {
    //     cout << value << " ";
    // }

    return 0;
}
