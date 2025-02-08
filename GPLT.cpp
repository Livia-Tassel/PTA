// 7-1 N数求和(20分)
// #include <iostream>
// #include <cmath>
// using namespace std;
// // 欧几里得算法
// // 递归式:gcd(a,b)=gcd(b,a%b)
// // 递归边界:gcd（a,0)=a
// long long gcd(long long a, long long b)
// {
//     return (b == 0) ? a : gcd(b, a % b);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     char separator;
//     // 分子、分母、最大公约数
//     long long nume = 0, deno = 1, _gcd;
//     for (int i = 0; i < n; i++)
//     {
//         long long a, b;
//         cin >> a >> separator >> b;
//         // 更新分子和分母
//         nume = nume * b + a * deno;
//         deno *= b;
//         // 化简分数
//         _gcd = gcd(abs(nume), abs(deno)); // 确保gcd参数非负
//         nume /= _gcd;
//         deno /= _gcd;
//         // 检查分母为0
//         if (deno == 0)
//         {
//             cout << "Error: Denominator is zero!" << endl;
//             return 1; // 非零状态码表示异常
//         }
//     }
//     // 输出结果
//     if (nume == 0)
//     {
//         cout << "0" << endl;
//     }
//     else
//     {
//         string sign = (nume * deno < 0) ? "-" : "";
//         nume = abs(nume);
//         deno = abs(deno);
//         if (nume >= deno)
//         {
//             if (nume % deno == 0)
//             {
//                 cout << sign << nume / deno << endl;
//             }
//             else
//             {
//                 cout << sign << nume / deno << " " << nume % deno << "/" << deno << endl;
//             }
//         }
//         else
//         {
//             cout << sign << nume << "/" << deno << endl;
//         }
//     }
//     return 0;
// }

// 7-2 比较大小(10分)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cin >> a >> b >> c;
//     int max, mid, min;
//     if (a >= b && a >= c)
//     {
//         max = a;
//         if (b >= c)
//         {
//             mid = b;
//             min = c;
//         }
//         else
//         {
//             mid = c;
//             min = b;
//         }
//     }
//     else if (b >= a && b >= c)
//     {
//         max = b;
//         if (a >= c)
//         {
//             mid = a;
//             min = c;
//         }
//         else
//         {
//             mid = c;
//             min = a;
//         }
//     }
//     else
//     {
//         max = c;
//         if (a >= b)
//         {
//             mid = a;
//             min = b;
//         }
//         else
//         {
//             mid = b;
//             min = a;
//         }
//     }
//     cout << min << "->" << mid << "->" << max << endl;
//     return 0;
// }

// 7-3 A-B(20分)
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string A, B;
//     getline(cin, A);
//     getline(cin, B);
//     string ret = "";
//     cout << A << endl
//          << B << endl;
//     // // 暴力求解
//     // for (int i = 0; i < A.length(); i++)
//     // {
//     //     bool flag = true;
//     //     for (int j = 0; j < B.length(); j++)
//     //     {
//     //         if (A[i] == B[j])
//     //         {
//     //             flag = false;
//     //             break;
//     //         }
//     //     }
//     //     if (flag)
//     //     {
//     //         ret += A[i];
//     //     }
//     // }
//     // cout << ret << endl;
//     // 哈希法
//     int C[1000] = {0};
//     for (int i = 0; i < B.length(); i++)
//     {
//         C[B[i]] = 1;
//     }
//     for (int i = 0; i < A.length(); i++)
//     {
//         if (C[A[i]] == 0)
//         {
//             ret += A[i];
//         }
//     }
//     cout << ret << endl;
//     return 0;
// }

// 7-4 指数(5分)
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     cout << 2 << "^" << n << " = " << pow(2, n) << endl;
//     return 0;
// }

// 7-5 阶乘求和(10分)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, sum = 0;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         int temp = 1;
//         for (int j = 1; j <= i; j++)
//         {
//             temp *= j;
//         }
//         sum += temp;
//     }
//     cout << sum << endl;
//     return 0;
// }

// 7-6 若智(5分)

