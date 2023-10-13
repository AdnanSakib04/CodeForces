#include <iostream>
#include <cctype>
using namespace std;
int main(){
    int n, distinct_letter = 0;
    cin >> n;
    string s;
    cin >> s;
    int arr[n];
    if (n < 26){
        cout << "NO" << endl;
    }
    else{
        for (int i = 0; i < s.length(); i++){
            s[i] = tolower(s[i]);
        }

        for (int i = 0; i < n; i++){
            arr[i] = 0;
        }

        for (int i = 0; i < n; i++){
            
            //check if this alphabet is already found or not
            if(arr[i] == 0){
                distinct_letter++;
                for (int j = i+1; j < n; j++){
                    if(s[i] == s[j]){
                        arr[j] = 1; //setting 1 if same letter is found in the string
                    }
                }

            }
        }

        if(distinct_letter == 26){
           cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
    
        }
    }

    return 0;
}
