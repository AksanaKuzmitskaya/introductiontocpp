#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cout << "Number of integers in the list: ";
    cin >> n;
    int value = 0;
    int sum = 0;
    int minVal = 0;
    int maxVal = 0;
    cout << n << " more numbers: " << endl;
    cin >> value;
    minVal = value;
    maxVal = value;
    for (int i = 1; i < n; i++)
    {
        cin >> value;
        sum += value;
        if (value > maxVal)
        {
            maxVal = value;
        } else if (value < minVal)
        {
            minVal = value;
        }
     
    }    
    int range = maxVal - minVal; 
    double mean = sum / n;
    cout << "Mean: " << mean << endl;
    cout << "Max: " << maxVal << endl;
    cout << "Min: " << minVal << endl;
    cout << "Range: " << range << endl;
}