// 7-7 画方块(15分)
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     int n;
//     char c;
//     cin >> n >> c;
//     for (int i = 0; i < ceil(n / 2.0); i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << c;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 7-8 查验身份证(15分)
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     char code[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
//     int percentages[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
//     int N;
//     int indicate = 1;
//     cin >> N;
//     for (int i = 0; i < N; i++)
//     {
//         int sum = 0;
//         string Id;
//         cin >> Id;
//         bool flag = true;
//         for (int j = 0; j <= 16; j++)
//         {
//             if (Id[j] > '9' || Id[j] < '0')
//             {
//                 flag = false;
//                 indicate = 0;
//                 break;
//             }
//             sum += (Id[j] - '0') * percentages[j];
//         }
//         if (flag == false)
//         {
//             cout << Id << endl;
//         }
//         else
//         {
//             sum %= 11;
//             if (code[sum] != Id[17])
//             {
//                 cout << Id << endl;
//                 indicate = 0;
//             }
//         }
//     }
//     if (indicate)
//     {
//         cout << "All passed" << endl;
//     }
//     return 0;
// }

// 7-9 集合相似度(25分)
// #include <iostream>
// #include <vector>
// #include <set>
// #include <iomanip>
// using namespace std;
// vector<set<long long>> _sets = vector<set<long long>>(51, set<long long>());
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         int m;
//         cin >> m;
//         // 创建集合时首次去重
//         for (int j = 0; j < m; j++)
//         {
//             long long x;
//             cin >> x;
//             _sets[i].insert(x);
//         }
//     }
//     int k;
//     cin >> k;
//     for (int i = 1; i <= k; i++)
//     {
//         int a, b;
//         cin >> a >> b;
//         int share = 0;
//         int diff = 0;
//         for (long long x : _sets[a])
//         {
//             // 共同元素
//             if (_sets[b].count(x))
//             {
//                 share++;
//             }
//             else
//             {
//                 diff++;
//             }
//         }
//         double similarity = (double)share / (_sets[b].size() + diff);
//         cout << fixed << setprecision(2);
//         cout << similarity * 100 << "%" << endl;
//     }
//     return 0;
// }

// 7-10 树的遍历(25分)

// 圆桌问题(VECTOR)
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     vector<int> table;
//     int n, m;
//     // 未知输入组数(或文件读取)
//     while (cin >> n >> m)
//     {
//         // 清空
//         table.clear();
//         // 编号
//         for (int i = 0; i < 2 * n; i++)
//         {
//             table.push_back(i);
//         }
//         // 模拟
//         int index = 0;
//         for (int i = 0; i < n; i++)
//         {
//             index = (index + m - 1) % (table.size());
//             table.erase(table.begin() + index);
//         }
//         // 输出
//         int j = 0;
//         for (int i = 0; i < 2 * n; i++)
//         {
//             // 50字母换行
//             if (i % 50 == 0 && i != 0)
//                 cout << endl;
//             if (i == table[j] && j < table.size())
//             {
//                 cout << "G";
//                 j++;
//             }
//             else
//             {
//                 cout << "B";
//             }
//         }
//         cout << endl;
//     }
//     system("pause");
//     return 0;
// }

// 士兵队列(LIST)
// #include <iostream>
// #include <list>
// using namespace std;
// int main()
// {
//     int n, t;
//     cin >> t;
//     while (t--)
//     {
//         cin >> n;
//         int k = 2;
//         list<int> soldiers;
//         list<int>::iterator it;
//         for (int i = 1; i <= n; i++)
//         {
//             soldiers.push_back(i);
//         }
//         while (soldiers.size() > 3)
//         {
//             // 士兵出列
//             int num = 1;
//             for (it = soldiers.begin(); it != soldiers.end();)
//             {
//                 if (num % k == 0)
//                 {
//                     it = soldiers.erase(it);
//                     num++;
//                 }
//                 else
//                 {
//                     it++;
//                     num++;
//                 }
//             }
//             k == 2 ? k = 3 : k = 2; // 循环切换
//         }
//         for (it = soldiers.begin(); it != soldiers.end(); it++)
//         {
//             if (it != soldiers.begin())
//             {
//                 cout << " ";
//             }
//             cout << *it;
//         }
//         cout << endl;
//     }
// }

// 冠军(SET)
// #include <iostream>
// #include <set>
// using namespace std;
// int main()
// {
//     set<string> A, B;
//     string s1, s2;
//     int n;
//     while (cin >> n && n)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             cin >> s1 >> s2;
//             A.insert(s1);
//             A.insert(s2);
//             B.insert(s2);
//         }
//         // 存在唯一未尝败绩的选手
//         if (A.size() - B.size() == 1)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//         A.clear();
//         B.clear();
//     }
//     return 0;
// }

// 购物(MAP)
// #include <iostream>
// #include <map>
// using namespace std;
// int main()
// {
//     int n, m, p;
//     map<string, int> shop;
//     while (cin >> n)
//     {
//         string s;
//         // 无需操作
//         for (int i = 0; i < n; i++)
//         {
//             cin >> s;
//         }
//         cin >> m;
//         while (m--)
//         {
//             for (int i = 0; i < n; i++)
//             {
//                 cin >> p >> s;
//                 // 若无键则新建
//                 shop[s] += p;
//             }
//             int rank = 1;
//             map<string, int>::iterator it;
//             for (it = shop.begin(); it != shop.end(); it++)
//             {
//                 if (it->second > shop["memory"])
//                 {
//                     rank++;
//                 }
//             }
//             cout << rank << endl;
//         }
//         shop.clear();
//     }
// }

// 7-16 犯二程度(15分)
// #include <iostream>
// #include <iomanip>
// #include <cmath>
// #include <string>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     string s;
//     double a, b, len;
//     cin >> s;
//     s[0] == '-' ? a = 1.5 : a = 1;
//     s[0] == '-' ? len = s.length() - 1 : len = s.length();
//     s[s.length() - 1] % 2 == 0 ? b = 2 : b = 1;
//     double num = count(s.begin(), s.end(), '2');
//     cout << fixed << setprecision(2);
//     cout << (num / len) * a * b * 100 << "%" << endl;
//     return 0;
// }

// 7-17 大笨钟(10分)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     string time;
//     cin >> time;
//     int hour = stoi(time.substr(0, 2));
//     int minute = stoi(time.substr(3, 2));
//     if (hour < 12)
//     {
//         cout << "Only " << time.substr(0, 2) << ":" << time.substr(3, 2) << ".  Too early to Dang.";
//     }
//     else if (hour == 12 && minute == 0)
//     {
//         cout << "Only 12:00.  Too early to Dang.";
//     }
//     else
//     {
//         num = hour % 12;
//         minute > 0 ? num++ : num;
//         for (int i = 0; i < num; i++)
//         {
//             cout << "Dang";
//         }
//     }
//     return 0;
// }

// 7-18 谁先倒(15分)
// #include <iostream>
// using namespace std;
// int main()
// {
//     // 酒量
//     int A, B;
//     cin >> A >> B;
//     int n, numa = 0, numb = 0;
//     cin >> n;
//     int a1, a2, b1, b2;
//     while (n--)
//     {
//         cin >> a1 >> a2 >> b1 >> b2;
//         a2 == a1 + b1 &&b2 != a1 + b1 ? numa++ : numa;
//         b2 == b1 + a1 &&a2 != b1 + a1 ? numb++ : numb;
//         if (numa > A)
//         {
//             cout << "A" << endl
//                  << numb;
//             break;
//         }
//         if (numb > B)
//         {
//             cout << "B" << endl
//                  << numa;
//             break;
//         }
//     }
//     return 0;
// }

// 7-19 帅到没朋友(20分)
// #include <iostream>
// #include <vector>
// #include <set>
// #include <iomanip>
// using namespace std;
// vector<int> id(1000001, 0);
// int main()
// {
//     int n, k, m;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> k;
//         if (k > 1)
//         {
//             while (k--)
//             {
//                 cin >> x;
//                 id[x] = 1;
//             }
//             continue;
//         }
//         // k == 1时需要单独输入
//         cin >> x;
//     }
//     cin >> m;
//     vector<int> friends;
//     set<int> setfriends;
//     for (int i = 0; i < m; i++)
//     {
//         int x;
//         cin >> x;
//         if (id[x] == 0 && !setfriends.count(x))
//         {
//             friends.push_back(x);
//             setfriends.insert(x);
//             // 不使用set,id[x]自减也可以达到相同效果
//         }
//     }
//     if (friends.size() == 0)
//     {
//         cout << "No one is handsome";
//     }
//     else
//     {
//         for (int i = 0; i < friends.size(); i++)
//         {
//             if (i != 0)
//             {
//                 cout << " ";
//             }
//             // 不足5位补0
//             cout << setw(5) << setfill('0') << friends[i];
//         }
//     }
//     return 0;
// }

// 7-20 若智(5分)

// SORT
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// const int N = 100010;
// // 结构体排序
// // struct Student
// // {
// //     string name;
// //     int score;
// //     Student(string n, int s) : name(n), score(s) {}
// // };
// // bool cmp_score(const Student &s1, const Student &s2)
// // {
// //     return s1.score > s2.score;
// // }
// // 仿函数
// struct Big
// {
//     bool operator()(const int &a, const int &b) const
//     {
//         return a > b;
//     }
// };
// // 结构体成员函数
// struct Student
// {
//     int id;
//     int chinese;
//     int math;
//     bool operator<(const Student &other) const
//     {
//         if (chinese != other.chinese)
//             return chinese > other.chinese;
//         if (math != other.math)
//             return math > other.math;
//         return id < other.id;
//     } // 相同的成绩按照学号升序排列
// };
// int main()
// {
//     // 数组排序
//     int arr[] = {1, 2, 3, 4, 5};
//     sort(arr, arr + 5);
//     // 容器排序
//     vector<int> v;
//     sort(v.begin(), v.end());
//     // 键值对排序
//     vector<pair<int, int>> vp;
//     sort(vp.begin(), vp.end()); // 先按键值排序,键值相同再按值排序
//     // 仿函数排序
//     // sort(v + 0, v + 10, Big());
//     // 结构体成员函数排序
//     Student students[N];
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> students[i].id >> students[i].chinese >> students[i].math;
//     }
//     sort(students, students + n);
//     return 0;
// }

// NEXT_PERMUTATION
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int a[10001];
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     for (int i = 0; i < n; i++)
//     {
//         a[i] = i + 1;
//     }
//     int cnt = 1;
//     do
//     {
//         if (cnt == m)
//             break;
//         cnt++;
//     } while (next_permutation(a, a + n));
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// 7-21 奇偶分家(10分)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, a = 0, b = 0, x;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x;
//         x % 2 == 0 ? b++ : a++;
//     }
//     cout << a << " " << b << endl;
//     return 0;
// }

// 7-22 GPLT(20分)
// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;
//     // int count_g, count_p, count_l, count_t;
//     // count_g = count(s.begin(), s.end(), 'g') + count(s.begin(), s.end(), 'G');
//     // count_p = count(s.begin(), s.end(), 'p') + count(s.begin(), s.end(), 'P');
//     // count_l = count(s.begin(), s.end(), 'l') + count(s.begin(), s.end(), 'L');
//     // count_t = count(s.begin(), s.end(), 't') + count(s.begin(), s.end(), 'T');
//     int count_g = 0, count_p = 0, count_l = 0, count_t = 0;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == 'g' || s[i] == 'G')
//         {
//             count_g++;
//         }
//         else if (s[i] == 'p' || s[i] == 'P')
//         {
//             count_p++;
//         }
//         else if (s[i] == 'l' || s[i] == 'L')
//         {
//             count_l++;
//         }
//         else if (s[i] == 't' || s[i] == 'T')
//         {
//             count_t++;
//         }
//     }
//     while (count_g > 0 || count_p > 0 || count_l > 0 || count_t > 0)
//     {
//         if (count_g > 0)
//         {
//             cout << "G";
//             count_g--;
//         }
//         if (count_p > 0)
//         {
//             cout << "P";
//             count_p--;
//         }
//         if (count_l > 0)
//         {
//             cout << "L";
//             count_l--;
//         }
//         if (count_t > 0)
//         {
//             cout << "T";
//             count_t--;
//         }
//     }
//     return 0;
// }

// 7-23 后天(5分)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int D;
//     cin >> D;
//     int ret = (D + 2) % 7;
//     ret == 0 ? cout << 7 : cout << ret;
//     return 0;
// }

// 7-24 抢红包(25分)
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <iomanip>
// using namespace std;
// struct person
// {
//     int id;
//     int profit;
//     int num; // 抢红包数
//     person() : profit(0), num(0) {}
// };
// // 结构体排序
// bool compare(const person &p1, const person &p2)
// {
//     if (p1.profit != p2.profit)
//         return p1.profit > p2.profit;
//     else if (p1.num != p2.num)
//         return p1.num > p2.num;
//     else
//         return p1.id < p2.id;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     vector<person> people(n + 1);
//     for (int i = 1; i <= n; i++)
//     {
//         people[i].id = i;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         int k;
//         cin >> k;
//         for (int j = 1; j <= k; j++)
//         {
//             int id, pro;
//             cin >> id >> pro;
//             people[id].profit += pro;
//             people[id].num++;
//             people[i].profit -= pro;
//         }
//     }
//     sort(people.begin() + 1, people.end(), compare);
//     cout << fixed << setprecision(2);
//     for (int i = 1; i <= n; i++)
//     {
//         cout << people[i].id << " " << people[i].profit / 100.0 << endl;
//     }
//     return 0;
// }

// 7-25 排座位(22/25分) -- 并查集
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     int n, m, k;
//     cin >> n >> m >> k;
//     vector<vector<int>> guest(n + 1, vector<int>(n + 1, 0));
//     for (int i = 1; i <= m; i++)
//     {
//         int g1, g2, rel;
//         cin >> g1 >> g2 >> rel;
//         guest[g1][g2] = rel;
//         guest[g2][g1] = rel;
//     }
//     for (int i = 1; i <= k; i++)
//     {
//         int p1, p2;
//         cin >> p1 >> p2;
//         if (guest[p1][p2] == 1)
//         {
//             cout << "No problem" << endl;
//         }
//         else if (guest[p1][p2] == 0)
//         {
//             cout << "OK" << endl;
//         }
//         else
//         {
//             bool flag = true;
//             for (int j = 1; j <= n; j++)
//             {
//                 if (guest[p1][j] == 1 && guest[p2][j] == 1)
//                 {
//                     cout << "OK but..." << endl;
//                     flag = false;
//                     break;
//                 }
//             }
//             if (flag)
//             {
//                 cout << "No way" << endl;
//             }
//         }
//     }
//     return 0;
// }

// 全排列(递归)
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <ctime>
// using namespace std;
// vector<int> a(101);
// int num = 0;
// void perm(int begin, int end)
// {
//     if (begin == 3)
//     {
//         num++;
//         for (int i = 0; i < 3; i++)
//         {
//             cout << a[i] << " ";
//         }
//         cout << endl;
//     }
//     else
//     {
//         for (int i = begin; i <= end; i++)
//         {
//             swap(a[begin], a[i]); // 交换
//             perm(begin + 1, end); // 递归
//             swap(a[begin], a[i]); // 恢复
//         }
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     clock_t start, end;
//     start = clock();
//     perm(0, n - 1);
//     end = clock();
//     cout << "Total " << num << " permutations." << endl;
//     cout << "Time: " << (double)(end - start) / CLOCKS_PER_SEC << " s." << endl;
//     return 0;
// }

// 二进制(子集)
// #include <iostream>
// using namespace std;
// void print_subsets(int n)
// {
//     // 0~(2^n-1)
//     for (int i = 0; i < (1 << n); i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i & (1 << j))
//             {
//                 // 第j位为1
//                 cout << j + 1 << " ";
//             }
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     print_subsets(n);
//     return 0;
// }

// 组合(子集)
// #include <iostream>
// using namespace std;
// // 全排列+遍历统计(必超时)
// void print_combinations(int n, int k)
// {
//     for (int i = 0; i < (1 << n); i++)
//     {
//         int num = 0, kk = i;
//         while (kk)
//         {
//             kk = kk & (kk - 1);
//             num++;
//         }
//         if (num == k)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 if (i & (1 << j))
//                 {
//                     // 第j位为1
//                     cout << j + 1 << " ";
//                 }
//             }
//             cout << endl;
//         }
//     }
// }
// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     print_combinations(n, k);
//     return 0;
// }

// Red and Black(BFS)
// #include <iostream>
// #include <queue>
// using namespace std;
// struct node
// {
//     int x;
//     int y;
// };
// // 运动数组
// int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
// int main()
// {
//     int x, y, p, q, count = 1;
//     cin >> x >> y; // 注意顺序
//     char map[21][21];
//     for (int i = 1; i <= x; i++)
//     {
//         for (int j = 1; j <= y; j++)
//         {
//             cin >> map[i][j];
//             if (map[i][j] == '@')
//             {
//                 p = i;
//                 q = j;
//             }
//         }
//     }
//     node start;
//     start.x = p;
//     start.y = q;
//     queue<node> nq;
//     nq.push(start);
//     while (!nq.empty())
//     {
//         int tx, ty;
//         start = nq.front();
//         nq.pop();
//         for (int i = 0; i < 4; i++)
//         {
//             // 扩展
//             tx = start.x + dir[i][0];
//             ty = start.y + dir[i][1];
//             if (tx > 0 && tx <= x && ty > 0 && ty <= y && map[tx][ty] == '.')
//             {
//                 // 标记处理(或使用visited数组)
//                 map[tx][ty] = '#';
//                 nq.push({tx, ty});
//                 count++;
//             }
//         }
//     }
//     cout << count << endl;
//     system("pause");
//     return 0;
// }

// 7-31 正整数A+B(15分)
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string a, b;
//     bool flag_a = true, flag_b = true;
//     cin >> a >> b;
//     // 边界1:B存在空格
//     char ret = getchar();
//     if (ret == ' ')
//     {
//         flag_b = false;
//     }
//     // 边界2:数字超过1000或小于1
//     if (a.length() > 4 || stoi(a) > 1000 || stoi(a) == 0)
//     {
//         flag_a = false;
//     }
//     else
//     {
//         for (int i = 0; i < a.length(); i++)
//         {
//             // 边界3:乱码
//             if (a[i] < '0' || a[i] > '9')
//             {
//                 flag_a = false;
//                 break;
//             }
//         }
//     }
//     if (b.length() > 4 || stoi(b) > 1000 || stoi(b) == 0)
//     {
//         flag_b = false;
//     }
//     else
//     {
//         for (int i = 0; i < b.length(); i++)
//         {
//             if (b[i] < '0' || b[i] > '9')
//             {
//                 flag_b = false;
//                 break;
//             }
//         }
//     }
//     string sum;
//     flag_a == true ? a : a = "?", sum = "?";
//     flag_b == true ? b : b = "?", sum = "?";
//     if (flag_a && flag_b)
//     {
//         cout << a << " + " << b << " = " << stoi(a) + stoi(b) << endl;
//     }
//     else
//     {
//         cout << a << " + " << b << " = " << sum << endl;
//     }
//     return 0;
// }

// 7-32 若智(5分)

// 7-33 出租(20分)
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// bool com(const int &a, const int &b)
// {
//     return a > b;
// }
// int main()
// {
//     string phone;
//     cin >> phone;
//     vector<int> arr;
//     int visited[10] = {};
//     for (int i = 0; i < 11; i++)
//     {
//         if (visited[phone[i]-'0'] == 0)
//         {
//             arr.push_back(phone[i] - '0');
//             visited[phone[i] - '0'] = 1;
//         }
//     }
//     sort(arr.begin(), arr.end(), com);
//     int index[11];
//     for (int i = 0; i < 11; i++)
//     {
//         for (int j = 0; j < arr.size(); j++)
//         {
//             if (arr[j] == phone[i] - '0')
//             {
//                 index[i] = j;
//                 break;
//             }
//         }
//     }
//     cout << "int[] arr = new int[]{";
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i];
//         if (i != arr.size() - 1)
//         {
//             cout << ",";
//         }
//     }
//     cout << "};" << endl;
//     cout << "int[] index = new int[]{";
//     for (int i = 0; i < 11; i++)
//     {
//         cout << index[i];
//         if (i != 10)
//         {
//             cout << ",";
//         }
//     }
//     cout << "};" << endl;
//     return 0;
// }

