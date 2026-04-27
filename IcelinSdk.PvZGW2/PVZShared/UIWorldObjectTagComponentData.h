#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIObjectTagComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A8B0
   RuntimeId:        25AF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D5B
   VfTable:          000000014235B168
   Address (Base):   00000001430E48A0
*/
#pragma pack(push, 16)
class UIWorldObjectTagComponentData : public UIObjectTagComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MaxHealth; /* 0x0090 */
  FB_FLOAT32 Health; /* 0x0094 */
  char pad_0098[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(UIWorldObjectTagComponentData) == 160);

}
