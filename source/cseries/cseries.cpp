#include <cseries/cseries.h>

/* ---------- code */

char *tag_to_string(
	tag m_value,
	char *string)
{
	assert(string);

	for (int i = 0; i < sizeof(tag); i++)
		string[3 - i] = static_cast<char>(m_value >> (i * 8));

	string[sizeof(tag)] = '\0';
	return string;
}

tag string_to_tag(
	char const *string)
{
	assert(string);
	assert(csstrnlen(string, sizeof(tag)) == sizeof(tag));

	tag result = 0;

	for (int i = 0; i < sizeof(tag); i++)
		result |= static_cast<tag>(string[3 - i]) << (i * 8);

	return result;
}