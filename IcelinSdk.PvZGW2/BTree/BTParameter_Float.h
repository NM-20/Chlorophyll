#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTParameter.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834178
   RuntimeId:        019F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DF2
   VfTable:          00000001421EB738
   Address (Base):   000000014311C2F0
*/
#pragma pack(push, 8)
class BTParameter_Float : public BTParameter
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

static_assert(sizeof(BTParameter_Float) == 32);

}
