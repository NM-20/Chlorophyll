#pragma once

/** @brief Provides the declaration for the `PaddedPtrBase<int>` structure. */

namespace fb
{

/* This needs to be specialized for different object sizes, i.e 8 for `void *`
   on x86_64.
*/
template<int>
struct PaddedPtrBase;

/* Since GW2 doesn't provide a 32-bit executable, we can simply specialize the
   8-byte `PaddedPtrBase`.
*/
template<>
struct PaddedPtrBase<8>
{};

}
