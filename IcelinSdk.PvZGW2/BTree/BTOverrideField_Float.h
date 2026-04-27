#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTOverrideField.h>

namespace fb
{

/* TypeInfo (Array): 00000001428341B8
   RuntimeId:        01A3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DEE
   VfTable:          00000001421EB718
   Address (Base):   000000014311C290
*/
#pragma pack(push, 8)
class BTOverrideField_Float : public BTOverrideField
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Value; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BTOverrideField_Float) == 32);

}