// 7-34 素数(10分)
// #include <iostream>
// #include <cmath>
// #include <vector>
// using namespace std;
// const int LIMIT = 10000000;               // sieve算法上限
// vector<int> Is_Prime_Array(LIMIT + 1, 0); // 标记数组,0为素数,1为合数
// void sieve(int n)
// {
//     for (int i = 2; i <= n; i++)
//     {
//         if (Is_Prime_Array[i] == 0)
//         { // i为素数,标记i的倍数为合数
//             for (long long m = (long long)i * i; m <= n; m += i)
//             {
//                 Is_Prime_Array[m] = 1;
//             }
//         }
//     }
// }
// bool is_prime(long long x)
// {
//     if (x <= 1)
//         return false;
//     if (x <= LIMIT)
//         return Is_Prime_Array[x] == 0; // 在筛法范围内
//     for (long long i = 2; i <= sqrt(x); i++)
//     { // 超出筛法范围,使用暴力判断
//         if (x % i == 0)
//             return false;
//     }
//     return true;
// }
// int main()
// {
//     sieve(LIMIT);
//     int N;
//     cin >> N;
//     while (N--)
//     {
//         long long x;
//         cin >> x;
//         if (is_prime(x))
//             cout << "Yes" << endl;
//         else
//             cout << "No" << endl;
//     }
//     return 0;
// }

