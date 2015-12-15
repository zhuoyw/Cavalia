#pragma once
#ifndef __CAVALIA_DATABASE_META_CONSTANTS_H__
#define __CAVALIA_DATABASE_META_CONSTANTS_H__

#include <cstdint>

namespace Cavalia{
	namespace Database{
		const uint8_t kInsert = 0;
		const uint8_t kUpdate = 1;
		const uint8_t kDelete = 2;

		const size_t kAdHoc = 100;

		//const int LZ4_HEADER_SIZE = 19;
		//const int LZ4_FOOTER_SIZE = 32;
	}
}

#endif
