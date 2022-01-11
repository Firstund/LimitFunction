#include <iostream>

using namespace std;

int Limit(int value, int min, int max);
int main()
{
    cout << Limit(0, 3, 5) << endl;
    cout << Limit(-3, 1, 3) << endl;
    cout << Limit(5, 1, 3) << endl;

	return 0;
}
// ---Limit매소드에 대한 설명---
// value = 0, min = 1, max = 3일 땐 3을 리턴한다.
// value = -2, min = 1, max = 3일 땐 1을 리턴한다.
// value = -5, min = 1, max = 3일 땐 1을 리턴한다.
// value = 4, min = 1, max = 3일 땐 1을 리턴한다.
// value = 5, min = 1, max = 3일 땐 2를 리턴한다.
// value = 8, min = 1, max = 3일 땐 2를 리턴한다.
// value값이 min값과 max값 사이를 왕복한다고 생각하면 된다.
// value값이 min값보다 적어지면 (min - value) 만큼을 max값에서 빼서 나온 값을 value값에 대입한다. 이 과정을 value값이 min값 이상이 될 때 까지 반복한다.
// value값이 max값보다 많아지면 (value - max) 만큼을 min값에서 더해서 나온 값을 value값에 대입한다. 이 과정을 value값이 max값 이하가 될 때 까지 반복한다.
int Limit(int value, int min, int max)
{
    if (min > max)
    {
        cout << "옳지 않은 min 또는 max의 값" << endl;

        return -1;
    }

    if (value < min)
    {
        return Limit(max - (min - value - 1), min, max);
    }
    else if (value > max)
    {
        return Limit(min + (value - max - 1), min, max);
    }
    else
    {
        return value;
    }
}