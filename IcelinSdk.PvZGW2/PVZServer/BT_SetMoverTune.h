#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTTaskFunc.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FD28
   RuntimeId:        1E15
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FA1
   VfTable:          000000014231D540
   Address (Base):   00000001430F8D70
*/
#pragma pack(push, 8)
class BT_SetMoverTune : public BTTaskFunc
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class PVZMoverTuneOverride) MoverTune; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BT_SetMoverTune) == 32);

}
