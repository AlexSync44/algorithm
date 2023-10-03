#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <map>
#include <unordered_map>
#include <cctype>

#include "tasksNodeOrList.h"

using std::cout;
using std::cin;

void algor_1();
void palindrome();
void APowB();
void additionNumber();
void arithmeticOfNumbers();
void geometricNumbers();
void maxNumber();
void minEvenNumber();
void sumOddNumber();
void pagesTest();
void foodTest();
void wayTest();
void sortGrainTest();
void ignoramusTest();
void fgorTest();
void divisionOfTheAmoebaTest();
void weightlifterTest();
void Test_Var2();
void recThreeTest();
void recTwoTest();
void answerTest();
void snail_V1();
void snail_V2();
void testSpeed();
void polindrome();
void simplePalindrome_V1();
void simplePalindrome_V2();
void chessKing();
void whileTest();
void numUpToZero();
void truncTest();
void setprecision();
void numberInFibonacci();
void numberOfConsecutive();
void sequenceElement();
void chessMoves();
void chessMovesHorse();
void narcissisticNumberTest();
void preValue();
void prosentDep();
void sequenceWithEvasion();
void matrTestOne();
void matrPicture();
void matrFillNumbers();
void matrCheckingSemetricity();
void matrReverse();
void matrWitchTecket();
void matrNinetyDegreeTurn();
void matrSnake();
void matrDiagonal();
void testVec();
void sizeShoesVec();
int qwer(int x);
void qwerty23();
void ttest();
void srav();
void testVector();
void strPolintrom();
void uniqueElements();
void step1_8();
void step1_9();
void maxSequenceTest();
void testTask_1();
bool isPalindrome(int x);
std::string longestCommonPrefix(const std::vector<std::string>& strs);
bool isValid(std::string s);
bool isValidMod(const std::string& s);
int maxProfit(const std::vector<int>& prices);
void testCombine();
double myPow(double x, int n);
void mergeTest();
int removeDuplicates(std::vector<int>& nums);
void removeElementTest();
void rotate(std::vector<std::vector<int>>& matrix);
std::string largestOddNumber(std::string num);
std::string largestGoodInteger(std::string num);
int strStr(std::string haystack, std::string needle);
bool canJump(std::vector<int>& nums);
int searchInsert(std::vector<int>& nums, int target);
std::vector<int> plusOne(std::vector<int>& digits);
int lengthOfLastWord(std::string s);
bool wordPattern(std::string pattern, std::string s);
int lengthOfLongestSubstring(std::string s);
int furthestDistanceFromOrigin(std::string moves);
std::string firstPalindrome(std::vector<std::string>& words);
bool isPalindrome(std::string s);
int characterReplacement(std::string s, int k);
bool isHappy(int n);
int distributeCandies(std::vector<int>& candyType);
double findMedianSortedArrays(const std::vector<int>& nums1, const std::vector<int>& nums2);
int singleNumber(const std::vector<int>& nums);
bool wordBreak(std::string s, std::vector<std::string>& wordDict);
std::string convertToTitle(int columnNumber);
std::vector<std::vector<int>> threeSum(std::vector<int>& nums);


/*
	static int i = 1;
	srand(time(0) * i++);
*/

