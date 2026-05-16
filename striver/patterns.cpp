#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int a, b = 2, ascii = 65;
//     cin >> a;
//     for (int i = 0; i < a; i++)
//    {
    
//    }
// }

int main() {
    int a, ascii = 65;
    cin >> a;
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << (char)(ascii + i) << " ";
        }
        cout << "\n";
    }
}


// int main() {
//     int a, ascii = 65;
//     cin >> a;
//     for(int i = 0; i < a; i++)
//     {
//         for(int j = 0; j <= (a - 1) - i; j++)
//         {
//             cout << (char)(ascii + j) << " ";
//         }
//         cout << "\n";
//     }
// }

// int main() {
//     int a, ascii = 65;
//     cin >> a;
//     for(int i = 0; i < a; i++)
//     {
//         for(int j = 0; j <= i; j++)
//         {
//             cout << (char)(ascii + j) << " ";
//         }
//         cout << "\n";
//     }
// }

// int main()
// {
//     int a, b = 1;
//     cin >> a;
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << j + b << " ";
//         }
//         b += i + 1;
//         cout << "\n";
//     }
// }


// int main() {
//     int a;
//     cin >> a;
//     for(int i = 1; i <= a; i++){
//         for(int j = 1; j <= i; j++){
//             cout << j;
//         }
//         for(int k = 1; k <= 2 * (a - i); k++)
//         {
//             cout << " ";
//         }
//         for(int l = i; l >= 1; l--){
//             cout << l;
//         }
//         cout << "\n";
//     }
// }

// void pattern1(int N){
//     int start = 1;
//     for(int i = 0; i < N; i++){
//         if (i % 2 == 0 ) start = 1;
//         else start = 0;
//         for(int j = 0; j <= i; j++){
//             cout << start;
//             start = 1 - start;
//         }
//         cout << "\n";
//     }
// }
// int main() {
//     int N;
//     cin >> N;
//     pattern1(N);
//     return 0;
// }

// int main()
// {
//     int a;
//     cin >> a;
//     for (int i = 0; i <= a - 1; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << "\n";
//         if (i == a - 1)
//         {
//             for (int i = 1; i < a; i++)
//             {
//                 for (int j = a - 1; j >= i; j--)
//                 {
//                     cout << "*";
//                 }
//                 cout << "\n";
//             }
//         }
//     }
// }


// int main(){
//     int a;
//     cin >> a;
//     for (int i = 1; i <= a; i++)
//     {
//         for (int x = 1; x <= a - i; x++)
//         {
//             cout << " ";
//         }
//         for (int j = 2; j <= i + i; j++)
//         {
//             cout << "*";
//         }
//         cout << "\n";
//         if (i == a)
//         {
//             for (int i = 0; i <= a; i++)
//             {
//                 for (int y = 1; y <= i; y++)
//                 {
//                     cout << " ";
//                 }
//                 for (int k = 2; k <= 2 * (a - i); k++)
//                 {
//                     cout << "*";
//                 }
//                 cout << "\n";
//             }
//         }
//     }
// }

// int main() {
//     int a;
//     cin >> a;
//     for(int i = 0; i < a ; i++){
//         for(int k = 0; k <= i; k++){
//             cout << " ";
//         }
//         for(int j = 2; j <= 2 * (a - i); j++){
//             cout << "*";
//         }
//         cout << "\n";
//     }
// }

// int main()
// {
//     int a;
//     cin >> a;
//     for (int i = 1; i <= a; ++i)
//     {
//         for (int k = -1; k >= i - a; k--)
//         {
//             cout << " ";
//         }
//         for (int j = 2; j <= i + i; j++)
//         {
//             cout << "*";
//         }
//         cout << "\n";
//     }
// }


// int main() {
//     int a;
//     cin >> a;
//     for(int i = a; i >= 0; i--)
//     {
//         for(int j = 1; j <= i; j++){
//             cout << j;
//         }
//         cout << "\n";
//     }
// }

// int main()
// {
//     int a;
//     cin >> a;
//     for (int i = 0; i <= a; i++)
//     {
//         for (int j = a; j >= i; j--)
//         {
//             cout << "*";
//         }
//         cout << "\n";
//     }
// }

// int main() {
//     int a;
//     cin >> a;
//     for(int i = 1; i <= a + 1; i++){
//         for(int j = 1; j <= i; j++){
//             cout << i;
//         }
//         cout << "\n";
//     }
// }


// int main() {
//     int a;
//     cin >> a;
//     for(int i = 1; i <= a; i++){
//         for(int j = 1; j <= i; j++){
//             cout << j;
//         }
//         cout << "\n";
//     }
// }

// int main() {
//     int a;
//     cin >> a;
//     for(int i = 0; i < a; i++)
//     {
//         for(int j = 0; j <= i; j++){
//             cout << "*";
//         }
//         cout << "\n";
//     }
// }

// int main()
// {
//     int a;
//     cin >> a;
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < a; j++)
//         {
//             cout << "*";
//         }
//         cout << "\n";
//     }
// }