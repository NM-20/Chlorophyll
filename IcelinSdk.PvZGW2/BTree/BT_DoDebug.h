#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTTaskFunc.h>
#include <IcelinSdk.PvZGW2/BTree/EBTDebug_Type.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834418
   RuntimeId:        01C9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F9A
   VfTable:          00000001421EB550
   Address (Base):   000000014311BF30
*/
#pragma pack(push, 8)
class BT_DoDebug : public BTTaskFunc
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING DebugString; /* 0x0018 */
  EBTDebug_Type DebugOutputType; /* 0x0020 */
  FB_BOOLEAN DebugReturnTrue; /* 0x0024 */
  char pad_0025[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(BT_DoDebug) == 40);

}