// 7-35 若智(5分)

// 7-36 一帮一(15分)
// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;
// struct student
// {
//     int sex;
//     string name;
// };
// int main()
// {
//     int n;
//     cin >> n;
//     vector<student> arr(n + 1);
//     vector<int> state(n + 1, 0);
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> arr[i].sex >> arr[i].name;
//     }
//     for (int i = 1; i <= n / 2; i++)
//     {
//         int k = n;
//         // 匹配首个异性且单身的学生
//         while (arr[i].sex == arr[k].sex || state[k] == 1)
//         {
//             k--;
//         }
//         state[k] = 1;
//         cout << k << endl;
//         cout << arr[i].name << " " << arr[k].name << endl;
//     }
//     return 0;
// }

// 7-37 胖胖的忧桑(10分)
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     int N;
//     cin >> N;
//     for (int i = 1; i <= N; i++)
//     {
//         int H, W;
//         cin >> H >> W;
//         double standard = (H - 100) * 0.9;
//         double weight = W / (2.0);
//         if (weight > standard)
//         {
//             if ((weight - standard) < standard * 0.1)
//             {
//                 cout << "You are wan mei!" << endl;
//             }
//             else
//             {
//                 cout << "You are tai pang le!" << endl;
//             }
//         }
//         else
//         {
//             if ((standard - weight) < standard * 0.1)
//             {
//                 cout << "You are wan mei!" << endl;
//             }
//             else
//             {
//                 cout << "You are tai shou le!" << endl;
//             }
//         }
//     }
// }

// 八数码(BFS)
// #include <iostream>
// #include <set>
// #include <queue>
// #include <cstring> // 添加头文件
// using namespace std;
// struct node
// {
//     int state[9];
//     int step; // 步数
//     // 重载operator<(使用set时必须的步骤)
//     bool operator<(const node &other) const
//     {
//         for (int i = 0; i < 9; i++)
//         {
//             if (state[i] != other.state[i])
//                 return state[i] < other.state[i];
//         }
//         return false; // 完全相等时不认为小于
//     }
// };
// const int LEN = 362880;                             // 状态数9!
// int start[9], goal[9];                              // 初始、目标状态
// int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}}; // 运动数组
// set<node> visited;                                  // 标记集合
// int BFS()
// {
//     queue<node> q;
//     node start_node;
//     memcpy(start_node.state, start, sizeof(start_node.state)); // 复制初始状态
//     start_node.step = 0;
//     q.push(start_node);
//     visited.insert(start_node);
//     while (!q.empty())
//     {
//         start_node = q.front();
//         if (memcmp(goal, start_node.state, sizeof(goal)) == 0) // memcmp状态比较
//         {
//             cout << "Found in " << start_node.step << " steps." << endl;
//             return start_node.step;
//         }
//         q.pop();
//         node next_node;
//         // 查找0位置
//         int z, tz;
//         for (z = 0; z < 9; z++)
//         {
//             if (start_node.state[z] == 0)
//             {
//                 break;
//             }
//         }
//         // 状态转换
//         int x, y, tx, ty;
//         x = z % 3; // 横坐标
//         y = z / 3; // 纵坐标
//         for (int i = 0; i < 4; i++)
//         {
//             tx = x + dir[i][0];
//             ty = y + dir[i][1];
//             if (tx >= 0 && tx < 3 && ty >= 0 && ty < 3)
//             {
//                 tz = tx + ty * 3;                                   // 新坐标
//                 memcpy(&next_node, &start_node, sizeof(next_node)); // 复制状态
//                 swap(next_node.state[z], next_node.state[tz]);      // 交换
//                 next_node.step++;
//                 if (visited.find(next_node) == visited.end())
//                 {
//                     visited.insert(next_node);
//                     q.push(next_node);
//                 }
//             }
//         }
//     }
//     cout << "Not found." << endl;
//     return -1;
// }
// int main()
// {
//     for (int i = 0; i < 9; i++)
//         cin >> start[i];
//     for (int i = 0; i < 9; i++)
//         cin >> goal[i];
//     BFS();
//     return 0;
// }

// Red and Black(DFS)
// #include <iostream>
// using namespace std;
// char room[21][21];
// int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
// int x, y, dx, dy, count;
// void print_walk(int dx, int dy)
// {
//     cout << "     walk:" << "(" << dx << "," << dy << ")" << endl;
// }
// void print_back(int dx, int dy)
// {
//     cout << "     back:" << "(" << dx << "," << dy << ")" << endl;
// }
// void DFS(int dx, int dy)
// {
//     // 标记途经点
//     room[dx][dy] = '#';
//     count++;
//     // 打印途径点
//     print_walk(dx, dy);
//     for (int i = 0; i < 4; i++)
//     {
//         int tx = dx + dir[i][0];
//         int ty = dy + dir[i][1];
//         if (tx > 0 && tx <= x && ty > 0 && ty <= y && room[tx][ty] == '.')
//         {
//             DFS(tx, ty);
//             // 遍历无需执行恢复标记的操作,若需要搜索最优解则需要恢复标记
//             // room[tx][ty] = '.';
//             print_back(dx, dy);
//         }
//     }
// }
// int main()
// {
//     cin >> x >> y;
//     for (int i = 1; i <= x; i++)
//     {
//         for (int j = 1; j <= y; j++)
//         {
//             cin >> room[i][j];
//             if (room[i][j] == '@')
//             {
//                 dx = i;
//                 dy = j;
//             }
//         }
//     }
//     DFS(dx, dy);
//     cout << count << endl;
//     return 0;
// }

// N皇后(DFS+回溯)
// #include <iostream>
// #include <cstring>
// using namespace std;
// int n, tot = 0;
// // 记录皇后位置
// int col[12] = {0};
// // 检查是否与现有皇后冲突
// bool check(int c, int r)
// {
//     // 检查此前r-1行是否有冲突(首行不检查)
//     for (int i = 0; i < r; i++)
//     {
//         if (col[i] == c || abs(i - r) == abs(col[i] - c))
//         {
//             return false;
//         }
//     }
//     return true;
// }
// void DFS(int r)
// {
//     // 所有皇后都放置完毕
//     if (r == n)
//     {
//         tot++;
//         return;
//     }
//     for (int c = 0; c < n; c++)
//     {
//         if (check(c, r))
//         {
//             // 放置皇后(r,c)
//             col[r] = c;
//             // 搜索r+1行
//             // 边界情况:r == 9; if(check(c,r)) == true; 则代表第10行皇后放置成功
//             DFS(r + 1);
//         }
//     }
// }
// int main()
// {
//     int ans[12] = {0};
//     // 打表(n=10,代表10皇后,实际上r最大为9,即n-1)
//     for (n = 0; n <= 10; n++)
//     {
//         // 清空
//         memset(col, 0, sizeof(col));
//         tot = 0;
//         DFS(0);
//         ans[n] = tot;
//     }
//     for (int i = 0; i <= 10; i++)
//     {
//         cout << ans[i] << " ";
//     }
//     return 0;
// }

// 并查集(Union-Find)
// 1.合并原则:"擒贼先擒王"
// 2.路径压缩:"父节点直属"
// #include <iostream>
// using namespace std;
// using ll = long long;
// const ll MAXN = 1050;
// ll s[MAXN + 1];
// void init()
// {
//     for (ll i = 1; i <= MAXN; i++)
//     {
//         s[i] = i;
//     }
// }
// ll set_find(ll x)
// {
//     if (s[x] != x)
//     {
//         s[x] = set_find(s[x]);
//     }
//     return s[x];
// }
// void set_union(ll x, ll y)
// {
//     ll fx = set_find(x);
//     ll fy = set_find(y);
//     if (fx != fy)
//     {
//         s[fx] = fy;
//     }
// }
// int main()
// {
//     ios::sync_with_stdio(false); // 提高 cin/cout 性能
//     cin.tie(NULL);               // 解除 cin 和 cout 的绑定
//     ll t, n, m, x, y;
//     cin >> t;
//     while (t--)
//     {
//         init();
//         cin >> n >> m;
//         for (ll i = 1; i <= m; i++)
//         {
//             cin >> x >> y;
//             set_union(x, y);
//         }
//         ll ans = 0;
//         for (ll i = 1; i <= n; i++)
//         {
//             if (set_find(i) == i)
//             {
//                 ans++;
//             }
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

