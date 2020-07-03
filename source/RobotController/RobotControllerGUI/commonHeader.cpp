#include "commonHeader.h"


bool str2Bool(const QString& str)
{
	return str.toLower() == "true";
}

int str2Int(const QString& str)
{
	bool ok = false;
	int data = 0;
	data = str.toInt(&ok, 10);
	if (ok)
		return data;
	data = str.toInt(&ok, 16);
	if (ok)
		return data;
	return 0;
}

double str2Double(const QString& str)
{
	bool ok = false;
	double data = 0.0;
	data = str.toDouble(&ok);
	if (ok)
		return data;
	return 0.0;
}

rl::math::Vector str2Vector(const QString& str, const QString& spec)
{
	auto list = str.split(spec, QString::SkipEmptyParts);
	rl::math::Vector vec;
	vec.resize(list.size());
	for (auto i = 0; i < list.size(); ++i)
	{
		vec[i] = str2Double(list[i]);
	}
	return vec;
}

QString vector2Str(const rl::math::Vector& vec)
{
	std::stringstream ss;
	ss << std::setprecision(8) << std::fixed;
	for(auto i = 0;i < vec.size();++i)
	{
		ss << vec(i) << ",";
	}
	return ss.str().c_str();
}