int main()
{
	setlocale(LC_ALL, "rus");

	std::vector<int> vec = { -1,0,1,2,-1,-4 };
	std::vector<std::vector<int>> buf;

	buf = threeSum(vec);

	for (size_t i = 0; i < buf.size(); i++)
	{
		for (size_t j = 0; j < buf[i].size(); j++)
		{
			std::cout << buf[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	return 0;
}

void algor_1()
{
	long value;

	cin >> value;

	while (true)
	{
		cout << value << ' ';

		if (value == 1)
			break;
		if (value % 2 == 0)
		{
			value /= 2;
		}
		else
		{
			value = value * 3 + 1;
		}
	}
	cout << '\n';
}

void palindrome()
{
	long long int num, buf;
	int n(1), reverseNum(0);
	short digit;
	int count(0);

	cin >> num;

	if (num % 11 == 0)
	{
		cout << "Число не полиндром!";
		return;
	}

	buf = num;

	while (buf)
	{
		buf /= 10;
		if (!buf)
		{
			break;
		}
		count++;
		n *= 10;
	}

	while (num)
	{
		digit = num % 10;
		reverseNum += digit * n;

		cout << digit;

		num /= 10;
		n /= 10;
	}

	cout << '\n' << reverseNum;
}

void APowB()
{
	int numA, numB;
	unsigned numC(0);

	cin >> numA >> numB;

	if (numA > numB)
	{
		std::swap(numA, numB);
	}

	while (numA <= numB)
	{
		if (numA == numB)
		{
			break;
		}
		numA *= numA;
		numC++;
	}

	if (numA == numB)
	{
		cout << "Целое положительное число = " << numC;
	}
	else
	{
		cout << "Такого числа для чисел " << numA << ' ' << numB
			<< " не существует";
	}
}

void additionNumber()
{
	unsigned numA, numB(1), sumB(0);

	cin >> numA;

	while (numA > sumB)
	{
		sumB += numB;
		cout << numB << " + ";
		numB++;
	}

	cout << "\nМинимальное число = " << numB;
}

void arithmeticOfNumbers()
{
	int numBuf, sumBuf(0), count, counter(0);

	srand(time(0));

	cin >> count;

	while (count--)
	{
		numBuf = rand() % 100;
		sumBuf += numBuf;
		cout << numBuf << ' ';
		counter++;
	}

	cout << "\n\nСреднее арифметическое число = " << (double(sumBuf) / counter);
}

void geometricNumbers()
{
	int numBuf, count;
	double numAdd(1);

	srand(time(0));

	cin >> count;

	for (size_t i = 0; i < count; i++)
	{
		numBuf = rand() % 100;
		numAdd *= numBuf;
		cout << numBuf << ' ';
	}

	cout << "\n\nСреднее геометрическое чисел = " << pow(numAdd, 1.0 / count);
}

void maxNumber()
{
	int num;
	short digit(0), buf(0);

	cin >> num;

	while (num)
	{
		digit = num % 10;

		if (buf <= digit)
		{
			buf = digit;
		}

		num /= 10;
	}

	cout << "\nМаксимальное число = " << buf;
}

void minEvenNumber()
{
	int num;
	short digit(0), buf(0);

	cin >> num;

	while (num)
	{
		digit = num % 10;

		if (buf >= digit && digit % 2 == 0)
		{
			buf = digit;
		}

		num /= 10;
	}

	cout << "\nМинимальное чётное число = " << buf;
}

void sumOddNumber()
{
	int num;
	short digit(0), buf(0), pos(1);

	cin >> num;

	while (num)
	{
		digit = num % 10;

		if (pos % 2 == 1)
		{
			buf += digit;
		}

		num /= 10;
		pos++;
	}

	cout << "\nСумма чисел стоящих на нечётных позициях = " << buf;
}

void getPageNumber(const unsigned maxSumPages,
	unsigned& sumPages, unsigned& page)
{
	if (sumPages >= maxSumPages)
		return;

	page++;
	sumPages += page;
	getPageNumber(maxSumPages, sumPages, page);
}

void pagesTest()
{
	unsigned sum = 1;
	unsigned page = 1;
	getPageNumber(2006, sum, page);

	cout << page;
}

int countFoodNumber(unsigned days)
{
	if (days <= 1)
		return 100;
	if (days < 2)
		return 200;

	return countFoodNumber(days - 2) + countFoodNumber(days - 1) - 2;
}

void foodTest()
{
	cout << "Сколько пищи съел Винни-Пух: ";

	int day = 0;
	cout << "Введите количество дней: ";
	cin >> day;

	cout << countFoodNumber(day) / 1000 << " кг. еды";
}
// 3
float countWay(unsigned days)
{
	if (days <= 1)
		return 10;

	return countWay(--days) * 1.1;
}

void wayTest()
{
	cout << "Сколько спортсмен пробежал: ";

	int day = 0;
	cout << "введите кол-во дней: ";
	cin >> day;

	cout << countWay(day) << " км.";
}
// 4
float sortGrain(unsigned hours)
{
	if (hours <= 1)
		return 6;

	return sortGrain(--hours) * 1.15 +
		sortGrain(--hours);
}

void sortGrainTest()
{
	int hour = 0;
	cout << "Введите кол-во часов: ";
	cin >> hour;

	cout << sortGrain(hour);
}
// Незнайка
int ignoramus(unsigned days)
{
	if (days <= 1)
		return 1;
	if (days < 2)
		return 2;

	return (2 / ignoramus(days - 2) + ignoramus(days - 1) - 2);
}

void ignoramusTest()
{
	int days = 0;
	cout << "Введите кол-во дней: ";
	cin >> days;

	cout << ignoramus(days);
}

// Лягушка
float fgor(unsigned days)
{
	if (days <= 1)
		return 12;

	return fgor(--days) * 1.20 +
		fgor(--days);
}

void fgorTest()
{
	int day = 0;
	cout << "Введите кол-во дней: ";
	cin >> day;

	cout << fgor(day);
}

// Амёба
int divisionOfTheAmoeba(unsigned hours)
{
	if (hours <= 0)
		return 1;

	if (hours % 3 == 0)
		return divisionOfTheAmoeba(--hours) * 2;

	return divisionOfTheAmoeba(--hours);
}

void divisionOfTheAmoebaTest()
{
	int hours = 0;
	cout << "Введите кол-во часов: ";
	cin >> hours;

	cout << divisionOfTheAmoeba(hours);
}

void weightlifter(float& age, float weightBegin = 120, float maxWeight = 210)
{
	if (weightBegin >= maxWeight)
		return;

	age += 0.5;

	weightlifter(age, weightBegin * 1.05, maxWeight);
}

void weightlifterTest()
{
	float age;
	cout << "Введите начальное кол-во лет: ";
	cin >> age;

	weightlifter(age);

	cout << age;
}

void Test_Var2()
{
	int num = 50;

	for (size_t i = 1; i <= num; i++)
	{
		cout << i << ' ';
	}
}

double recursionByThree(double& num, unsigned n)
{
	if (n <= 0)
		return 1;
	if (n <= 1)
		return 1;

	return recursionByThree(num /= 10, --n);
}

void recThreeTest()
{
	double num = 3;
	unsigned n;
	cout << "Введите кол-во повторений: ";
	cin >> n;

	n += 1;
	recursionByThree(num, n);

	cout << num;
}

double recursionByTwo(double& num, unsigned n)
{
	if (n <= 1)
		return 1;

	num /= 2;
	return recursionByTwo(num, --n);
}

void recTwoTest()
{
	double num = 10;
	unsigned n;
	cout << "Введите кол-во повторений: ";
	cin >> n;

	//n += 1;
	recursionByTwo(num, n);

	cout << num << '\n';
}

double newtonsBinomial(int& C, int m, int x)
{
	if (C <= 0)
		return 1;

	return newtonsBinomial(C, m, x);
}

void nwetonsBinomialTest()
{
	int m, x, C, res(0);
	cout << "Введите 2 числа m и x: ";
	cin >> m >> x;

	newtonsBinomial(C, m, x);

	for (size_t i = 0; i < m; i++)
	{
		res += res + C;
	}

	cout << res;
}

int power(int x, int p)
{
	int answer;

	answer = p ? x * power(x, p - 1) : 1;

	return answer;
}

void answerTest()
{
	int x, p;
	cin >> x >> p;

	cout << "\n\n" << power(x, p);
}

// решение улитки не шесте с while
void snail_V1()
{
	unsigned short heigth(0), up(0), down(0), buf(0), count(1);

	cin >> heigth >> up >> down;

	while (heigth >= buf)
	{
		buf += up;

		if (buf >= heigth)
		{
			break;
		}
		else
		{
			buf -= down;
		}

		count++;
	}

	cout << count;
}

// решение без циклов
void snail_V2()
{
	unsigned short heigth(0), up(0), down(0), diff(0), a(0), b(0), res(0);

	cin >> heigth >> up >> down;

	diff = (heigth - 3 + 1) / 1;
	a = (heigth - down);
	b = (up - down);

	cout << (a + b - 1) / b;
}

void testSpeed()
{
	int ring(109), time(0), speed(0);

	cin >> speed >> time;

	int res = (speed * time) % ring;

	while (res < 0)
	{
		res += ring;
	}

	cout << res;
}

//palindrome без циклов для 4 значных версия 1 моя
void simplePalindrome_V1()
{
	int num(0), digitNum1, digitNum2, digitNum3, digitNum4, bufNum1, bufNum2, res(0);

	cin >> num;

	digitNum1 = num / 1000;
	digitNum2 = (num / 100) % 10;
	digitNum3 = (num / 10) % 10;
	digitNum4 = num % 10;

	bufNum1 = (digitNum1 - digitNum4) * (digitNum1 - digitNum4);
	bufNum2 = (digitNum2 - digitNum3) * (digitNum2 - digitNum3);

	res = (bufNum1 + bufNum2) + 1;

	cout << res;
}

//palindrome без циклов для 4 значных версия 2 чужая более простая
/*Поделил входящее число на 2 числа, одно из них перевернул зеркально
(например 23 превращаем в 32).. потом вычитаю одно из другого,
если остаток 0 то добавляем +1, если есть остаток то ответ уже другой будет*/
void simplePalindrome_V2()
{
	int number, bufNum1, bufNum2;

	cin >> number;

	bufNum1 = number / 100;
	bufNum2 = (number % 10) * 10 + (number % 100) / 10;

	cout << bufNum1 - bufNum2 + 1;
}

void chessKing()
{
	int hor1, ver1, hor2, ver2, bufHor(0), bufVer(0);

	std::cin >> hor1 >> ver1 >> hor2 >> ver2;

	bufHor = hor1 - hor2;
	bufVer = ver1 - ver2;

	if ((bufHor == 2 || bufHor == -2)
		|| (bufVer == 2 || bufVer == -2))
	{
		std::cout << "NO";
		return;
	}

	if ((hor2 == (hor1 + 1) || hor2 == hor1)
		&& (ver2 == (ver1 + 1) || ver2 == ver1)
		|| (hor2 == (hor1 - 1) || ver2 == (ver1 - 1)))
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
}

void qwerty()
{
	int hor1, ver1, hor2, ver2;

	std::cin >> hor1 >> ver1 >> hor2 >> ver2;

	if ((hor2 == (hor1 + 1) && (ver2 == (ver1 + 1)))
		|| (hor2 == (hor1 - 1) && (ver2 == (ver1 - 1))))
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
}

void whileTest()
{
	int num, buf(1);

	cin >> num;

	if (!num)
	{
		return;
	}

	while (true)
	{
		if (buf == num)
		{
			cout << "YES";
			break;
		}
		else if (buf > num)
		{
			cout << "NO";
			break;
		}
		buf *= 2;
	}
}

void numUpToZero()
{
	unsigned num, largest(0), buf(0);

	while (true)
	{
		std::cin >> num;

		if (num == 0)
		{
			std::cout << buf;
			break;
		}

		if (largest < num)
		{
			buf = largest;
			largest = num;
		}
		else if (num >= buf)
		{
			buf = num;
		}
	}
}

void truncTest()
{
	double num, buf;

	std::cin >> num;

	buf = trunc(num);

	std::cout << num - buf;
}

void setprecision()
{
	double num;

	cin >> num;

	num *= 10;

	cout << (int)num % 10;
}

void numberInFibonacci()
{
	int num, count(1), addNumber(0), mainNumber(1), buf(0);

	std::cin >> num;

	while (true)
	{
		addNumber += mainNumber;
		buf = mainNumber;
		mainNumber = addNumber;
		addNumber = buf;

		count++;
		if (mainNumber == num)
		{
			std::cout << count;
			break;
		}
		else if (mainNumber > num)
		{
			std::cout << -1;
			break;
		}
	}
}

void sequenceElement()
{
	unsigned num, res(0), numOne(0), numTwo(0), numBufTwo(0), numBufOne(0), count(1);

	while (std::cin >> num && num != 0)
	{
		if (numOne > num && numOne > numTwo && numTwo != 0)
		{
			if (count > 0 && numBufOne == 1 && (res == 0 || res > count))
			{
				res = count;
			}
			numBufOne = 1;
			count = 1;
		}
		else
		{
			count++;
		}

		numTwo = numOne;
		numOne = num;
	}

	std::cout << res;
}

void chessMoves()
{
	float hor1, ver1, hor2, ver2, diff1, diff2, res;

	std::cin >> hor1 >> ver1 >> hor2 >> ver2;

	if (hor1 == hor2 || ver1 == ver2)
	{
		std::cout << "NO";
		return;
	}

	diff1 = hor1 - hor2;
	diff2 = ver1 - ver2;
	res = diff1 / diff2;

	if ((hor2 == (hor1 + 1) || hor2 == hor1)
		&& (ver2 == (ver1 + 1) || ver2 == ver1)
		|| (hor2 == (hor1 - 1) || ver2 == (ver1 - 1))
		|| (res == 1 || res == -1))
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
}

void chessMovesHorse()
{
	float hor1, ver1, hor2, ver2, diff1, diff2, res;

	std::cin >> hor1 >> ver1 >> hor2 >> ver2;

	diff1 = hor1 - hor2;
	diff2 = ver1 - ver2;

	res = diff2 / diff1;

	if (res == 1 || res == -1 || res == 2 || res == -2)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
}

bool narcissistic(int value)
{
	std::vector <int> vec;
	int digit(0), pos(0), res(0), bufValue(0);
	bufValue = value;

	while (bufValue)
	{
		digit = bufValue % 10;

		vec.push_back(digit);

		bufValue /= 10;
		pos++;
	}

	for (size_t i = 0; i < pos; i++)
	{
		res += std::pow(vec[i], pos);
	}

	if (res == value) return true;
	else return false;
}

void narcissisticNumberTest()
{
	int value(0);

	cin >> value;

	narcissistic(value) ? std::cout << "YES" : std::cout << "NO";
}

void preValue()
{
	int* arr = nullptr;
	int size, preValue, value;

	std::cin >> size;

	arr = new int(size);

	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];

		if (i > 0)
		{
			value = arr[i];
			preValue = arr[i - 1];


			if ((value < 0 && preValue < 0) || (value > 0 && preValue > 0))
			{
				std::cout << preValue << ' ' << value << ' ';
				return;
			}
		}
	}
}

void prosentDep()
{
	int p, x, y, k, sum;

	std::cin >> p >> x >> y >> k;
	sum = x * 100 + y;

	for (int i = 0; i < k; i++)
	{
		sum += sum * p / 100;
	}
	std::cout << sum / 100 << " " << sum % 100;
}

void sequenceWithEvasion()
{
	std::vector <int> vec;
	int count(0), num;
	double res(0.0), evasion(0.0);

	while (true)
	{
		std::cin >> num;
		if (num == 0)
		{
			break;
		}

		vec.push_back(num);
		res += num;
		count++;
	}

	res /= count;

	for (auto& elem : vec)
	{
		evasion += pow(elem, 2) - pow(res, 2);
	}
	evasion /= count - 1;

	std::cout << std::fixed << std::setprecision(11) << sqrt(evasion);
}

void matrTestOne()
{
	int** matr = nullptr;
	int rows, cols, maxNum(-2147483648), resRow(0), resCol(0);

	std::cin >> rows >> cols;

	matr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		matr[i] = new int[cols];
		memset(matr[i], 0, sizeof(int) * cols);
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cin >> matr[i][j];

			if (maxNum < matr[i][j])
			{
				maxNum = matr[i][j];
				resRow = i;
				resCol = j;
			}
		}
	}

	std::cout << resRow << ' ' << resCol;
}

