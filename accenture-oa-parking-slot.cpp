#include <stdio.h>
int max_cars_parked(int n, char arr[])
{
    int max_cars = 0;
    int current_cars = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 'S')
        {
            current_cars++;
        }
        else
        {
            max_cars = (max_cars > current_cars) ? max_cars : current_cars;
            current_cars = 0;
        }
    }
    max_cars = (max_cars > current_cars) ? max_cars : current_cars;
    return max_cars;
}
int main()
{
    int n = 16;
    char arr[] = "XXXSXXSXXSSXXSXX";
    int result = max_cars_parked(n, arr);
    printf("%d\n", result);
    return 0;
}