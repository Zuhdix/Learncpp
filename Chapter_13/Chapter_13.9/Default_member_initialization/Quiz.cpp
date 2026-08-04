struct Widget
{
    int id;
    int count{};
    double ratio{ 1.5 };
    bool active{ true };
};

Widget s1;  // s1.id is uninitialized, s1.count is value-initialized to 0, s1.ratio is explicitly initialized to 1.5, s1.active is explicitly initialized to true
Widget s2{};  // s2.id is value-initialized, s2.count is value-initialized to 0, s2.ratio is explicitly initialized to 1.5, s2.active is explicitly initialized to true
Widget s3{ 10, 3 };  // s3.id explicit 10, s3.count is explicit 3, s3.ratio is explicitly initialized to 1.5, s3.active is explicitly initialized to true