/* Первая версия программы ниже, разница в переменных, которые по сути не нужны
	char** matr = nullptr;
	int rows, cols, size(0);

	std::cin >> size;

	rows = size;
	cols = size;

	matr = new char* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		matr[i] = new char[cols];
		memset(matr[i], 0, sizeof(char) * cols);
	}

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			if (i == j || i == size / 2 || j == size / 2 || i + j == size - 1)
			{
				matr[i][j] = '*';
			}
			else
			{
				matr[i][j] = '.';
			}
		}
	}

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cout << matr[i][j];
		}
		std::cout << '\n';
	}

*/

void matrPicture()
{
	char** matr = nullptr;
	unsigned size(0);

	std::cin >> size;

	matr = new char* [size];
	for (size_t i = 0; i < size; i++)
	{
		matr[i] = new char[size];
		memset(matr[i], 0, sizeof(char) * size);
	}

	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			if (i == j || i == size / 2 || j == size / 2 || i + j == size - 1)
			{
				matr[i][j] = '*';
			}
			else
			{
				matr[i][j] = '.';
			}
		}
	}

	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			std::cout << matr[i][j] << ' ';
		}
		std::cout << '\n';
	}

	delete[] matr;
}

void matrFillNumbers()
{
	int** matr = nullptr;
	unsigned rows, cols, sColOne, sColTwo;

	std::cin >> rows >> cols;

	matr = new int* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		matr[i] = new int[cols];
		memset(matr[i], 0, sizeof(int) * cols);
	}

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			//std::cin >> matr[i][j];
			matr[i][j] = 10 * (i + 1) + j + 1;
		}
	}

	std::cin >> sColOne >> sColTwo;

	for (size_t j = 0; j < rows; j++)
	{
		std::swap(matr[j][sColOne], matr[j][sColTwo]);
	}

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cout << matr[i][j] << ' ';
		}
		std::cout << '\n';
	}

	delete[] matr;
}

