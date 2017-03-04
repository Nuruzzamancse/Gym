#include<bits/stdc++.h>

using namespace std;

int main()
{

    char password[105], entered_password[105],third_party[105];
    int  length_password, length_of_entered_password, number_of_mismatch=0;

    cin>>password;
    cin>>entered_password;

    length_password = strlen(password);
    length_of_entered_password = strlen(entered_password);

    if(length_password<length_of_entered_password)
    {
        cout<<"no"<<endl;
        return 0;
    }

    if(length_password>=8)
    {
        if(length_password > length_of_entered_password)
        {
            int greater_1 = length_password - length_of_entered_password;
            if(greater_1>1)
            {
                cout<<"no"<<endl;
                return 0;
            }
            int i=0;
            bool flag = false;
            for(int j=0; i<length_password; i++,j++)
            {
                if(password[i]==entered_password[j])
                {
                    third_party[i]= entered_password[j];
                }
                else if(password[i]!=entered_password[j])
                {
                    third_party[i]='*';
                    if(!flag)
                    {
                        j--;
                    }

                }

            }

            third_party[i]='\0';

        }
        if(length_password==length_of_entered_password)
        {
            int i=0;
            for(; i<length_password; i++)
                if(password[i]!=entered_password[i])
                {
                    third_party[i]='*';
                }
                else if(password[i]==entered_password[i])
                {
                    third_party[i]=entered_password[i];
                }

            third_party[i]='\0';

        }

        for(int i=0; i<length_password; i++)
        {
            if(password[i]!=third_party[i])
                number_of_mismatch++;
        }

        if(number_of_mismatch>1)
        {
            cout<<"no"<<endl;
            return 0;
        }
        else if(number_of_mismatch<=1)
        {
            cout<<"yes"<<endl;
            return 0;
        }

    }

    for(int i=0; password[i]; i++)
        if(password[i]!=entered_password[i])
        {
            cout<<"no"<<endl;
            return 0;
        }

    cout<<"yes"<<endl;
    return 0;

}