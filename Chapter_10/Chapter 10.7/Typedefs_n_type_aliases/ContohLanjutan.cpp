// dari pada bool nya panjang mending buat alias.

#include <string> // for std::string
#include <vector> // for std::vector
#include <utility> // for std::pair

using VectPairSI = std::vector<std::pair<std::string, int>>; // make VectPairSI an alias for this crazy type

bool hasDuplicates(VectPairSI pairlist) // use VectPairSI in a function parameter
{
    // some code here
    return false;
}

int main()
{
    VectPairSI pairlist; // instantiate a VectPairSI variable

    return 0;
}

// alias juga bisa mendokumentasikan sebuah nilai
int gradeTest(); // int di sini ambigu, Id siswa kah? nilai ujian?

using TestScore = int;
TestScore gradeTest(); // lebih baik (tapi jika dipake satu fungsi doang mending pake comment)


using PrintError = int;
PrintError printData();