void matrCheckingSemetricity()
{
	int** matr = nullptr;
	unsigned size;

	std::cin >> size;

	matr = new int* [size];
	for (size_t i = 0; i < size; i++)
	{
		matr[i] = new int[size];
		memset(matr[i], 0, sizeof(int) * size);
	}

	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			std::cin >> matr[i][j];
			//matr[i][j] = 10 * (i + 1) + j + 1;
		}
	}

	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			if (matr[i][j] == matr[j][i])
			{
				continue;
			}
			else
			{
				std::cout << "NO";
				return;
			}
		}
	}

	std::cout << "YES";

	delete[] matr;
}

void matrReverse()
{
	int** matr = nullptr;
	unsigned rows, cols;

	std::cin >> rows >> cols;

	matr = new int* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		matr[i] = new int[cols];
		memset(matr[i], 0, sizeof(int) * cols);
	}

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cin >> matr[i][j];
		}
	}

	for (size_t i = 0; i < cols; i++)
	{
		for (size_t j = 0; j < rows; j++)
		{
			std::cout << matr[j][i] << ' ';
		}
		std::cout << '\n';
	}

	delete[] matr;
}

void matrWitchTecket()
{
	int** matr = nullptr;
	unsigned rows, cols, count(0), ticket(0);

	std::cin >> rows >> cols;

	matr = new int* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		matr[i] = new int[cols];
		memset(matr[i], 0, sizeof(int) * cols);
	}

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cin >> matr[i][j];
		}
	}

	std::cin >> ticket;

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			if (matr[i][j] == 0)
			{
				count++;
			}
			else
			{
				count = 0;
			}

			if (count >= ticket)
			{
				std::cout << i + 1;

				for (size_t k = 0; k < rows; k++)
				{
					delete[] matr[k];
				}
				delete[] matr;
				return;
			}
		}
		count = 0;
	}

	std::cout << 0;

	for (size_t i = 0; i < rows; i++)
	{
		delete[] matr[i];
	}
	delete[] matr;
}

void matrNinetyDegreeTurn()
{
	int** matr = nullptr;
	unsigned rows, cols;

	std::cin >> rows >> cols;

	matr = new int* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		matr[i] = new int[cols];
		memset(matr[i], 0, sizeof(int) * cols);
	}

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cin >> matr[i][j];
		}
	}

	for (size_t i = 0; i < cols; i++)
	{
		for (int j = rows - 1; j >= 0; j--)
		{
			std::cout << matr[j][i] << ' ';
		}
		std::cout << std::endl;
	}

	for (size_t i = 0; i < rows; i++)
	{
		delete[] matr[i];
	}
	delete[] matr;
}

void matrSnake()
{
	int** matr = nullptr;
	unsigned rows, cols, num = 1;

	std::cin >> rows >> cols;
	matr = new int* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		matr[i] = new int[cols];
		memset(matr[i], 0, sizeof(int) * cols);
	}

	for (size_t i = 0; i < rows; i++)
	{
		if (i % 2 == 0)
		{
			for (size_t j = 0; j < cols; j++)
			{
				matr[i][j] = num++;
			}
		}
		else
		{
			for (int j = cols - 1; j >= 0; j--)
			{
				matr[i][j] = num++;
			}
		}
	}

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cout << std::setw(4) << matr[i][j];
		}
		std::cout << std::endl;
	}

	for (size_t i = 0; i < rows; i++) {
		delete[] matr[i];
	}
	delete[] matr;
}

