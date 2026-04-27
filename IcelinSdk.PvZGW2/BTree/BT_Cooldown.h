#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTEvalFunc.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834438
   RuntimeId:        01CB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FAB
   VfTable:          00000001421EB538
   Address (Base):   0000000143100ED0
*/
#pragma pack(push, 8)
class BT_Cooldown : public BTEvalFunc
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 CooldownTime; /* 0x0020 */
  FB_BOOLEAN PopOnStart; /* 0x0024 */
  FB_BOOLEAN RunOnce; /* 0x0025 */
  char pad_0026[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(BT_Cooldown) == 40);

}
