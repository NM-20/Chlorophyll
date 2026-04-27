#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTOverrideField.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FE68
   RuntimeId:        1E29
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DED
   VfTable:          000000014231D468
   Address (Base):   000000014310A2F0
*/
#pragma pack(push, 8)
class BTOverrideField_Bool : public BTOverrideField
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN Value; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BTOverrideField_Bool) == 32);

}
