#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTTaskFunc.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FDA8
   RuntimeId:        1E1D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FA3
   VfTable:          000000014231D3F8
   Address (Base):   00000001430F8BF0
*/
#pragma pack(push, 8)
class BT_SetPuppetMode : public BTTaskFunc
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN EnablePuppetMode; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BT_SetPuppetMode) == 32);

}
