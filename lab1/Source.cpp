#include<fstream>
#include<vector>
#include<regex>
#include"Product.h"
bool IsDate(const std::string& date)
{
	return std::regex_match(date, std::regex(R"(\d\d\d\d-\d\d-\d\d)"));
}
int main()
{
	uint16_t id;
	std::string name;
	float price;
	uint32_t VAT;
	std::string dateOrProductType;
	std::vector<Product> products;

	std::ifstream fin("date.in");
	//for(std::ifstream fin("date.in");!fin.eof();/*empty*/)
	while (!fin.eof())
	{
		fin >> id >> name >> price >> VAT >> dateOrProductType;
		if (IsDate(dateOrProductType))
		{
			Product product = Product(id, name, price, VAT, dateOrProductType);
			products.push_back(product);
		}

	}
	return 0;
}


//container din std variant!!!


