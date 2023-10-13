#pragma once
#include<string>
#include "ProductType.h"
class Product
{
public:
	Product(uint16_t id, const std::string& name, float price, uint32_t VAT, const std::string& date);
	Product(uint16_t id, const std::string& name, float price, uint32_t VAT, ProductType productType);
private:
	uint16_t m_id;
	std::string m_name;
	float m_price;
	uint32_t m_VAT;
	std::string m_date;
	ProductType m_productType;

};

