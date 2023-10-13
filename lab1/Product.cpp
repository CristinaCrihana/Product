#include "Product.h"

Product::Product(uint16_t id, const std::string& name, float price, uint32_t VAT, const std::string& date)
	:
	m_id(id),
	m_price(price),
	m_name(name),
	m_VAT(VAT),
	m_date(date)
{
	//m_id = id;

	
}

Product::Product(uint16_t id, const std::string& name, float price, uint32_t VAT, ProductType productType)
	:
	m_id(id),
	m_price(price),
	m_name(name),
	m_VAT(VAT),
	m_productType(productType)
{
}
