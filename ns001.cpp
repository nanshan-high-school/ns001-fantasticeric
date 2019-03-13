#include <iostream>
#include <stack>
using namespace std;
int main() 
{
    int m = 0, n = 0, t = 0, digit_1 = 0, digit_2 = 0, count = 0;
    char d;
    cin >> n >> m;
    int answer[n];
    stack <int> s;
    for(int i = 0; i < m; i++)
    {
        cin >> d >> t;
        if((int)d == 'a')
        {
            while(t + digit_1 > n)
            {
              t = t - 1;
            }
            for(int j = 0; j < t; j++)
            {
                s.push(j+digit_1+1);
            }
            digit_1 += t;
        }
        if((int)d == 'b')
        {
            while(t > s.size())
            {
                t = t - 1;
            }
            for(int k = 0; k < t; k++)
            {
                answer[k+digit_2] = s.top();
                s.pop();
                count++;
            }           
            digit_2 += t;
        }
    }
    for(int h = 0; h < count; h++)
    {
        cout << answer[h] << " ";
    }
}