// Binary Tree Traversals(二叉树重构)
// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1010;
// // 前序、中序、后序遍历
// vector<int> pre(N), in(N), ret(N);
// int k;
// struct node
// {
//     int val;
//     node *l, *r;
//     node(int _val = 0, node *_l = NULL, node *_r = NULL) : val(_val), l(_l), r(_r) {}
// };
// // 重构二叉树(注意root、t传参方式)
// void build_tree(node *&root, int l, int r, int &t)
// {
//     int flag = -1;
//     for (int i = l; i <= r; i++)
//     {
//         // 根据前序遍历的首节点查找本段中序遍历的根节点
//         if (in[i] == pre[t])
//         {
//             flag = i;
//             break;
//         }
//     }
//     if (flag == -1)
//     {
//         return;
//     }
//     // 构造根节点为前序遍历的首节点
//     root = new node(pre[t]);
//     t++;
//     // 递归构造左子树(边界情况:flag == l)
//     if (flag > l)
//     {
//         build_tree(root->l, l, flag - 1, t);
//     }
//     // 递归构造右子树(边界情况:flag == r)
//     if (flag < r)
//     {
//         build_tree(root->r, flag + 1, r, t);
//     }
// }
// // 前序遍历
// void preorder(node *root)
// {
//     if (root != NULL)
//     {
//         ret[k++] = root->val;
//         preorder(root->l);
//         preorder(root->r);
//     }
// }
// // 中序遍历
// void inorder(node *root)
// {
//     if (root != NULL)
//     {
//         inorder(root->l);
//         ret[k++] = root->val;
//         inorder(root->r);
//     }
// }
// // 后序遍历
// void postorder(node *root)
// {
//     if (root != NULL)
//     {
//         postorder(root->l);
//         postorder(root->r);
//         ret[k++] = root->val;
//     }
// }
// void remove_node(node *&root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     remove_node(root->l);
//     remove_node(root->r);
//     delete root;
// }
// int main()
// {
//     int n;
//     while (cin >> n)
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> pre[i];
//         }
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> in[i];
//         }
//         node *root;
//         int t = 1;
//         build_tree(root, 1, n, t);
//         k = 1;
//         postorder(root);
//         for (int i = 1; i <= n; i++)
//         {
//             cout << ret[i] << " ";
//         }
//         cout << endl;
//         remove_node(root);
//     }
//     return 0;
// }

// ShaoLin(map)
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long n;
//     cin >> n;
//     map<int, int> mp;
//     mp.clear();
//     mp[1e9] = 1; // 方丈
//     while (n--)
//     {
//         long long g, id;
//         cin >> id >> g;
//         mp[g] = id;
//         long long ret;
//         // 默认map升序排序
//         map<int, int>::iterator it = mp.find(g);
//         if (it == mp.begin())
//         {
//             ret = (++it)->second;
//         }
//         else
//         {
//             map<int, int>::iterator itt = it;
//             itt--;
//             it++;
//             if ((g - itt->first) <= (it->first - g))
//             {
//                 ret = itt->second;
//             }
//             else
//             {
//                 ret = it->second;
//             }
//         }
//         cout << id << " " << ret << endl;
//     }
//     return 0;
// }

// Lost Cow(暴力)
// #include <bits/stdc++.h>
// using namespace std;
// const int n = 5;
// vector<int> pre(n + 1), ans(n + 1), visited(n + 1, 1);
// int main()
// {
//     int i, j, k;
//     for (i = 1; i <= n; i++)
//     {
//         cin >> pre[i];
//     }
//     for (i = n; i >= 1; i--)
//     {
//         k = 0;
//         for (j = 1; j <= n; j++)
//         {
//             if (visited[j] != -1)
//             {
//                 k++;
//                 if (k == pre[i] + 1)
//                 {
//                     ans[i] = j;
//                     visited[j] = -1;
//                     break;
//                 }
//             }
//         }
//     }
//     for (i = 1; i <= n; i++)
//     {
//         cout << ans[i] << " ";
//     }
//     return 0;
// }

// Lost Cow(线段树)
// #include <bits/stdc++.h>
// using namespace std;
// const int MAX = 10000;
// vector<int> pre(MAX + 1), ans(MAX + 1);
// // 匿名结构体
// struct
// {
//     // len代表区间长度
//     int l, r, len;
// } tree[MAX * 4];
// // 线段树建树
// void build_tree(int l, int r, int u)
// {
//     tree[u].l = l;
//     tree[u].r = r;
//     tree[u].len = r - l + 1;
//     if (l == r)
//     {
//         return;
//     }
//     // 完全二叉树的存储方式(u维护区间编号)
//     build_tree(l, (l + r) >> 1, u << 1);
//     build_tree(((l + r) >> 1) + 1, r, (u << 1) + 1);
// }
// // 线段树查询
// int Interval_Query(int u, int num)
// {
//     // 查询过程中更新区间长度
//     tree[u].len--;
//     if (tree[u].l == tree[u].r)
//     {
//         return tree[u].l;
//     }
//     // 左子树长度小于num,则结果位于右子树的num-tree[u<<1].len位置
//     if (tree[u << 1].len < num)
//     {
//         return Interval_Query((u << 1) + 1, num - tree[u << 1].len);
//     }
//     // 右子树长度小于num,则结果位于左子树的num位置
//     if (tree[u << 1].len >= num)
//     {
//         return Interval_Query(u << 1, num);
//     }
// }
// int main()
// {
//     int n, i;
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         cin >> pre[i];
//     }
//     build_tree(1, n, 1);
//     for (i = n; i >= 1; i--)
//     {
//         // 查找全区间未被访问的pre[i]+1个位置
//         ans[i] = Interval_Query(1, pre[i] + 1);
//     }
//     for (i = 1; i <= n; i++)
//     {
//         cout << ans[i] << " ";
//     }
//     return 0;
// }

// Lost Cow(线段——完全二叉树)
// #include <bits/stdc++.h>
// using namespace std;
// const int MAXN = 100005;
// vector<int> pre(MAXN), ans(MAXN), tree(4 * MAXN);
// // 线段树建树
// void build_tree(int n, int last_left)
// {
//     // 节点存储在最后一层(从last_left开始,向右n个)
//     for (int i = last_left; i < n + last_left; i++)
//     {
//         tree[i] = 1;
//     }
//     while (last_left != 1)
//     {
//         // 向上digit求和建树
//         for (int i = last_left / 2; i < last_left; i++)
//         {
//             // 左右子树的和
//             tree[i] = tree[i << 1] + tree[(i << 1) + 1];
//         }
//         last_left /= 2;
//     }
// }
// // 线段树查询
// int Interval_Query(int u, int num, int last_left)
// {
//     tree[u]--;
//     // last_left只为参与判断查询节点是否为叶子节点,不参与计算
//     if (tree[u] == 0 && u >= last_left)
//     {
//         return u;
//     }
//     // 左子树长度小于num,则结果位于右子树的num-tree[u<<1]位置
//     if (tree[u << 1] < num)
//     {
//         return Interval_Query(u << 1 | 1, num - tree[u << 1], last_left);
//     }
//     else
//     {
//         return Interval_Query(u << 1, num, last_left);
//     }
// }
// int main()
// {
//     int i, n, last_left;
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         cin >> pre[i];
//     }
//     // last_left等于大于等于n最近的2的幂次方
//     last_left = 1 << (int(log(n) / log(2)) + 1);
//     build_tree(n, last_left);
//     for (i = n; i >= 1; i--)
//     {
//         ans[i] = Interval_Query(1, pre[i] + 1, last_left) - last_left + 1;
//     }
//     for (i = 1; i <= n; i++)
//     {
//         cout << ans[i] << " ";
//     }
//     return 0;
// }

