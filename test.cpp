#include "lab1.h"

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	string filename = "1.txt";
	string outputFilename = "output.txt";
    string line;

    ifstream file(filename);
    ofstream outputFile(outputFilename);

    while (getline(file, line)) {

        double a, b, c;

        // �������������� ����� � outputFile
        streambuf* coutBuffer = cout.rdbuf(); // ��������� ������� ����� cout
        cout.rdbuf(outputFile.rdbuf()); // �������������� ����� � outputFile

        std::istringstream iss(line);
        if (!(iss >> a >> b >> c)) {
            cout << "������ ��� ������." << std::endl;
            break;
        }
        if (std::isnan(a) || std::isnan(b) || std::isnan(c)) {
            std::cout << "������ ��� ������." << std::endl;
            break;
        }

        // �������� ���� ������� Roots
        Print(a, b, c);
        Roots(a, b, c);
        cout << endl;
    }

    file.close();
    outputFile.close();
	return 0;
}