void matrDiagonal()
{
	int** matr = nullptr;
	unsigned rows, cols, num = 1;

	std::cin >> rows >> cols;

	matr = new int* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		matr[i] = new int[cols];
		memset(matr[i], 0, sizeof(int) * cols);
	}

	int i = 0, j = 0;

	while (num <= rows * cols)
	{
		matr[i][j] = num++;
		if ((i + j) % 2 == 0)
		{
			if (j == cols - 1)
			{
				i++;
			}
			else if (i == 0)
			{
				j++;
			}
			else
			{
				i--;
				j++;
			}
		}
		else
		{
			if (i == rows - 1)
			{
				j++;
			}
			else if (j == 0)
			{
				i++;
			}
			else
			{
				i++;
				j--;
			}
		}
	}

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cout << std::setw(4) << matr[i][j];
		}
		std::cout << std::endl;
	}

	for (size_t i = 0; i < rows; i++)
	{
		delete[] matr[i];
	}
	delete[] matr;
}

void testVec()
{
	std::vector <int> vec;
	int size, num(0);


	std::cin >> size;

	for (size_t i = 0; i < size; i++)
	{
		std::cin >> num;
		vec.push_back(num);
	}

	std::sort(vec.begin(), vec.end());

	for (auto& elem : vec)
	{
		std::cout << elem << ' ';
	}
}

void sizeShoesVec()
{
	int sizeHum(0), quan(0), count(0), num(0);

	std::cin >> sizeHum >> quan;

	std::vector <int> vec;
	for (size_t i = 0; i < quan; i++)
	{
		std::cin >> num;
		if (num >= sizeHum)
		{
			vec.push_back(num);
		}
	}

	std::sort(vec.begin(), vec.end());

	for (auto elem : vec)
	{
		if (elem % sizeHum >= 3 || elem / sizeHum >= 3 || count == 0 && elem / sizeHum >= 1 || elem == sizeHum)
		{
			count++;
			sizeHum = elem;
		}
	}

	std::cout << count;
}

int qwer(int x)
{
	return x << 1;
}

void qwerty23()
{
	int x = 5;

	x = qwer(x);

	std::cout << x;
}

void ttest()
{
	int num, numTwo = 0, numOne = 0, sobSeg(0), sobDima(0);

	std::cin >> num;

	while (num)
	{
		if (num >= 0)
		{
			num -= 2;
			sobSeg += 1;
		}
		else
			break;

		if (num >= 0)
		{
			num -= 2;
			sobSeg += 1;
		}
		else
			break;

		if (num >= 0)
		{
			num -= 3;
			sobDima += 2;
		}
		else
			break;
	}

	std::cout << num << '\n' << sobSeg << '\n' << sobDima;
}

void srav()
{
	int num;

	cin >> num;

	if (num > 7 && num < 14)
	{
		cout << "GOOD";
	}
	else
	{
		cout << "NO";
	}
}

void testVector()
{
	std::vector<std::string> vec = { "Red", "Black", "White" };

	std::string& refg = vec[2];
	std::string* ref = &vec[2];

	//vec.clear();

	*ref += "123";

	std::cout << refg << std::endl;
	std::cout << *ref << std::endl;
	std::cout << vec[2];

}

void strPolintrom()
{
	std::string str, revStr;

	std::getline(std::cin, str);

	size_t i = 0;
	while (i < str.size())
	{
		if (str[i] == ' ')
		{
			str.erase(i, 1);
		}
		else
		{
			++i;
		}
	}

	for (size_t i = str.size() - 1; i != SIZE_MAX; --i)
	{
		revStr += str[i];
	}

	if (revStr == str)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
}

void uniqueElements()
{
	std::vector <int> i_vec;
	unsigned size;
	std::cin >> size;
	i_vec.reserve(size);

	int num(0);

	for (size_t i = 0; i < size; i++)
	{
		std::cin >> num;
		i_vec.push_back(num);
	}

	std::sort(i_vec.begin(), i_vec.end());

	for (size_t i = 0; i + 1 < i_vec.size(); ++i)
	{
		if (i_vec[i] == i_vec[i + 1])
		{
			i_vec.pop_back();
			++i;
			i_vec.pop_back();
		}
	}

	std::cout << i_vec.size();
}

void step1_8()
{
	bool space = true;

	char c = '\0';
	while (cin.get(c))
	{
		if (c == ' ' && space)
		{
			cout << c;
			space = false;
		}
		else if (c != ' ')
		{
			cout << c;
			space = true;
		}
	}
}

unsigned int calculateLog2(unsigned int num)
{
	unsigned int log = 0;
	while (num > 1)
	{
		num /= 2;
		log++;
	}
	return log;
}

void computeLogsStep1_9()
{
	unsigned int T;
	std::cin >> T;

	std::vector<unsigned int> tests(T);
	for (unsigned int i = 0; i < T; ++i)
	{
		std::cin >> tests[i];
	}

	for (const auto& num : tests)
	{
		unsigned int p = calculateLog2(num);
		std::cout << p << '\n';
	}
}

int maxSequence(const std::vector<int>& arr)
{
	unsigned num(0);
	for (const auto& elem : arr)
	{
		if (elem <= 0)
		{
			num++;
		}
	}

	if (num == arr.size() || arr.size() == 0)
	{
		return 0;
	}

	int sum(0);
	int max(0);

	for (const auto& elem : arr)
	{
		if (elem > 0 && sum == 0)
		{
			sum += elem;
		}
		else if (sum + elem > 0 && sum != 0)
		{
			sum += elem;
			if ((int)sum > max)
			{
				max = sum;
			}
		}
		else
		{
			sum = 0;
		}
	}

	return max;
}
// Лучший вариант который был (не мой)
/*
int maxSequence(const vector<int>& arr)
{
	int localmax=0;
	int globalmax=0;
	for (int i = 0; i < arr.size(); i++)
	{
		localmax = localmax + arr[i];
		if (localmax > globalmax)
		{
			globalmax = localmax;
		}
		if (localmax < 0)
		{
			localmax = 0;
		}
	}
	return globalmax;
}
*/

