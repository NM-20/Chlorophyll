#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTFunc.h>

namespace fb
{

/* TypeInfo (Array): 00000001428341F8
   RuntimeId:        01A7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FAA
   VfTable:          00000001421EB6E8
   Address (Base):   00000001430F33C0
*/
#pragma pack(push, 8)
class BTEvalFunc : public BTFunc
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN Inverted; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BTEvalFunc) == 32);

}
