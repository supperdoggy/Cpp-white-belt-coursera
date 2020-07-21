//
//  main.cpp
//  problem-9
//
//  Created by Maks on 21.07.2020.
//  Copyright © 2020 Maks. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void ADD(vector<vector<string>>& v, string name, int day){
    v[day].push_back(name);
}

void DUMP(const vector<vector<string>>& v, const int day){
    cout << v[day].size() << " ";
    for (auto c: v[day]){
        cout << c << " ";
    }
    cout << endl;
}

vector<vector<string>> NEXT(vector<vector<string>>& v, int days){
    vector<vector<string>> v1(31);
    if (days == 28) {
        v1[27] = v[27];
        v1[28] = v[28];
        v1[29] = v[29];
        v1[30] = v[30];
    } else if (days == 30) {
        v1[29] = v[29];
    }
    else{
        v.clear();
    }
    return v1;
    
}

int main(int argc, const char * argv[]) {
    int Q;
    int counter = 1;
    vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<vector<string>> v(days[0]);
    cin >> Q;
    for (int j = 0; j<Q; j++) {
        string command;
        cin >> command;
        
        if (command == "NEXT"){
             // перед переходом к следующему месяцу запомним длину предыдущего
                       // обьявляем эту переменную константной, потому что менять её не планируем
                       const int old_month_length = days[counter];

                       // номер месяца должен увеличиться на 1, но после декабря идёт январь:
                       // например, (5 + 1) % 12 = 6, но (11 + 1) % 12 = 0
                       counter += 1 ;

                       const int new_month_length = days[counter];

                       // если новый месяц больше предыдущего, достаточно сделать resize;
                       // иначе перед resize надо переместить дела с «лишних» последних дней
                       if (new_month_length < old_month_length) {

                           // далее понадобится добавлять новые дела в последний день нового месяца
                           // чтобы не писать несколько раз days_concerns[new_month_length - 1],
                           // создадим ссылку с более коротким названием для этого вектора
                           vector<string>& last_day_concerns = v[new_month_length - 1];

                           // перебираем все «лишние» дни в конце месяца
                           for (int day = new_month_length; day < old_month_length; ++day) {
                               // копируем вектор days_concerns[day]
                               // в конец вектора last_day_concerns
                               last_day_concerns.insert(
                                       end(last_day_concerns),
                                       begin(v[day]), end(v[day]));
                           }
                       }
                       v.resize(new_month_length);
        }
        else if (command == "ADD"){
            int i;
            string s;
            cin >> i >> s;
            ADD(v, s, i-1);
        }
        else if (command == "DUMP"){
            int i;
            cin >> i;
            DUMP(v, i-1);
        }
    }
    return 0;
}

