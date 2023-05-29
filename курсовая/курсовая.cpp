#include <iostream>
#include <string>
using namespace std;

class type1 {
public:
    void Get_answer() {
        cout << "Ответом является любое значение Х" << endl;
    }
    void show() {
        cout << "Уравнение 0 = 0" << endl;
    }
};

class type2 {
private:
    double A;
public:
    type2(double a1) {
        A = a1;
    }
    void Get_answer() {
        cout << "Ответом является Х = 0" << endl;
    }
    void show() {
        cout << "Уравнение " << A << "*x^2 = 0" << endl;
    }
};

class type3 {
private:
    double C;
public:
    type3(double c1) {
        C = c1;
    }
    void Get_answer() {
        cout << "Корней нет" << endl;
    }
    void show() {
        cout << C << " = 0" << endl;
    }
};

class type4 {
private:
    double A, C;
public:
    type4(double a1, double c1) {
        A = a1;
        C = c1;
    }
    void Get_answer() {
        double k = ((-1) * C) / A;
        if (k >= 0) {
            double x1 = sqrt(k);
            double x2 = sqrt(k) * (-1);
            cout << "Корни уравнения: " << endl << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
        }
        else {
            cout << "Корней нет" << endl;
        }
    }
    void show() {
        cout << "Уравнение " << A << "*x^2 + " << C << " = 0" << endl;
    }
    void Get_answer_podbor() {
        if ((((-1) * C) / A) < 0) {
            cout << "Корней методом подбора нет" << endl;
        }
        else {
            double min = abs(0 - A * (-20) * (-20) - C);
            double x = -20;
            for (double i = -20; i < 20.01; i = i + 0.01) {
                double temp = abs(0 - A * (i) * (i)-C);
                if (temp < min) {
                    min = temp;
                    x = i;
                }
            }
            cout << "Приближенно, один из корней уравнения: " << x << endl;
        }
    }
};

class type5 {
private:
    double B, C;
public:
    type5(double b1, double c1) {
        B = b1;
        C = c1;
    }
    void Get_answer() {
        cout << "Корень уравнения: " << (-1) * (C / B) << endl;
    }
    void show() {
        cout << "Уравнение " << B << "*x + " << C << " = 0" << endl;
    }
    void Get_answer_podbor() {
        double min = abs(0 - B * (-20) - C);
        double x = -20;
        for (double i = -20; i < 20.01; i = i + 0.01) {
            double temp = abs(0 - B * (i)-C);
            if (temp < min) {
                min = temp;
                x = i;
            }
        }
        cout << "Приближенно, один из корней уравнения: " << x << endl;
    }
};

class type6 {
private:
    double A, B, C;
public:
    type6(double a1, double b1, double c1) {
        A = a1;
        B = b1;
        C = c1;
    }
    void Get_answer() {
        double D = B * B - 4 * A * C;
        if (D < 0) {
            cout << "Уравнение не имеет действительных корней" << endl;
        }
        else {
            if (D == 0) {
                double x = ((-1) * B - sqrt(D)) / (2 * A);
                cout << "Корень уравнения: " << x << endl;
            }
            else {
                double x1 = ((-1) * B - sqrt(D)) / (2 * A);
                double x2 = ((-1) * B + sqrt(D)) / (2 * A);
                cout << "Корни уравнения: " << endl;
                cout << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
            }
        }
    }
    void show() {
        cout << "Уравнение " << A << "*x^2 + " << B << "*x + " << C << " = 0" << endl;
    }
    void Get_answer_podbor() {
        double D = B * B - 4 * A * C;
        if (D < 0) {
            cout << "Уравнение не имеет действительных корней" << endl;
        }
        else {
            double min = abs(0 - A * (-20) * (-20) - B * (-20) - C);
            double x = -20;
            for (double i = -20; i < 20.01; i = i + 0.01) {
                double temp = abs(0 - A * (i) * (i)-B * i - C);
                if (temp < min) {
                    min = temp;
                    x = i;
                }
            }
            cout << "Приближенно, один из корней уравнения: " << x << endl;
        }
    }
};

class type7 {
private:
    double B;
public:
    type7(double b1) {
        B = b1;
    }
    void Get_answer() {
        cout << "Корень уравнения: x = 0" << endl;
    }
    void show() {
        cout << "Уравнение " << B << "*x = 0" << endl;
    }
};

class type8 {
private:
    double A, B;
public:
    type8(double a1, double b1) {
        A = a1;
        B = b1;
    }
    void Get_answer() {
        double x = ((-1) * B) / A;
        cout << "Корни уравнения: " << endl;
        cout << "X1 = 0" << endl << "X2 = " << x << endl;
    }
    void show() {
        cout << "Уравнение " << A << "*x^2 + " << B << "*x = 0 " << endl;
    }
    void Get_answer_podbor() {
        double min = abs(0 - A * (-20) * (-20) - B * (-20));
        double x = -20;
        for (double i = -20; i < 20.01; i = i + 0.01) {
            if (i != 0) {
                double temp = abs(0 - A * i * i - B * (i));
                if (temp < min) {
                    min = temp;
                    x = i;
                }
            }
        }
        cout << "Приближенно, один из корней уравнения: " << x << endl;
    }
};