// 区间修改(线段树)
// #include <bits/stdc++.h>
// using namespace std;
// const int MAXN = 100005;
// // sum[i]记录区间i的修改实际总和
// // add[i]记录区间i单个元素的修改值C
// long long sum[4 * MAXN], add[4 * MAXN];
// // 向上修改
// void push_up(int rt)
// {
//     sum[rt] = sum[rt << 1] + sum[(rt << 1) + 1];
// }
// // 修改rt子节点
// void push_down(int rt, int m)
// {
//     if (add[rt])
//     {
//         add[rt << 1] += add[rt];
//         add[(rt << 1) + 1] += add[rt];
//         sum[rt << 1] += add[rt] * (m - (m >> 1));
//         sum[(rt << 1) + 1] += add[rt] * (m >> 1);
//         // 取消本层标记
//         add[rt] = 0;
//     }
// }
// #define lson l, mid, rt << 1
// #define rson mid + 1, r, rt << 1 | 1
// void build_tree(int l, int r, int rt)
// {
//     add[rt] = 0;
//     if (l == r)
//     {
//         cin >> sum[rt];
//         return;
//     }
//     int mid = (l + r) >> 1;
//     build_tree(lson);
//     build_tree(rson);
//     push_up(rt);
// }
// void update(int a, int b, long long c, int l, int r, int rt)
// {
//     if (a <= l && b >= r)
//     {
//         add[rt] += c;
//         sum[rt] += c * (r - l + 1);
//         return;
//     }
//     // 若a,b包含在查询区间内,则无需后续调整
//     push_down(rt, r - l + 1);
//     int mid = (l + r) >> 1;
//     if (a <= mid)
//     {
//         update(a, b, c, lson);
//     }
//     if (b > mid)
//     {
//         update(a, b, c, rson);
//     }
//     push_up(rt);
// }
// long long Interval_Query(int a, int b, int l, int r, int rt)
// {
//     // 若a,b包含在查询区间内,则直接返回sum[rt]
//     if (a <= l && b >= r)
//     {
//         return sum[rt];
//     }
//     push_down(rt, r - l + 1);
//     int mid = (l + r) >> 1;
//     long long res = 0;
//     if (a <= mid)
//     {
//         res += Interval_Query(a, b, lson);
//     }
//     if (b > mid)
//     {
//         res += Interval_Query(a, b, rson);
//     }
//     return res;
// }
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     build_tree(1, n, 1);
//     while (m--)
//     {
//         string str;
//         int a, b;
//         long long c;
//         cin >> str;
//         // 区间修改
//         if (str[0] == 'C')
//         {
//             cin >> a >> b >> c;
//             update(a, b, c, 1, n, 1);
//         }
//         // 区间查询
//         else
//         {
//             cin >> a >> b;
//             cout << Interval_Query(a, b, 1, n, 1) << endl;
//         }
//     }
//     return 0;
// }

// Lost Cow(树状数组)
// #include <bits/stdc++.h>
// using namespace std;
// const int MAXN = 100005;
// // lowbit操作
// #define lowbit(x) (x & -x)
// int tree[MAXN], pre[MAXN], ans[MAXN];
// int n;
// // add(x, val) 增加val到a_x上
// void add(int x, int val)
// {
//     while (x <= n)
//     {
//         tree[x] += val;
//         // x → x + lowbit(x),新的x对应的区间为[x' - lowbit(x') + 1, x'],父节点的区间必然包含原子节点x的位置
//         // 在x到x + lowbit(x)之间的节点,如x < y < x + lowbit(x),管理的区间不包含原x
//         x += lowbit(x);
//     }
// }
// // sum(x) 返回a_1 +... + a_x
// int sum(int x)
// {
//     int res = 0;
//     while (x > 0)
//     {
//         res += tree[x];
//         x -= lowbit(x);
//     }
//     return res;
// }
// // 寻找 sum[x] = pos[i] + 1
// int findpos(int x)
// {
//     int l = 1, r = n;
//     while (l < r)
//     {
//         int mid = (l + r) >> 1;
//         if (sum(mid) < x)
//         {
//             l = mid + 1;
//         }
//         else
//         {
//             r = mid;
//         }
//     }
//     return l;
// }
// int main()
// {
//     cin >> n;
//     pre[1] = 0;
//     for (int i = 2; i <= n; i++)
//     {
//         cin >> pre[i];
//     }
//     // 令a_1,a_2,...,a_n均等于1,初始化树状数组
//     for (int i = 1; i <= n; i++)
//     {
//         // 一般add(i,a_i)初始化
//         tree[i] = lowbit(i);
//     }
//     for (int i = n; i > 0; i--)
//     {
//         int pos = findpos(pre[i] + 1);
//         // 令a_pos = 0,即pos位置的元素不再被选中
//         add(pos, -1);
//         ans[i] = pos;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         cout << ans[i] << " ";
//     }
//     return 0;
// }

// 今年暑假不AC(贪心)
// #include <bits/stdc++.h>
// using namespace std;
// struct acti
// {
//     int start;
//     int end;
// };
// // 贪心策略: 按结束时间排序,选取结束时间最早的活动,并尽可能早地结束
// bool cmp(const acti &a, const acti &b)
// {
//     return a.end < b.end;
// }
// int main()
// {
//     int n, count = 0;
//     cin >> n;
//     vector<acti> activities(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> activities[i].start >> activities[i].end;
//     }
//     sort(activities.begin(), activities.end(), cmp);
//     int end_time = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (activities[i].start >= end_time)
//         {
//             count++;
//             end_time = activities[i].end;
//         }
//     }
//     cout << count << endl;
//     return 0;
// }

// Huffman Tree(Huffman编码)
// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;
// struct BinaryTreeNode
// {
//     int weight;            // 权重(频次)
//     BinaryTreeNode *left;  // 左子树
//     BinaryTreeNode *right; // 右子树
//     BinaryTreeNode(int w) : weight(w), left(nullptr), right(nullptr) {}
// };
// struct CompareNodes
// {
//     bool operator()(BinaryTreeNode *a, BinaryTreeNode *b) const
//     {
//         // 返回true,参数二优先级高,故b位于优先级队列前面,与排序算法相反
//         return a->weight >= b->weight;
//     }
// };
// // 构建哈夫曼树
// BinaryTreeNode *BuildHuffmanTree(vector<int> &weights)
// {
//     priority_queue<BinaryTreeNode *, vector<BinaryTreeNode *>, CompareNodes> pq;
//     for (int weight : weights)
//     {
//         BinaryTreeNode *node = new BinaryTreeNode(weight);
//         pq.push(node);
//     }
//     // 合并节点
//     while (pq.size() > 1)
//     {
//         BinaryTreeNode *left = pq.top();
//         pq.pop();
//         BinaryTreeNode *right = pq.top();
//         pq.pop();
//         BinaryTreeNode *parent = new BinaryTreeNode(left->weight + right->weight);
//         parent->left = left;
//         parent->right = right;
//         pq.push(parent);
//     }
//     // 根节点
//     return pq.top();
// }
// // 带权路径长度(WPL)
// int CalculateWeight(BinaryTreeNode *root, int depth)
// {
//     if (!root)
//         return 0;
//     // 叶节点
//     if (!root->left && !root->right)
//         return root->weight * depth;
//     // 非叶节点
//     return CalculateWeight(root->left, depth + 1) + CalculateWeight(root->right, depth + 1);
// }
// int main()
// {
//     int n, weight, WPL = 0;
//     cin >> n;
//     vector<int> weights;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> weight;
//         weights.push_back(weight);
//     }
//     // 构建哈夫曼树
//     BinaryTreeNode *HuffmanTree = BuildHuffmanTree(weights);
//     WPL = CalculateWeight(HuffmanTree, 0);
//     cout << WPL << endl;
//     return 0;
// }

// 模拟退火算法
// #include <bits/stdc++.h>
// using namespace std;
// const double eps = 1e-8;
// double a;
// double func(double x)
// {
//     // x∈[0,100]
//     return 6 * pow(x, 7.0) + 8 * pow(x, 6.0) + 7 * pow(x, 3.0) + 5 * pow(x, 2.0) - a * x;
// }
// double solve()
// {
//     srand(time(0));
//     double T = 50;       // 更合理的初始温度
//     double delta = 0.95; // 加快降温速度
//     double x = 0.5;      // 初始猜测靠近理论最小值
//     double now = func(x);
//     double ans = now; // 初始化全局最优解
//     while (T > eps)
//     {
//         // 生成 [-T, T] 内的随机扰动
//         double newx = x + T * (rand() % 2001 - 1000) / 1000.0;
//         newx = max(0.0, min(newx, 100.0)); // 确保在区间内
//         double newf = func(newx);
//         double deltaE = newf - now;
//         if (deltaE < 0)
//         { // 新解更优
//             now = newf;
//             x = newx;
//             if (newf < ans)
//                 ans = newf; // 更新全局最优
//         }
//         else
//         { // 以概率接受更差解
//             double p = exp(-deltaE / T);
//             if (p > (rand() % 10000) / 10000.0)
//             {
//                 now = newf;
//                 x = newx;
//             }
//         }
//         T *= delta;
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     while (n--)
//     {
//         cin >> a;
//         double ans = solve();
//         cout << fixed << setprecision(4) << ans << endl;
//     }
//     return 0;
// }

