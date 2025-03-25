#include <iostream>
using namespace std;

int Arr[20];
int n;

void input()
{
    while (true)
    {
        cout << "masukkan jumlah data pada Array : ";
        cin >> n;
        if (n <=20)
        {
        break;
        }
        else
        {
        cout << "\nArray yang anda masukkan maksimal 20 Elemen.\n";
        }
        cout << endl;
        cout << "=====================" << endl;
        cout << "masukkan elemen Array" << endl;
        cout << "=====================" << endl;

        for (int i = 0; i < n; i++)
        {
            cout << "data ke-" << (i + 1) << ": ";
            cin >> Arr[i];
        }
    }
}

void insertionSort()
{
    int temp;
    int j, i;
    for (i = 1; i <= n - 1; i++)
    {
        temp = Arr(i);
        j = i - 1;
        while (j>= 0 && Arr[j] > temp)
        {
            Arr[j + 1] = Arr[j];
            j--;
        }
        Arr[j + 1] = temp;
    }
}

void display()
{
    cout << endl;
    cout << "======================" << endl;
    cout << "total pass = " << n - 1 << endl;
    cout << "======================" << endl;
    cout << "Element Array yang telah teersusun " << endl;
    cout << " ======================" << endl;

    for (int j = 0; j < n; j++)
    {
        cout << Arr[j] << endl;
    }
        cout << endl;

}
int masin()
{
    input();
    insertionSort();
    display();
    system("pause");
    return 0;
}