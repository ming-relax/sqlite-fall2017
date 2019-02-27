/**
 * config.h
 *
 * Database system configuration
 */

#include <cstdint>

namespace cmudb {

#define INVALID_PAGE_ID -1 // representing an invalid page id
#define HEADER_PAGE_ID 0   // the header page id
#define PAGE_SIZE 96       // size of a data page in byte
#define BUCKET_SIZE 50     // size of extendible hash bucket

typedef int32_t page_id_t; // page id type

} // namespace cmudb