// 逆序对(归并排序)
// #include <bits/stdc++.h>
// using namespace std;
// const int MAXN = 100005;
// typedef long long ll;
// ll a[MAXN], b[MAXN], cnt;
// void Merge(ll l, ll r, ll mid)
// {
//     ll i = l, j = mid + 1, t = 0;
//     while (i <= mid && j <= r)
//     {
//         // b序列暂时存放有序序列
//         if (a[i] > a[j])
//         {
//             b[t++] = a[j++];
//             cnt += mid - i + 1;
//         }
//         else
//         {
//             b[t++] = a[i++];
//         }
//     }
//     while (i <= mid)
//     {
//         b[t++] = a[i++];
//     }
//     while (j <= r)
//     {
//         b[t++] = a[j++];
//     }
//     // 复制回原序列
//     for (i = 0; i < t; i++)
//     {
//         a[l + i] = b[i];
//     }
// }
// void MergeSort(ll l, ll r)
// {
//     if (l < r)
//     {
//         ll mid = (l + r) / 2;
//         MergeSort(l, mid);
//         MergeSort(mid + 1, r);
//         Merge(l, r, mid);
//     }
// }
// int main()
// {
//     ll n, k;
//     cin >> n >> k;
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     MergeSort(0, n - 1);
//     if (k >= cnt)
//     {
//         cout << "0" << endl;
//     }
//     else
//     {
//         cout << cnt - k << endl;
//     }
//     return 0;
// }

// 快速排序
// #include <bits/stdc++.h>
// using namespace std;
// const int MAXN = 100005;
// int data[MAXN];
// #define swap(a, b)    \
//     {                 \
//         int temp = a; \
//         a = b;        \
//         b = temp;     \
//     }
// // 区域划分
// int partition(int left, int right)
// {
//     int i = left;
//     int temp = data[right];
//     // if(data[j] >= data[right]) j++;
//     // if(data[j] < data[right]) swap(data[i], data[j]) i++ j++;
//     for (int j = left; j < right; j++)
//     {
//         if (data[j] < temp)
//         {
//             swap(data[i], data[j]);
//             i++;
//         }
//     }
//     // i指向首个大于temp的元素的位置
//     // 若 i == k, 则temp为k大的元素
//     swap(data[i], data[right]);
//     return i;
// }
// // 快速排序
// void quicksort(int left, int right)
// {
//     if (left < right)
//     {
//         int i = partition(left, right);
//         quicksort(left, i - 1);
//         quicksort(i + 1, right);
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> data[i];
//     }
//     quicksort(0, n - 1);
//     for (int i = 0; i < n; i++)
//     {
//         cout << data[i] << " ";
//     }
//     return 0;
// }

// Coin Change(动态规划)
// #include <bits/stdc++.h>
// using namespace std;
// const int MONEY = 251;               // 最大金额
// const int VALUE = 5;                 // 硬币面值种类
// int type[VALUE] = {1, 2, 5, 10, 20}; // 硬币面值
// int min_coins[MONEY];                // 记录各金额最少硬币
// int min_coins_path[MONEY];           // 记录各金额硬币组合
// void solve()
// {
//     // 初始化
//     for (int i = 0; i < MONEY; i++)
//     {
//         min_coins[i] = INT_MAX;
//     }
//     min_coins[0] = 0;
//     for (int i = 0; i < VALUE; i++)
//     {
//         // 各硬币状态转移
//         for (int j = type[i]; j < MONEY; j++)
//         {
//             if (min_coins[j - type[i]] + 1 < min_coins[j])
//             {
//                 min_coins[j] = min_coins[j - type[i]] + 1;
//                 min_coins_path[j] = type[i];
//             }
//         }
//     }
// }
// void print_coins(int n)
// {
//     while (n)
//     {
//         cout << min_coins_path[n] << " ";
//         n -= min_coins_path[n];
//     }
// }
// int main()
// {
//     int n;
//     solve();
//     while (cin >> n)
//     {
//         cout << min_coins[n] << endl;
//         print_coins(n);
//         cout << endl;
//     }
//     return 0;
// }

// COin Combination(动态规划)
// #include <bits/stdc++.h>
// using namespace std;
// const int MONEY = 251;               // 最大金额
// const int VALUE = 5;                 // 硬币面值种类
// int type[VALUE] = {1, 2, 5, 10, 20}; // 硬币面值
// int coin_combination[MONEY];         // 记录各金额所有可能硬币组合
// void solve()
// {
//     coin_combination[0] = 1; // 0元硬币组合1种
//     for (int i = 0; i < VALUE; i++)
//     {
//         // 各硬币状态转移(无限制coin_num)
//         for (int j = type[i]; j < MONEY; j++)
//         {
//             coin_combination[j] += coin_combination[j - type[i]];
//         }
//     }
// }
// int main()
// {
//     int n;
//     solve();
//     while (cin >> n)
//     {
//         cout << coin_combination[n] << endl;
//     }
//     return 0;
// }

// COin Combination(动态规划)
// #include <bits/stdc++.h>
// using namespace std;
// const int MONEY = 251;               // 最大金额
// const int COIN = 101;                // 硬币量
// const int VALUE = 5;                 // 硬币面值种类
// int type[VALUE] = {1, 2, 5, 10, 20}; // 硬币面值
// int coin_combination[MONEY][COIN];   // 记录各金额所有可能硬币组合
// int ans[MONEY];                      // 记录答案
// void solve()
// {
//     coin_combination[0][0] = 1; // 0元初始化
//     for (int i = 0; i < VALUE; i++)
//     {
//         for (int j = 1; j < COIN; j++)
//         {
//             // 各硬币状态转移(coin_num <= COIN)
//             for (int k = type[i]; k < MONEY; k++)
//             {
//                 coin_combination[k][j] += coin_combination[k - type[i]][j - 1];
//             }
//         }
//     }
// }
// int main()
// {
//     int n;
//     solve();
//     for (int i = 0; i < MONEY; i++)
//     {
//         for (int j = 0; j < COIN; j++)
//         {
//             ans[i] += coin_combination[i][j];
//         }
//     }
//     while (cin >> n)
//     {
//         cout << ans[n] << endl;
//     }
//     return 0;
// }

// Bone Collector(动态规划)
// #include <bits/stdc++.h>
// using namespace std;
// struct BONE
// {
//     int val;
//     int vol;
// } bone[1011];
// int T, N, V;
// int bone_back[1011][1011];
// // int bone_back[1011];
// int solve()
// {
//     // 初始化为0
//     memset(bone_back, 0, sizeof(bone_back));
//     // 装前i个骨头
//     for (int i = 1; i <= N; i++)
//     {
//         // 遍历背包容量
//         for (int j = 0; j <= V; j++)
//         {
//             if (bone[i].vol > j)
//             {
//                 // 装不下骨头i, 则等价于只装前i-1个骨头, 背包容量为j
//                 bone_back[i][j] = bone_back[i - 1][j];
//             }
//             else
//             {
//                 // 装骨头i, 则等价于装前i-1个骨头, 背包容量为j-bone[i].vol+bone[i].val
//                 bone_back[i][j] = max(bone_back[i - 1][j], bone_back[i - 1][j - bone[i].vol] + bone[i].val);
//             }
//         }
//         // 滚动优化(反向循环)
//         // for (int j = V; j >= bone[i].vol; j--)
//         // {
//         //     bone_back[j] = max(bone_back[j], bone_back[j - bone[i].vol] + bone[i].val)
//         // }
//     }
//     return bone_back[N][V];
//     // return bone_back[V];
// }
// int main()
// {
//     cin >> T;
//     while (T--)
//     {
//         cin >> N >> V;
//         for (int i = 1; i <= N; i++)
//         {
//             cin >> bone[i].val >> bone[i].vol;
//         }
//         cout << solve() << endl;
//     }
//     return 0;
// }

// Com_Sub(动态规划)
// #include <bits/stdc++.h>
// using namespace std;
// int Com_Sub[101][101];
// string str1, str2;
// int LCS()
// {
//     memset(Com_Sub, 0, sizeof(Com_Sub));
//     for (int i = 1; i <= str1.length(); i++)
//     {
//         for (int j = 1; j <= str2.length(); j++)
//         {
//             // 尾部匹配
//             if (str1[i - 1] == str2[j - 1])
//             {
//                 Com_Sub[i][j] = Com_Sub[i - 1][j - 1] + 1;
//             }
//             else
//             {
//                 Com_Sub[i][j] = max(Com_Sub[i - 1][j], Com_Sub[i][j - 1]);
//             }
//         }
//     }
//     return Com_Sub[str1.length()][str2.length()];
// }
// int main()
// {
//     while (cin >> str1 >> str2)
//     {
//         cout << LCS() << endl;
//     }
//     return 0;
// }

