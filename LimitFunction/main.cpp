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
// ---Limit�żҵ忡 ���� ����---
// value = 0, min = 1, max = 3�� �� 3�� �����Ѵ�.
// value = -2, min = 1, max = 3�� �� 1�� �����Ѵ�.
// value = -5, min = 1, max = 3�� �� 1�� �����Ѵ�.
// value = 4, min = 1, max = 3�� �� 1�� �����Ѵ�.
// value = 5, min = 1, max = 3�� �� 2�� �����Ѵ�.
// value = 8, min = 1, max = 3�� �� 2�� �����Ѵ�.
// value���� min���� max�� ���̸� �պ��Ѵٰ� �����ϸ� �ȴ�.
// value���� min������ �������� (min - value) ��ŭ�� max������ ���� ���� ���� value���� �����Ѵ�. �� ������ value���� min�� �̻��� �� �� ���� �ݺ��Ѵ�.
// value���� max������ �������� (value - max) ��ŭ�� min������ ���ؼ� ���� ���� value���� �����Ѵ�. �� ������ value���� max�� ���ϰ� �� �� ���� �ݺ��Ѵ�.
int Limit(int value, int min, int max)
{
    if (min > max)
    {
        cout << "���� ���� min �Ǵ� max�� ��" << endl;

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