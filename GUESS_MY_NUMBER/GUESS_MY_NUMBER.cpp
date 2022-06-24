#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;
// Функция отображения жизней
void lives1(int lives1) {

    switch (lives1)
    {
    case 1:
    {
        cout << "[]\n";
        break;
    }
    case 2:
    {
        cout << "[][]\n";
        break;
    }
    case 3:
    {
        cout << "[][][]\n";
        break;
    }
    case 4:
    {
        cout << "[][][][]\n";
        break;
    }
    case 5:
    {
        cout << "[][][][][]\n";
        break;
    }
    default:
    {
        cout << "У вас не осталось жизней!\n"
             << "\tВы проиграли!\n\n";
        break;
    }
    }
}

void lives2(int lives2) {

    switch (lives2)
    {
    case 1: {
        cout << "[]\n";
        break;
    }
    case 2: {
        cout << "[][]\n";
        break;
    }
    case 3: {
        cout << "[][][]\n";
        break;
    }
    case 4: {
        cout << "[][][][]\n";
        break;
    }
    case 5: {
        cout << "[][][][][]\n";
        break;
    }
    case 6: {
        cout << "[][][][][][]\n";
        break;
    }
    case 7: {
        cout << "[][][][][][][]\n";
        break;
    }
    case 8: {
        cout << "[][][][][][][][]\n";
        break;
    }
    case 9: {
        cout << "[][][][][][][][][]\n";
        break;
    }
    case 10: {
        cout << "[][][][][][][][][][]\n";
        break;
    }
    case 11: {
        cout << "[][][][][][][][][][][]\n";
        break;
    }
    case 12: {
        cout << "[][][][][][][][][][][][]\n";
        break;
    }
    case 13: {
        cout << "[][][][][][][][][][][][][]\n";
        break;
    }
    case 14: {
        cout << "[][][][][][][][][][][][][][]\n";
        break;
    }
    case 15: {
        cout << "[][][][][][][][][][][][][][][]\n";
        break;
    }
    case 16: {
        cout << "[][][][][][][][][][][][][][][][]\n";
        break;
    }
    case 17: {
        cout << "[][][][][][][][][][][][][][][][][]\n";
        break;
    }
    case 18: {
        cout << "[][][][][][][][][][][][][][][][][][]\n";
        break;
    }
    case 19: {
        cout << "[][][][][][][][][][][][][][][][][][][]\n";
        break;
    }
    case 20: {
        cout << "[][][][][][][][][][][][][][][][][][][][]\n";
        break;
    }
    case 21: {
        cout << "[][][][][][][][][][][][][][][][][][][][][]\n";
        break;
    }
    case 22: {
        cout << "[][][][][][][][][][][][][][][][][][][][][][]\n";
        break;
    }
    case 23: {
        cout << "[][][][][][][][][][][][][][][][][][][][][][][]\n";
        break;
    }
    case 24: {
        cout << "[][][][][][][][][][][][][][][][][][][][][][][][]\n";
        break;
    }
    case 25: {
        cout << "[][][][][][][][][][][][][][][][][][][][][][][][][]\n";
        break;
    }
    default:
    {
        cout << "У вас не осталось жизней!\n"
             <<"\tВы проиграли!\n\n";
        break;
    }
    }
}
    



int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    int userchoice,level,pcnum,usernum,userpoints=0;
    char help;
    cout << "\tДобро пожаловать в игру \"Угадай Число\" ! \n\n";
    do {
        cout << "\t\t1. Начать игру \n"
            << "\t\t2.   Выход \n";
        cin >> userchoice;
        // Выбор уровня сложности
        if (userchoice == 1)
        {
            cout << "\tВыберите уровень сложности: \n\n";
            cout << "\t\t1. А вдруг угадаю? \n"
                 << "\t\t2. Я обучал Вангу \n";
            cin >> level;
            
            switch (level)
            {// Первый уровень
            case 1: 
            {
                cout << "\tВы выбрали лёгкий уровень сложности.\n"
                     << "\tНужно угадать число от 1 до 10.\n";
               
                    cout << "\tКомпьютер загадывает число... \n";
                    Sleep(1500);
                    pcnum = rand() % 9 + 1;
                    cout << "\tКакое число загадано?\n";
                    for (int i = 5; i > 0; i--) 
                    {
                        if(i<4)
                        {
                            do 
                            {
                                cout << "Хотите вять подсказку? (минус одна жизнь) Y - да/ N - нет \n";
                                cin >> help;
                            } while (help != 'y' && help != 'n');// Вывод подсказки
                            if (help == 'y')
                            {
                                i--;
                                if (i == 0) { break; }
                                if (pcnum > usernum) 
                                {
                                    cout << "\tВведённое число меньше загаданного =)\n";
                                }
                                else 
                                {
                                    cout<< "\tВведённое число больше загаданного =)\n";
                                }
                            }
                            else if (help == 'n')
                            {
                                cout << endl;
                            }
                            userpoints = i;
                        }

                        cout << "Жизни -> ";
                        lives1(i);
                        cin >> usernum;
                        if (usernum == pcnum)
                        {
                            cout << "\tВы угадали!\n\n";
                            cout << "Вы набрали " << userpoints * 5 << " очков! \n\n";
                            break;
                        }
                        else 
                        {
                            cout << "\tНеверно!\n\n";
                            continue;
                        }

                    }
                    if (usernum != pcnum) 
                    {
                        cout << "\tВаши жизни закончились!\n"
                            << "\tВы проиграли!\n";
                        continue;
                    }
                    break;
            }
            case 2:
            {// Второй уровень
                cout << "\tВы выбрали высокий уровень сложности.\n"
                    << "\tНужно угадать число от 10 до 100.\n";

                cout << "\tКомпьютер загадывает число... \n";
                Sleep(1500);
                pcnum = rand() % 90 + 1;
                cout << "\tКакое число загадано?\n";
                
                for (int i = 25; i > 0; i--)
                {
                    if (i < 15)
                    {
                        do
                        {
                            cout << "Хотите вять подсказку? (минус одна жизнь) Y - да/ N - нет \n";
                            cin >> help;
                        } while (help != 'y' && help != 'n');// Вывод подсказки
                        if (help == 'y')
                        {
                            i--;
                            if (i == 0) { break; }
                            if (pcnum > usernum)
                            {
                                cout << "\tВведённое число меньше загаданного =)\n";
                            }
                            else
                            {
                                cout << "\tВведённое число больше загаданного =)\n";
                            }
                        }
                        else if (help == 'n')
                        {
                            cout << endl;
                        }
                        
                    }
                    
                    cout << "Жизни -> ";
                    lives2(i);
                    cin >> usernum;
                    if (usernum == pcnum)
                    {
                        cout << "\tВы угадали!\n\n";
                        cout << "Вы набрали " << userpoints * 10 << " очков! \n\n";
                        break;
                    }
                    else
                    {
                        cout << "\tНеверно!\n\n";
                        continue;
                    }

                }
                if (usernum != pcnum)
                {
                    cout << "\tВаши жизни закончились!\n"
                         << "\tВы проиграли!\n\n\n";
                    continue;
                }
                break;
            }
            }
            
        }
        else if (userchoice < 1 || userchoice>2) {
            cout << "\tНет такого пункта в меню!\n\n";
            continue;
        }
    } while (userchoice != 2);

    return 0;
}

