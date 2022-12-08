#include <cstdlib>
#include <iostream>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char **argv) {
  string code;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int casos = 0;
  int *nums;
  string frase = "";
  string numero = "";
  cin >> casos;
  cin.ignore();
  for (int j = 0; j < casos; j++) {
    getline(cin, frase);
    int k = 0;
    for (int i = 0; i < frase.length(); i++)
    {
        if(frase[i] != ' ')
        {
            if(frase[i] == '1')
            {
                if(frase[i + 1] == '0' || frase[i + 1] == '1' || frase[i + 1] == '2' || frase[i+ 1] =='3')
                {
                    //cout << "SON 2 " << frase[i] << frase[i + 1] << endl;
                    string c3 = std::string(1,frase[i])+frase[i +1];
                    nums[k] = stoi(c3);
                    i++;
                    k++;
                }
                else{
                    //cout << "SOLO 1: " << frase[i] << endl;
                    nums[k] = (int)frase[i] -48;
                    k++;
                }
            }
            else{
                //cout << frase[i] << endl;
                nums[k] = (int)frase[i] -48;
                k++;
            }
        }
    }
    int len = sizeof(nums) / sizeof(nums[0]);
    sort(nums, nums + len);
    int check = 0;
    int count = 1;
    int flag = 0;
    // for (int i = 0; i < 7; i++)
    // {
    //     cout << nums[i] << endl;
    // }
    
    //cout << endl;
    //cout << endl;
    for (int i = 0; i < 7; i++)
    {
        check = nums[i];
        //cout << endl;
        //cout << "TODO " << check << endl;
        if(check + 1 == nums[i + 1])
        {
            if(check == 12 || check + 1 == 1)
                flag = 1;
            count++;
            //cout << "COUNT: " << count << endl;
            //cout << "CHECK: " << check << endl;
            //cout << "Conse; " << (check + 1) << endl;
        }

        else if(!nums[i + 1])
        {
            if(check - 1 == nums[i])
            {
                //cout << "final " << check << endl;
                if(check == 13 || check + 1 == 13)
                    flag = 1;
                count++;
            }
        }
        else if(check == nums[i + 1])
        {
            //cout << " REPE " << check << endl;
        }
        else if(count >= 5)
            break ;
        else{
            count = 1;
        } 
    }
    //cout << count << endl;
    if(count < 5)
    {
        cout << "NO" << endl;
    }
    else{
        if(flag == 1)
        {
            cout << "ESCALA REIAL" << endl;
        }
        else{
            cout << "ESCALA" << endl;
        }
    }
  }
  

  return 0;
}