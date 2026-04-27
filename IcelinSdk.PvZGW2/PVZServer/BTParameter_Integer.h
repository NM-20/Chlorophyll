#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTParameter.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FE88
   RuntimeId:        1E2B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DF1
   VfTable:          000000014231D458
   Address (Base):   000000014310A290
*/
#pragma pack(push, 8)
class BTParameter_Integer : public BTParameter
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 Value; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BTParameter_Integer) == 32);

}
