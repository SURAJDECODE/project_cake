#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0, fact = 1, count = 0;
    cout << "enter n";
    cin >> n;
    /*
    while (i <= n)
    {
        cout << i << endl;
        i++;

    }

    do
    {
        cout << i << endl;
        i++;
    } while (i <= n);


    for (i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
    //multiplication table
    for (i = 1; i <= 10; i++)
    {
        cout << n << " X " << i << " = " << i * n;
        cout << endl;
    }

    // sum of N natural numbers
    for (int i = 1; i <= n;i++)
    {
        sum += i;
    }
    cout << "sum is-->" << sum;

    // factorial of a number
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << n << "!=" << fact << endl;
    cout << "factorial of " << n << "is" << fact << endl;

    // factors of numbers

     cout << "the factors of " << n << endl;
     for (int i = 1; i <= n; i++)
     {
         if (n % i == 0)
             cout << i << endl;
     }

    //perfect number
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (2 * n == sum)
        cout << n << "is a perfect number" << endl;
    else
        cout << n << "is not a perfect number" << endl;

    // PRIME NUMBER
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
        cout << i;
    }
        if (count == 2)
            cout << n << "is a prime number" << endl;
        else
            cout << n << "is not a prime number" << endl;
        cout << count;

    // armstrong number
    #include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, r, sum = 0, m;
    cout << "enter the n";
    cin >> n;
    m = n;


    while (n > 0)
    {
        r = n % 10;
        sum = sum + r * r * r;
        n = n / 10;
    }
    cout << m << endl
         << n;
    if (sum == m)
        cout << "Armstrong Number";
    else
        cout << "Not a Armstrong Number";

        //          0  1  2  3  4
    int A[5] = {1, 2, 3, 4, 5};
    int B[] = {2, 6};


    cout << A[1] << endl;
    cout << A[0] << endl;
    cout << A << endl;

    cout << B[3] << endl;
    cout << B[1] << endl;

    cout << "printing array elements with loop" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << B[i] << endl;
    }
    cout << "using for each loop" << endl;
    for (int x : A)
    {
        cout << x << endl;
    }
    cout << "using auto feature in for each loop in float" << endl;
    float C[] = {2.5f, 4.7f, 7.6f, 3, 35, 4};
    for (auto x : C) // instead of int i will use auto
    {
        cout << x << endl;
    }
    cout << "using auto feature in for each loop in character " << endl;
    char D[] = {'A', 66, 'C', 68};//taking ascii values
    for (auto x : D) // if i put int instead of auto then it gives integer output
    {
        cout << x << endl;
    }
     //          0  1  2  3  4 5 6
    int A[7] = {9, 8, 5, 28, 36, 38, 22};
    int sum = 0, n = 7;
    // sumition of elements of array
    for (int i = 0; i < 7; i++)
    {
        sum = sum + A[i];
    }
    cout << "sum is " << sum << endl;
    // finding the max element of an array

    int max = A[0];
    for (int i = 1; i < 7; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    cout << "max element is " << max << endl;
    return 0;
}
// linear search
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[10], n = 10, key;
    cout << "enter the elements";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "enter the key";
    cin >> key;
    bool flag = false;
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == key)
        {
            //     cout << "key found"
            //          << "  "
            //          << "index is" << i << endl;
            // }
            flag = true;
            idx = i;
        }
    }
        if (flag == true)
        {
            cout << "key found"
                 << "  "
                 << "index is" << idx << endl;
        }
        else
        {
            cout << "key not found";
        }

        return 0;
    }
}
//linear search 1.2
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[10], n = 10, key;
    cout << "enter the elements";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "enter the key";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == key)
        {
            cout << "key found  "
                 << "index is at " << i << endl;
        }
    }
    cout << "key not found" << endl;
    return 0;
}
    */

    return 0;
}