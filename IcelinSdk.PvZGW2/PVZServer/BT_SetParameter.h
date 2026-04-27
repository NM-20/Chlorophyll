#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTTaskFunc.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FCE8
   RuntimeId:        1E11
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F9E
   VfTable:          000000014231D570
   Address (Base):   00000001430F8E30
*/
#pragma pack(push, 8)
class BT_SetParameter : public BTTaskFunc
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BTParameter) Parameter; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BT_SetParameter) == 32);

}