void maxSequenceTest()
{
	std::vector<int> vec;

	int num(0);
	for (size_t i = 0; i < 9; i++)
	{
		std::cin >> num;
		vec.push_back(num);
	}

	std::cout << "res: " << maxSequence(vec);
}


//TO DO проверить, как оно работает в главном массиве
std::vector<int> tribonacci(std::vector<int> signature, int n)
{
	std::vector<int> result;
	if (n <= 0)
	{
		return result;
	}

	if (n < 3)
	{
		for (auto i = 0; i < n; i++)
		{
			result.push_back(signature[i]);
		}
		return result;
	}

	int* arr = nullptr;
	arr = new int[n];
	for (size_t i = 0; i < 3; i++)
	{
		arr[i] = signature[i];
		result.push_back(arr[i]);
	}

	for (auto i = 0; i < n - 3; i++)
	{
		arr[i + 3] = arr[i] + arr[i + 1] + arr[i + 2];
		result.push_back(arr[i + 3]);
	}

	delete[] arr;
	return result;
}

/* Комментарий к себе выше, работает...
std::vector<int> tribonacci(std::vector<int> signature, int n)
{
	if(n < 3)
	{
	   signature.resize(n);
	}

	for(int i = 3; i < n; i++)
	{
	  signature.push_back(signature[i-3]+signature[i-2]+signature[i-1]);
	}

	return signature;
}
*/

std::vector<int> twoSum(std::vector<int>& nums, int target)
{
	std::vector<int> res;

	for (size_t i = 0; i < nums.size(); ++i)
	{
		for (size_t j = nums.size() - 1; j != 0; --j)
		{
			if (nums[i] + nums[j] == target)
			{
				res.push_back(i);
				res.push_back(j);
				return res;
			}
		}
	}

	return res;
}

void testTask_1()
{
	std::vector<int> vec = { 2,7,11,15 };
	std::vector<int> res = twoSum(vec, 9);

	for (const auto& elem : res)
	{
		std::cout << elem;
	}
}

bool isPalindrome(int x)
{
	long long int buf(0), revNum(0), n(1);
	short digit(0);

	if (x <= -1)
	{
		return false;
	}

	buf = x;
	while (buf)
	{
		buf /= 10;
		if (!buf)
		{
			break;
		}
		n *= 10;
	}

	buf = x;
	while (buf)
	{
		digit = buf % 10;
		revNum += digit * n;

		buf /= 10;
		n /= 10;
	}

	if (x == revNum)
	{
		return true;
	}
	else
	{
		return false;
	}
}

std::string longestCommonPrefix(const std::vector<std::string>& strs)
{
	if (strs.empty() || strs[0] == "")
	{
		return "";
	}
	else if (strs.size() == 1)
	{
		return strs[0];
	}

	std::string res("");
	unsigned i(0), buf(0), count(0), prev(0);
	char ch = strs[i][i];

	while (ch != '\0')
	{
		for (const auto& elem : strs)
		{
			if (ch == elem[i])
			{
				++buf;
			}
		}

		if (buf >= strs.size())
		{
			res.push_back(ch);
			buf -= strs.size();
			++count;
		}

		if (prev == count)
		{
			return res;
		}

		++i;
		ch = strs[0][i];
		prev = count;
	}

	return res;
}

bool isValid(std::string s)
{
	if (s.empty())
		return false;

	std::vector<int> vLetter;
	vLetter.resize(3, 0);

	for (size_t i = 0; i < s.size(); ++i)
	{
		if (s[i] == '(')
		{
			vLetter[0]++;
		}
		else if (s[i] == '[')
		{
			vLetter[1]++;
		}
		else if (s[i] == '{')
		{
			vLetter[2]++;
		}
		else if (s[i] == ')')
		{
			vLetter[0]--;
		}
		else if (s[i] == ']')
		{
			vLetter[1]--;
		}
		else if (s[i] == '}')
		{
			vLetter[2]--;
		}
	}

	for (const auto& elem : vLetter)
	{
		if (elem > 0)
			return false;
	}

	return true;
}

bool isValidMod(const std::string& s)
{
	std::vector<char> vec;

	for (const char& elem : s)
	{
		if (elem == '(')
		{
			vec.push_back(')');
			continue;
		}
		else if (elem == '[')
		{
			vec.push_back(']');
			continue;
		}
		else if (elem == '{')
		{
			vec.push_back('}');
			continue;
		}

		if (vec.empty())
		{
			return false;
		}

		if (vec.back() != elem)
		{
			return false;
		}

		vec.pop_back();
	}

	return vec.empty();
}

int maxProfit(const std::vector<int>& prices)
{
	int min = INT_MAX, max = INT_MIN;

	size_t res(0);
	for (size_t i = 0; i < prices.size(); ++i)
	{
		if (prices[i] < min)
		{
			min = prices[i];
			max = 0;
		}
		else if (prices[i] > max)
		{
			max = prices[i];
		}

		if ((max - min) > 0 && (max - min) > res)
		{
			res = max - min;
		}
	}

	return res;
}

double myPow(double x, int n)
{
	double buf = x;
	if (n > 0)
	{
		for (int i = 0; i < n - 1; ++i)
		{
			x = x * buf;
		}
	}
	else
	{
		for (int i = 0; i < n - 1; ++i)
		{
			x = x / 2;
		}
	}

	return x;
}

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n)
{
	size_t counter_1(0);
	size_t counter_2(0);
	size_t countVec_1 = m - n;

	std::vector<int> bufVec;
	for (size_t i = 0; i < countVec_1; ++i)
	{
		bufVec.push_back(nums1[i]);
	}
	nums1.clear();

	while (counter_1 < bufVec.size() && counter_2 < n)
	{
		if (bufVec[counter_1] < nums2[counter_2])
		{
			nums1.push_back(bufVec[counter_1++]);
		}
		else
		{
			nums1.push_back(nums2[counter_2++]);
		}
	}

	for (size_t i = counter_1; i < bufVec.size(); ++i)
	{
		nums1.push_back(bufVec[counter_1++]);
	}

	for (size_t i = counter_2; i < nums2.size(); ++i)
	{
		nums1.push_back(nums2[counter_2++]);
	}
}

