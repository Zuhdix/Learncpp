#include <iostream>
#include <string>

/* enum class (scoped) dipakai agar tidak ada konversi implisit ke int*/
enum class MonsterType
{
	Ogre,
	Dragon,
	Orc,
	GiantSpider,
	Slime,
};

/* getMonsterType memiliki parameter enum class agar fungsi ini tau bahwa tipe data berjenis MonsterType itu eksis
   dan bisa di digunakan langsung dalam bentuk switch */
std::string getMonsterType(MonsterType type)
{
	switch (type)
	{
	case MonsterType::Ogre:		return "Ogre";
	case MonsterType::Dragon:	return "Dragon";
	case MonsterType::Orc:		return "Orc";
	case MonsterType::GiantSpider: return "Giant Spider";
	case MonsterType::Slime:	return "Slime";
	default:					return "unkown monster";
	}
}

/* untuk membuat struct ini tau jenis data yang akan di olah, maka MonsterType 
   dijadikan member function yang berisi enum class diatas*/

/* penjelasan bener
	mt adalah data member (member variable) — variabel yang dimiliki struct. 
	Member function = fungsi di dalam struct/class (belum dibahas sampai chapter 14). Ini beda konsep.*/
struct Monster
{
	MonsterType mt{};
	std::string name{};
	int hp{};
};

/* berfungsi menerima const ref param (no-copy), m.mt gak bisa dipakai langsung karena berjenis MonsterType
   harus di impor melalui fungsi getMonsterType yang tau jenis tipe datanya (karena parameternya enum class)
   fungsi ini murni hanya untuk print makannya penggunaan enum class di urus lewat getMonsterType */
void printMonster(const Monster& m)
{
	std::cout << "This " << getMonsterType(m.mt)
		<< " is named " << m.name << " and has " << m.hp << " health.\n";
}

int main()
{
	/* karena .mt bertipe enum class, maka harus diberi tau harus akses ke enumerator yang mana
	   tidak bisa langsung akses karena banyaknya enumerator yang digunakan
	*/

	/* benernya
		Bukan karena "banyak" enumerator — bahkan kalau cuma satu enumerator pun tetap harus pakai prefix. 
		Alasan sebenarnya: scoped enum menyimpan enumerator di dalam scope-nya sendiri — tanpa prefix, 
		compiler tidak tahu di namespace mana harus cari Ogre.
	*/

	/* BENERNYA
		Lebih tepatnya: std::cout tidak tahu cara cetak MonsterType karena tidak ada operator<< yang diajarkan untuk tipe itu, 
		dan scoped enum tidak convert implisit ke int. getMonsterType mengubahnya ke std::string yang cout sudah bisa cetak.
	*/
	Monster ogre{.mt = MonsterType::Ogre, .name = "Torg", .hp = 145 };
	printMonster(ogre);

	Monster slime{ .mt = MonsterType::Slime, .name = "Blurp", .hp = 23 };
	printMonster(slime);

	return 0;
}