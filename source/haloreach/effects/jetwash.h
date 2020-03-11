#pragma once

#include <cseries/cseries.h>
#include <math/real_math.h>
#include <tag_files/tag_groups.h>

/* ---------- constants */

enum
{
	k_maximum_number_of_jetwash_definitions = 4
};

/* ---------- types */

struct s_jetwash_definition
{
	string_id marker;
	real radius;
	long maximum_traces;
	real maximum_emission_length;
	s_real_bounds trace_yaw_angle;
	s_real_bounds trace_pitch_angle;
	real particle_offset;
};
static_assert(sizeof(s_jetwash_definition) == 0x24);

/* ---------- globals */

extern s_tag_block_definition g_jetwash_definition_block;