void mergeTest()
{
	std::vector<int> vec1 = { 1,2,3,0,0,0 };
	std::vector<int> vec2 = { 2,5,6 };

	merge(vec1, 6, vec2, 3);

	for (const auto& elem : vec1)
	{
		std::cout << elem << ' ';
	}
}

int removeDuplicates(std::vector<int>& nums)
{
	//auto it = nums.begin();
	for (auto it = nums.begin(); it != nums.end(); )
	{
		if (std::next(it) != nums.end() && *it == *(std::next(it)))
		{
			it = nums.erase(it);
		}
		else
		{
			++it;
		}
	}

	//nums.erase(std::unique(nums.begin(), nums.end(), nums.end()));
	return nums.size();
}

int removeElement(std::vector<int>& nums, int val)
{
	auto it = nums.begin();
	for (; it != nums.end();)
	{
		if (*it == val)
		{
			it = nums.erase(it);
		}
		else
		{
			++it;
		}
	}

	int res = nums.size();
	return res;
}

void removeElementTest()
{
	std::vector<int> vec = { 3,2,2,3 };

	removeElement(vec, 3);

	for (const auto& elem : vec)
	{
		std::cout << elem << ' ';
	}
}

void rotate(std::vector<std::vector<int>>& matrix)
{
	int size = matrix.size();
	for (int i = 0; i < size / 2; i++)
	{
		for (int j = i; j < size - i - 1; j++)
		{
			int tmp = matrix[i][j];

			matrix[i][j] = matrix[size - 1 - j][i];
			matrix[size - 1 - j][i] = matrix[size - 1 - i][size - 1 - j];
			matrix[size - 1 - i][size - 1 - j] = matrix[j][size - 1 - i];
			matrix[j][size - 1 - i] = tmp;
		}
	}
}

std::string largestOddNumber(std::string num)
{
	int value = std::stoi(num);
	if (value % 2 == 1)
	{
		return num;
	}

	for (int i = num.size() - 1; i >= 0; --i)
	{
		if (num[i] % 2 == 0)
		{
			num.erase(i, 1);
		}
		else
		{
			break;
		}
	}

	return num;
}

std::string largestGoodInteger(std::string num)
{
	unsigned short count(0);
	std::string res = "", buf;

	for (size_t i = 0; i < num.size() - 2; ++i)
	{
		if (num[i] == num[i + 1] && num[i + 1] == num[i + 2])
		{
			for (int j = 0; j < 3; ++j)
			{
				buf += num[i + j];
			}

			if (res < buf)
			{
				res = buf;
			}

			buf.clear();
			i += 2;
		}
	}

	return res;
}

/* версия V2. Улучшенная
std::string largestGoodInteger(std::string num)
}
	if (num.size() < 3) {
		return "";
	}

	const int consecutiveCount = 3;
	std::string largestSubstring = "";

	for (size_t i = 0; i <= num.size() - consecutiveCount; ++i)
	{
		if (num[i] == num[i + 1] && num[i + 1] == num[i + 2])
		{
			std::string currentSubstring = num.substr(i, consecutiveCount);

			if (currentSubstring > largestSubstring)
			{
				largestSubstring = currentSubstring;
			}

			i += consecutiveCount - 1; // Пропустить следующие символы
		}
	}

	return largestSubstring;
}
*/

int strStr(std::string haystack, std::string needle)
{
	int count(0), ind(-1);
	for (size_t i = 0; i < haystack.size(); ++i)
	{
		if (haystack[i] == needle[0])
		{
			ind = i;
			for (size_t j = i; j < needle.size() + i; ++j)
			{
				if (haystack[j] == needle[count])
				{
					count++;
				}
				else
				{
					break;
				}

				if (count == needle.size())
				{
					return ind;
				}
			}
			count = 0;
		}
	}

	return -1;
}

bool canJump(std::vector<int>& nums)
{
	if (nums.size() == 1)
	{
		return true;
	}

	int count(0);
	for (size_t i = 0; i < nums.size();)
	{
		i += nums[i];


		if (i >= nums.size() - 1)
		{
			return true;
		}

		count++;
		if (count == nums.size())
		{
			break;
		}
	}


	return false;
}

int searchInsert(std::vector<int>& nums, int target)
{
	int count(0);
	for (const int& elem : nums)
	{
		if (elem == target || elem > target)
		{
			return count;
		}
		count++;
	}

	return nums.size();
}

std::vector<int> plusOne(std::vector<int>& digits)
{
	std::vector<int> resultVec;
	digits.back() += 1;

	for (size_t i = digits.size() - 1; i < -1; --i)
	{
		if (digits[i] > 9)
		{
			digits[i] = 0;

			if (i - 1 == -1)
			{
				resultVec.insert(resultVec.begin(), 0);
				resultVec.insert(resultVec.begin(), 1);
				
				return resultVec;
			}
			digits[i - 1] += 1;
			resultVec.insert(resultVec.begin(), digits[i]);
		}
		else
		{
			resultVec.insert(resultVec.begin(), digits[i]);
		}

	}

	return resultVec;
}

int lengthOfLastWord(std::string s)
{
	unsigned short count(0);
	for (size_t i = s.size() - 1; i > 0; --i)
	{
		if (s[i] != ' ')
		{
			count++;
		}

		if (s[i] == ' ' && count > 0)
		{
			return count;
		}
	}

	return count;
}

bool wordPattern(std::string pattern, std::string s)
{
	if (s.empty() || pattern.empty())
	{
		return false;
	}

	std::stringstream sstream(s);
	std::unordered_map<char, std::string> wordMap;
	std::unordered_map<std::string, char> reverseWordMap;

	std::string buf = "";
	size_t count = 0;

	while (sstream >> buf)
	{
		if (count >= pattern.size())
		{
			return false;
		}

		char currentPatternChar = pattern[count];

		if (wordMap.find(currentPatternChar) == wordMap.end())
		{
			if (reverseWordMap.find(buf) != reverseWordMap.end())
			{
				return false;
			}

			wordMap[currentPatternChar] = buf;
			reverseWordMap[buf] = currentPatternChar;
		}
		else
		{
			if (wordMap[currentPatternChar] != buf)
			{
				return false;
			}
		}
		count++;
	}

	return count == pattern.size();
}

