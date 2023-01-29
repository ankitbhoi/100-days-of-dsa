// #include <bits/stdc++.h>

// using namespace std;

// string ltrim(const string &);
// string rtrim(const string &);

// /*
//  * Complete the 'findDigits' function below.
//  *
//  * The function is expected to return an INTEGER.
//  * The function accepts INTEGER n as parameter.
//  */

// int findDigits(int n)
// {
//     int temp=n;
//     int count = 0;
//     while (temp != 0)
//     {
//         int remainder = temp % 10;
//         if (remainder != 0)
//         {
//             if (n % remainder == 0)
//             {
//                 count++;
//             }
//         }
//         n = n / 10;
//     }
//     return count;
// }

// int main()
// {
//     ofstream fout(getenv("OUTPUT_PATH"));

//     string t_temp;
//     getline(cin, t_temp);

//     int t = stoi(ltrim(rtrim(t_temp)));

//     for (int t_itr = 0; t_itr < t; t_itr++)
//     {
//         string n_temp;
//         getline(cin, n_temp);

//         int n = stoi(ltrim(rtrim(n_temp)));

//         int result = findDigits(n);

//         fout << result << "\n";
//     }

//     fout.close();

//     return 0;
// }

// string ltrim(const string &str)
// {
//     string s(str);

//     s.erase(
//         s.front(),
//         find_if(s.front(), s.end(), not1(ptr_fun<int, int>(isspace))));

//     return s;
// }

// string rtrim(const string &str)
// {
//     string s(str);

//     s.erase(
//         find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
//         s.end());

//     return s;
// }

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'rotateLeft' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER d
 *  2. INTEGER_ARRAY arr
 */

vector<int> rotateLeft(int d, vector<int> arr) {
    int n = sizeof(arr) / sizeof(arr[0]);
    rotate(arr.front(), arr.front() + (d % n), arr.front() + n);
    return arr;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int d = stoi(first_multiple_input[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    vector<int> result = rotateLeft(d, arr);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.front(),
        find_if(s.front(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