// LIS(贪心)
// #include <bits/stdc++.h>
// using namespace std;
// const int MAXN = 100005;
// int n, k, len = 1, arr[MAXN], tail[MAXN];
// int LIS()
// {
//     // 初始化
//     tail[1] = arr[1];
//     for (int i = 2; i <= n; i++)
//     {
//         if (arr[i] > tail[len])
//         {
//             // 尾部插入
//             tail[++len] = arr[i];
//         }
//         else
//         {
//             // 二分查找首个大于arr[i]的位置替换
//             k = lower_bound(tail + 1, tail + len + 1, arr[i]) - tail;
//             tail[k] = arr[i];
//         }
//     }
//     return len;
// }
// int main()
// {
//     while (cin >> n)
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> arr[i];
//         }
//         cout << LIS() << endl;
//     }
//     return 0;
// }

// The Triangle(DP)
// #include <bits/stdc++.h>
// using namespace std;
// const int MAXN = 105;
// int arr[MAXN][MAXN], angle[MAXN][MAXN];
// int main()
// {
//     int n;
//     cin >> n;
//     // 尾行初始化
//     for (int i = 1; i <= n; i++)
//     {
//         angle[n][i] = arr[n][i];
//     }
//     // 从尾行开始向上累加
//     for (int i = n - 1; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             angle[i][j] = arr[i][j] + max(angle[i + 1][j], angle[i + 1][j + 1]);
//         }
//     }
//     cout << angle[1][1] << endl;
//     return 0;
// }

// The Triangle(记忆化搜索)
// #include <bits/stdc++.h>
// using namespace std;
// const int MAXN = 105;
// int msum, n, arr[MAXN][MAXN], angle[MAXN][MAXN];
// int dfs(int i, int j)
// {
//     if (i == n)
//     {
//         return arr[i][j];
//     }
//     // 记忆化搜索
//     if (angle[i][j] != -1)
//     {
//         return angle[i][j];
//     }
//     return angle[i][j] = max(dfs(i + 1, j), dfs(i + 1, j + 1)) + arr[i][j];
// }
// int main()
// {
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     memset(angle, -1, sizeof(angle));
//     msum = dfs(1, 1);
//     cout << msum << endl;
//     return 0;
// }

// 石子合并(区间DP)
// #include <bits/stdc++.h>
// using namespace std;
// const int INF = 1e9;
// const int N = 300;
// int n, sum[N], minval[N][N], s[N][N];
// int MinVal()
// {
//     memset(minval, 0, sizeof(minval));
//     for (int i = 1; i <= n; i++)
//     {
//         s[i][i] = i;
//     }
//     // len为i与j之间的间隔
//     for (int len = 1; len < n; len++)
//     {
//         for (int i = 1; i <= n - len; i++)
//         {
//             int j = i + len;
//             minval[i][j] = INF;
//             // 枚举分割点k
//             for (int k = i; k <= j; k++)
//             {
//                 minval[i][j] = min(minval[i][j], minval[i][k] + minval[k + 1][j] + sum[j] - sum[i - 1]);
//             }
//             // 记录最佳分割点(优化)
//             // for (int k = s[i][j - 1]; k <= s[i + 1][j]; k++)
//             // {
//             //     if (minval[i][k] + minval[k + 1][j] + sum[j] - sum[i - 1] < minval[i][j])
//             //     {
//             //         minval[i][j] = minval[i][k] + minval[k + 1][j] + sum[j] - sum[i - 1];
//             //         s[i][j] = k;
//             //     }
//             // }
//         }
//     }
//     return minval[1][n];
// }
// int main()
// {
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> sum[i];
//     }
//     cout << MinVal() << endl;
//     return 0;
// }

// Cheapest Palindrome(DP)
// #include <bits/stdc++.h>
// using namespace std;
// int cost[30], n, m, palindrome[2005][2005];
// char s[2005], ch;
// int main()
// {
//     int x, y;
//     while (cin >> n >> m)
//     {
//         cin >> s;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> ch >> x >> y;
//             // 插入与删除的代价等价,取最小值即可
//             cost[ch - 'a'] = min(x, y);
//         }
//     }
//     // 区间由小到大扩展,否则状态转移失败
//     for (int i = m - 1; i >= 0; i--)
//     {
//         for (int j = i + 1; j < m; j++)
//         {
//             if (s[i] == s[j])
//             {
//                 palindrome[i][j] = palindrome[i + 1][j - 1];
//             }
//             else
//             {
//                 palindrome[i][j] = min(palindrome[i + 1][j] + cost[s[i] - 'a'], palindrome[i][j - 1] + cost[s[j] - 'a']);
//             }
//         }
//     }
//     cout << palindrome[0][m - 1];
//     return 0;
// }

// Anniversary Party(树形DP)
// #include <bits/stdc++.h>
// using namespace std;
// const int N = 100005;
// int n, value[N], annparty[N][2], father[N];
// vector<int> tree[N];
// void DFS(int u)
// {
//     // annparty[u][0] 为不选择该节点的最优解, annparty[u][1] 为选择该节点的最优解
//     annparty[u][0] = 0;
//     annparty[u][1] = value[u];
//     for (int i = 0; i < tree[u].size(); i++)
//     {
//         int son = tree[u][i];
//         DFS(son);
//         annparty[u][0] += max(annparty[son][0], annparty[son][1]);
//         annparty[u][1] += annparty[son][0];
//     }
// }
// int main()
// {
//     while (cin >> n)
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> value[i];
//             tree[i].clear();
//             father[i] = -1;
//         }
//         while (1)
//         {
//             int u, v;
//             cin >> u >> v;
//             if (u == 0 && v == 0)
//             {
//                 break;
//             }
//             tree[u].push_back(v);
//             father[v] = u;
//         }
//         int root = 1;
//         while (father[root] != -1)
//         {
//             root = father[root];
//         }
//         // 根节点开始DFS
//         DFS(root);
//         cout << max(annparty[root][0], annparty[root][1]) << endl;
//     }
//     return 0;
// }

// Computer(树形DP)
// #include <bits/stdc++.h>
// using namespace std;
// const int N = 100005;
// struct node
// {
//     int id;
//     int val;
// };
// vector<node> tree[N];
// int n, ComCost[N][3];
// void init()
// {
//     for (int i = 1; i <= n; i++)
//     {
//         tree[i].clear();
//     }
//     memset(ComCost, 0, sizeof(ComCost));
//     for (int i = 2; i <= n; i++)
//     {
//         // 节点i到节点j的距离val(j为父节点)
//         int j, v;
//         cin >> j >> v;
//         tree[j].push_back({i, v});
//     }
// }
// // DFS_1(u) 先子节点再父节点
// void DFS_1(int father)
// {
//     // longest: 以father为根树的最大深度, seconest: 以father为根树的次大深度
//     int longest = 0, seconest = 0;
//     for (int i = 0; i < tree[father].size(); i++)
//     {
//         node child = tree[father][i];
//         DFS_1(child.id);
//         int val = ComCost[child.id][0] + child.val;
//         if (val > longest)
//         {
//             seconest = longest;
//             longest = val;
//         }
//         if (val < longest && val > seconest)
//         {
//             seconest = val;
//         }
//     }
//     // ComCost[father][0]: 以father为根树的最大代价, ComCost[father][1]: 以father为根树的次大代价
//     ComCost[father][0] = longest;
//     ComCost[father][1] = seconest;
// }
// // DFS_2(u) 先父节点再子节点
// void DFS_2(int father)
// {
//     for (int i = 0; i < tree[father].size(); i++)
//     {
//         node child = tree[father][i];
//         // 子节点位于father的最大代价路径上
//         if (ComCost[child.id][0] + child.val == ComCost[father][0])
//         {
//             ComCost[child.id][2] = max(ComCost[father][2], ComCost[father][1]) + child.val;
//         }
//         else
//         {
//             ComCost[child.id][2] = max(ComCost[father][2], ComCost[father][0]) + child.val;
//         }
//         DFS_2(child.id);
//     }
// }
// int main()
// {
//     while (cin >> n)
//     {
//         init();
//         // 统计ComCost[i][0]/ComCost[i][1]
//         DFS_1(1);
//         // 统计ComCost[i][2]
//         ComCost[1][2] = 0;
//         DFS_2(1);
//         for (int i = 1; i <= n; i++)
//         {
//             cout << max(ComCost[i][0], ComCost[i][2]) << endl;
//         }
//     }
//     return 0;
// }

