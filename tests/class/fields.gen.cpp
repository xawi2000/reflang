// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !!! This file is auto-generated by Reflang. !!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include "fields.gen.hpp"

#include <algorithm>
#include <cassert>
#include <stdexcept>
#include <type_traits>

namespace reflang
{


const int Class<MyClass>::FieldCount;
const int Class<MyClass>::StaticFieldCount;
const int Class<MyClass>::MethodCount;
const int Class<MyClass>::StaticMethodCount;

int Class<MyClass>::GetFieldCount() const
{
	return FieldCount;
}

Reference Class<MyClass>::GetField(const Reference& r, const std::string& name) const
{
	if (r.IsT<MyClass>())
	{
		MyClass& o = r.GetT<MyClass>();
		if (name == "field")
		{
			return Reference(o.field);
		}
		if (name == "const_field")
		{
			return Reference(o.const_field);
		}
		if (name == "pointer_field")
		{
			return Reference(o.pointer_field);
		}
		if (name == "const_pointer_field")
		{
			return Reference(o.const_pointer_field);
		}
		if (name == "const_pointer_const_field")
		{
			return Reference(o.const_pointer_const_field);
		}
		if (name == "ref_field")
		{
			return Reference(o.ref_field);
		}
		if (name == "const_ref_field")
		{
			return Reference(o.const_ref_field);
		}
		if (name == "complex")
		{
			return Reference(o.complex);
		}
		if (name == "const_complex")
		{
			return Reference(o.const_complex);
		}
		if (name == "pointer_complex")
		{
			return Reference(o.pointer_complex);
		}
		if (name == "const_pointer_complex")
		{
			return Reference(o.const_pointer_complex);
		}
		if (name == "const_pointer_const_complex")
		{
			return Reference(o.const_pointer_const_complex);
		}
		if (name == "ref_complex")
		{
			return Reference(o.ref_complex);
		}
		if (name == "const_ref_complex")
		{
			return Reference(o.const_ref_complex);
		}
	}
	else if (r.IsT<const MyClass>())
	{
		const MyClass& o = r.GetT<const MyClass>();
		if (name == "field")
		{
			return Reference(o.field);
		}
		if (name == "const_field")
		{
			return Reference(o.const_field);
		}
		if (name == "pointer_field")
		{
			return Reference(o.pointer_field);
		}
		if (name == "const_pointer_field")
		{
			return Reference(o.const_pointer_field);
		}
		if (name == "const_pointer_const_field")
		{
			return Reference(o.const_pointer_const_field);
		}
		if (name == "ref_field")
		{
			return Reference(o.ref_field);
		}
		if (name == "const_ref_field")
		{
			return Reference(o.const_ref_field);
		}
		if (name == "complex")
		{
			return Reference(o.complex);
		}
		if (name == "const_complex")
		{
			return Reference(o.const_complex);
		}
		if (name == "pointer_complex")
		{
			return Reference(o.pointer_complex);
		}
		if (name == "const_pointer_complex")
		{
			return Reference(o.const_pointer_complex);
		}
		if (name == "const_pointer_const_complex")
		{
			return Reference(o.const_pointer_const_complex);
		}
		if (name == "ref_complex")
		{
			return Reference(o.ref_complex);
		}
		if (name == "const_ref_complex")
		{
			return Reference(o.const_ref_complex);
		}
	}
	else
	{
		throw Exception("Invalid Reference passed to GetField().");
	}
	throw Exception("Invalid name passed to GetField().");
}

int Class<MyClass>::GetStaticFieldCount() const
{
	return StaticFieldCount;
}

Reference Class<MyClass>::GetStaticField(const std::string& name) const
{
	throw Exception("Invalid name passed to GetStaticField().");
}

int Class<MyClass>::GetMethodCount() const
{
	return MethodCount;
}

std::vector<std::unique_ptr<IMethod>> Class<MyClass>::GetMethod(const std::string& name) const
{
	std::vector<std::unique_ptr<IMethod>> results;

	return results;
}

int Class<MyClass>::GetStaticMethodCount() const
{
	return StaticMethodCount;
}

std::vector<std::unique_ptr<IFunction>> Class<MyClass>::GetStaticMethod(
		const std::string& name) const
{
	std::vector<std::unique_ptr<IFunction>> results;

	return results;
}

static const std::string MyClass_name = "MyClass";

const std::string& Class<MyClass>::GetName() const
{
	return MyClass_name;
}



}  // namespace reflang
