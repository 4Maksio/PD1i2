#include <map>
#include <iostream>

class Key
{
public:
	long id;
};

bool operator < (const Key& a,const Key& b) {
	return a.id < b.id;
}

bool operator > (const Key& a,const Key& b) {
	return a.id > b.id;
}



struct KeyCompare
{
	bool operator()(const Key& left, const Key& right) const
	{
		return (right.id>left.id);
	}
};
/*
struct KeyCompare
{
	bool operator()(const Key& left, const Key& right) const
	{
		return (right.id > left.id);
	}
};
*/


int main()
{
	Key a;
	a.id = 1;
	Key b;
	b.id = 2;
	Key c;
	c.id = 3;
	std::map<Key, int, KeyCompare> map;
	map.emplace(a,0);
	map.emplace(b,1);
	map.emplace(c,2);
	std::map<Key, int, std::less<Key>> Map;
	Map.emplace(a,0);
	Map.emplace(b,1);
	Map.emplace(c,2);
	for (auto val : Map)
	{
		std::cout << val.second << std::endl;
	}

}