int main()
{
    system("color 27");
    setlocale(LC_ALL, "ru");
    while (true)
    {
        int point, temp = 1;
        string abc;
        cout << "\tМЕНЮ\n1. Типы квадртаных уравнений\n2. Некоторые методы решения квадртаного уравнения и их сравнение\n3. Решение квадратного уравнения\n4. Выход из программы" << endl;
        cout << "Выберите пункт меню: ";
        cin >> abc;
        try
        {
            temp = stoi(abc);
            point = temp;
            temp = 1;
        }
        catch (const exception& e)
        {
            cerr << "Ошибка: " << e.what() << endl;
            point = 5;
        }
        system("cls");
        switch (point)
        {
        case 1:
            cout << "1. Типы квадртаных уравнений\n\nКвадратное уравнение - это алгебраическое уравнение второй степени, общий вид которого: ax^2 + bx + c = 0.\n\nВ зависимости от значений, которые могут принимать коэффициенты квадртаного уравнения, можно выделить восемь типов квадратных уравнений:\n1. 0 = 0\n2. ax^2 = 0\n3. c = 0\n4. ax^2 + c = 0\n5. bx + c = 0\n6. ax^2 + bx + c = 0\n7. bx = 0\n8. ax^2 + bx = 0\n\nДанная программа оперирует перечисленными выше типами квадртаных уравнений при нахождении их корней.\n\n" << endl;
            cout << "Для перехода к меню введите любой символ: ";
            cin >> abc;
            system("cls");
            break;
        case 2:
            cout << "2. Некоторые методы решения квадртаного уравнения\n\nДля решения квадратных уравнений используются различные методы. Выбор метода зависит от типа квадратного уравнения.\n\nК основным методам решения квадртаных уравнений обычно отностя следуюзие:\n1. Выделение полного квадрата.\n2. Разложение на множители.\n3. Использование дискриминанта.\n4. Теорема Виета\n\nПри нулевом коэффициента а уравнение упрощается, и его можно решить как обычное уравнение перовй степени путём\nвыражения неизвестного.\n\nИсользуя ресурсы вычислительной машины, можно находить корни уравнения (в том числе квадратных) методом подбора.\nДля этого нужно определить интервал, в котором будет выполнятся поиск корня, установить шаг и проверить все значения\nмногочлена уравнения в данном интервале с установленным шагом. Для человека такая задача является более трудоёмкой\nи ресурсозатратной, чем для компьютера.\n\nМетод подбора имеетс яиспользовать для уравнений типов 4, 5, 6, 8, используемых в данной программе.\n\nНазовём классическим методом решения метод, который основан на решении или с помощью дискриминанта, или путём выражения\nнеизвестного.\n\n" << endl;
            if (true)
            {
                cout << "(4) ";
                type4 eq4(3, -1);
                eq4.show();
                cout << "Классическим методом:" << endl;
                eq4.Get_answer();
                cout << "Подбором:" << endl;
                eq4.Get_answer_podbor();
                cout << "(5) ";
                type5 eq5(-3, 2);
                eq5.show();
                cout << "Классическим методом:" << endl;
                eq5.Get_answer();
                cout << "Подбором:" << endl;
                eq5.Get_answer_podbor();
                cout << "(6) ";
                type6 eq6(6, 3, -4);
                eq6.show();
                cout << "Классическим методом:" << endl;
                eq6.Get_answer();
                cout << "Подбором:" << endl;
                eq6.Get_answer_podbor();
                cout << "(8) ";
                type8 eq8(-4.5, -1.875);
                eq8.show();
                cout << "Классическим методом:" << endl;
                eq8.Get_answer();
                cout << "Подбором:" << endl;
                eq8.Get_answer_podbor();
            }
            cout << "Для перехода к меню введите любой символ: ";
            cin >> abc;
            system("cls");
            break;
        case 3:
            while (temp == 1)
            {
                cout << "3. Решение квадратного уравнения\n\nВведите коэффициенты a, b, c через пробел (резделитель дробной части - точка): ";
                double a, b, c;
                cin >> a >> b >> c;
                if (cin.fail())
                {
                    cout << "Ошибка ввода. Повторите ещё раз\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                    continue;
                }
                if (a != 0)
                {
                    if (b != 0)
                    {
                        if (c != 0)
                        {
                            type6 eq(a, b, c);
                            eq.show();
                            eq.Get_answer();
                            eq.Get_answer_podbor();
                        }
                        else
                        {
                            type8 eq(a, b);
                            eq.show();
                            eq.Get_answer();
                            eq.Get_answer_podbor();
                        }
                    }
                    else
                    {
                        if (c != 0)
                        {
                            type4 eq(a, c);
                            eq.show();
                            eq.Get_answer();
                            eq.Get_answer_podbor();
                        }
                        else
                        {
                            type2 eq(a);
                            eq.show();
                            eq.Get_answer();
                        }
                    }

                }
                else
                {
                    if (b != 0)
                    {
                        if (c != 0)
                        {
                            type5 eq(b, c);
                            eq.show();
                            eq.Get_answer();
                            eq.Get_answer_podbor();
                        }
                        else
                        {
                            type7 eq(b);
                            eq.show();
                            eq.Get_answer();
                        }
                    }
                    else
                    {
                        if (c != 0)
                        {
                            type3 eq(c);
                            eq.show();
                            eq.Get_answer();
                        }
                        else
                        {
                            type1 eq;
                            eq.show();
                            eq.Get_answer();
                        }
                    }
                }
                cout << "Если вы хотите найти корни ещё одного уравнения, введите 1. Для перехода к меню введите любо другое значение: ";
                cin >> abc;
                try
                {
                    temp = stoi(abc);
                }
                catch (const exception& e)
                {
                    temp = 2;
                }
                system("cls");
            }
            break;
        case 4:
            cout << "Работа программы завершена." << endl;
            return 0;
        default:
            cout << "Вы ввели неверное значение.\n\nВведите любой символ для продолжения ";
            cin >> abc;
            system("cls");
            break;
        }
    }
    return 0;
}
