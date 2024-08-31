// #include <iostream>
// #include <cmath>
// #include <climits>

// using namespace std;

// long long findMinY1(int x1, int x2, int y2, int x3, int y3, int k)
// {
//     for (int y1 = y2; y1 <= 1e7+1; y1++)
//     { // Adjust the range as needed
//         long long area = abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
//         if (area >= 2 * k)
//         {
//             return y1;
//         }
//     }
//     return INT_MAX; // If no valid y1 is found
// }

// int main()
// {
//     int x2, y2, x3, y3, x1, k;
//     cin >> x2 >> y2 >> x3 >> y3 >> x1 >> k;

//     int minY1 = findMinY1(x1, x2, y2, x3, y3, k);
//     cout << minY1 << endl;

//     return 0;
// }



import java.util.Scanner;

public
class TriangleArea
{
public
    static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int x2 = sc.nextInt();
        int y2 = sc.nextInt();
        int x3 = sc.nextInt();
        int y3 = sc.nextInt();
        int x1 = sc.nextInt();
        int k = sc.nextInt();

        long minY1 = findMinY1(x1, x2, y2, x3, y3, k);
        System.out.println(minY1);
    }

public
    static long findMinY1(int x1, int x2, int y2, int x3, int y3, int k)
    {
        for (long y1 = y2; y1 <= 1e7 + 1; y1++)
        { // Adjust the range as needed
            long area = Math.abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
            if (area >= 2 * k)
            {
                return y1;
            }
        }
        return Long.MAX_VALUE; // If no valid y1 is found
    }
}
