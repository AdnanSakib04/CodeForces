#include <iostream >
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int count_of_1 = 0;
    int count_of_2 = 0;
    int count_of_3 = 0;
    int count_of_plus = 0;
    int count_of_plus_check = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '1'){
            count_of_1++;
        }
        else if(s[i] == '2'){
            count_of_2++;
        }
        else if(s[i] == '3'){
            count_of_3++;
        }
        else{
            count_of_plus++;
        }
    }

      if(count_of_1){
            for (int i = 0; i < count_of_1; i++)
            {
                if(count_of_plus_check == count_of_plus)
                {
                    cout<<"1"<<endl;
                }
                else{
                    cout<<"1+";
                }
                count_of_plus_check++;
            }
            
        }
        if(count_of_2){
            for (int i = 0; i < count_of_2; i++)
            {
                 if(count_of_plus_check == count_of_plus)
                {
                    cout<<"2"<<endl;
                }
                else{
                    cout<<"2+";
                }
                count_of_plus_check++;
            }
            
        }
        if(count_of_3){
            for (int i = 0; i < count_of_3; i++)
            {
                 if(count_of_plus_check == count_of_plus)
                {
                    cout<<"3"<<endl;
                }
                else{
                    cout<<"3+";
                }
                count_of_plus_check++;
            }   
        }
    
    return 0;
}