int lengthOfLongestSubstring(std::string s)
{
	std::map<char, int> substring;
	int result = 0, start = 0;

	for (int i = 0; i < s.size(); ++i)
	{
		if (substring.count(s[i]) > 0 && substring[s[i]] >= start)
		{
			start = substring[s[i]] + 1;
		}

		substring[s[i]] = i;
		result = std::max(result, i - start + 1);
	}

	return result;
}

int furthestDistanceFromOrigin(std::string moves)
{
	size_t freeSpace(0);
	int count(0);

	for (const auto& elem : moves)
	{
		if (elem == 'L')
		{
			--count;
		}
		else if (elem == 'R')
		{
			++count;
		}
		else
		{
			++freeSpace;
		}
	}

	count = std::abs(count);

	return count + freeSpace;
}

std::string firstPalindrome(std::vector<std::string>& words)
{
	std::string reverseWord;
	unsigned short count(0);

	for (const auto& elem : words)
	{
		reverseWord = elem;
		count = elem.length();
		for (size_t i = 0, j = reverseWord.length() - 1; i < elem.length(); ++i, --j)
		{
			if (elem[i] == reverseWord[j])
			{
				--count;
			}
			else
			{
				break;
			}
		}

		if (count == 0)
		{
			return elem;
		}
	}

	return "";
}

bool isPalindrome(std::string s)
{
	std::string cleanedStr;
	for (char c : s)
	{
		if (std::isalnum(c))
		{
			cleanedStr += std::tolower(c);
		}
	}

	int left = 0;
	int right = cleanedStr.length() - 1;
	while (left < right)
	{
		if (cleanedStr[left] != cleanedStr[right])
		{
			return false;
		}
		left++;
		right--;
	}

	return true;
}

int characterReplacement(std::string s, int k)
{
	int res(0), max(0);

	for (size_t i = 0; i < s.length(); ++i)
	{
		char letterForSwap = s[i];
		int count = k;
		for (size_t j = i; j < s.length(); ++j)
		{
			if (s[j] == s[i] && count == 0)
			{
				max++;
			}
			else if (count > 0 && s[j] != s[i])
			{
				count--;
				max++;
			}
			else if(count == 0 && s[i] != s[j])
			{
				break;
			}
			else
			{
				max++;
			}
		}

		if (max > res)
		{
			res = max;
		}
		max = 0;
	}

	return res;
}

bool isHappy(int n)
{
	std::vector<int> vecNumber;
	int buf = n, number(0), res = 0, count(0);

	while (res != 1)
	{
		while (buf)
		{
			number = buf % 10;

			vecNumber.push_back(number);
			buf /= 10;
		}

		for (const auto& elem : vecNumber)
		{
			buf += elem * elem;
		}

		vecNumber.clear();

		if (count >= 40)
		{
			return false;
		}
		else
		{
			res = buf;
			count++;
		}
	}

	return true;
}

int distributeCandies(std::vector<int>& candyType)
{
	std::unordered_map<int, int> mapType;

	for (const auto& elem : candyType)
	{
		if (mapType.find(elem) == mapType.end())
		{
			mapType[elem]++;
		}
	}

	if (candyType.size() / 2 > mapType.size())
	{
		return mapType.size();
	}
	else
	{
		return candyType.size() / 2;
	}
}

double findMedianSortedArrays(const std::vector<int>& nums1, const std::vector<int>& nums2)
{
	std::vector<int> v_common;
	size_t numsSize1 = nums1.size();
	size_t numsSize2 = nums2.size();
	size_t counter1(0), counter2(0);
	double result(0.0);

	while (counter1 != numsSize1 && counter2 != numsSize2)
	{
		if (nums1[counter1] < nums2[counter2])
		{
			v_common.push_back(nums1[counter1++]);
		}
		else
		{
			v_common.push_back(nums2[counter2++]);
		}
	}

	for (size_t i = counter1; i < numsSize1; ++i)
	{
		v_common.push_back(nums1[i]);
	}

	for (size_t i = counter2; i < numsSize2; ++i)
	{
		v_common.push_back(nums2[i]);
	}

	if (v_common.size() % 2 != 0)
	{
		int buf = v_common.size() / 2;
		result = v_common.at(buf);
		return result;
	}
	else
	{
		int buf = v_common.size() / 2;
		result = ((double)v_common.at(buf) + (double)v_common.at(buf - 1)) / 2.0;
		return result;
	}
}

int singleNumber(const std::vector<int>& nums)
{
	std::unordered_map<int, short> m_countNumber;

	for (const auto& elem : nums)
	{
		m_countNumber[elem]++;
	}

	for (const auto& [f, s] : m_countNumber)
	{
		if (s == 1)
		{
			return f;
		}
	}

	return -1;
}

bool wordBreak(std::string s, std::vector<std::string>& wordDict)
{
	// звучит как n^2, берём счётчик и проверяем со словом в цикле, если буквы нет, обнуляем
	// иначе переходим к некст слову в векторе

	size_t countWord(0), countLetters(0);
	size_t j(0), buf(0);

	while (countLetters <= s.length() - 1)
	{
		if (j == wordDict[countWord].size())
		{
			countWord++;
			j = 0;
		}

		if (countWord > wordDict.size() - 1)
			countWord = 0;

		if (s[countLetters] != wordDict[countWord][j])
		{
			for (const auto& elem : wordDict)
			{
				++buf;
				if (s[countLetters] == elem[0])
				{
					break;
				}
			}

			countWord = buf;
		}
		else
		{
			++countLetters;
			++j;
		}
	}

	return true;
}

std::vector<std::vector<int>> threeSum(std::vector<int>& nums)
{
	std::vector<std::vector<int>> matr;
	int size = nums.size();
	std::sort(nums.begin(), nums.end());

	for (size_t i = 0; i < size - 2; i++)
	{
		if (i > 0 && nums[i] == nums[i - 1])
			continue;

		int left = i + 1;
		int right = size - 1;

		while (left < right)
		{
			int sum = nums[i] + nums[right] + nums[left];

			if (sum == 0)
			{
				matr.push_back({ nums[i], nums[left], nums[right] });
				while (left < right && nums[left] == nums[left + 1]) left++;
				while (left < right && nums[right] == nums[right - 1]) right--;
				left++;
				right--;
			}
			else if (sum < 0)
				left++;
			else
				right--;
		}
	}

	return matr;
}