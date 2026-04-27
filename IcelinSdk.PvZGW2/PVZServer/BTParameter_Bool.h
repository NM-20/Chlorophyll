#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTParameter.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FE48
   RuntimeId:        1E27
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DF3
   VfTable:          000000014231D478
   Address (Base):   000000014310A350
*/
#pragma pack(push, 8)
class BTParameter_Bool : public BTParameter
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

static_assert(sizeof(BTParameter_Bool) == 32);

}
