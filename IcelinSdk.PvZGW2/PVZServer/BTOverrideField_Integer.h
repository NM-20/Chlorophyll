#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTOverrideField.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FEA8
   RuntimeId:        1E2D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DEF
   VfTable:          000000014231D380
   Address (Base):   000000014310A230
*/
#pragma pack(push, 8)
class BTOverrideField_Integer : public BTOverrideField
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

static_assert(sizeof(BTOverrideField_Integer) == 32);

}
