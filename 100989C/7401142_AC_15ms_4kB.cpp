#include<bits/stdc++.h>

using namespace std;

int main()
{
    int number_of_chair, used_chair, number_of_table, sum_of_unused_chair=0, sum_of_used_char=0;

    cin>>number_of_table;

    while(number_of_table--)
    {
        cin>>used_chair>>number_of_chair;

        sum_of_used_char+=used_chair;
        sum_of_unused_chair+=number_of_chair;
    }

    cout<<sum_of_unused_chair-sum_of_used_char<<endl;
}