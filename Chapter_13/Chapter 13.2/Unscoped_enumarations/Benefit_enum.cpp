// kurang deskriptif
int readFileContents()
{
    if (!openFile())
        return -1;
    if (!readFile())
        return -2;
    if (!parseFile())
        return -3;

    return 0; // success
}

// neuron activated
enum FileReadResult
{
    readResultSuccess,
    readResultErrorFileOpen,
    readResultErrorFileRead,
    readResultErrorFileParse,
};

FileReadResult readFileContents()
{
    if (!openFile())
        return readResultErrorFileOpen;
    if (!readFile())
        return readResultErrorFileRead;
    if (!parseFile())
        return readResultErrorFileParse;

    return readResultSuccess;
}

// bisa di uji juga
if (readFileContents() == readResultSuccess)
{
    // do something
}
else
{
    // print error message
}


// misal dalam game
enum ItemType
{
    sword,
    torch,
    potion,
};

int main()
{
    ItemType holding{ torch };

    return 0;
}

// ini keren anjing
enum SortOrder
{
    alphabetical,
    alphabeticalReverse,
    numerical,
};

void sortData(SortOrder order)
{
    switch (order)
    {
    case alphabetical:
        // sort data in forwards alphabetical order
        break;
    case alphabeticalReverse:
        // sort data in backwards alphabetical order
        break;
    case numerical:
        // sort data numerically
        break;
    }
}