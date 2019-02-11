#pragma once
/*made by ++++ https://github.com/jev0n ++++ */
#include <string>

std::string StringsToUTF8(const std::wstring& StoU); // convert string to a utf8
std::wstring FromUTF8toString(const std::string& UtoS); // convert utf8 to string

template<typename SSS, typename SST>
inline std::basic_string<SSS> ConvertString(const std::basic_string<SST>& StoU) {
	static_assert(false, "Not Implemented !");
}
template<>
inline std::basic_string<char> ConvertString(const std::basic_string<char>& StoU) {
	return StoU;
}
template<>
inline std::basic_string<wchar_t> ConvertString(const std::basic_string<wchar_t>& UtoS) {
	return UtoS;
}

template<>
inline std::basic_string<char> ConvertString(const std::basic_string<wchar_t>& UtoS) {
	return StringsToUTF8(UtoS);
}
template<>
inline std::basic_string<wchar_t> ConvertString(const std::basic_string<char>& UtoS) {
	return FromUTF8toString(UtoS);
}
