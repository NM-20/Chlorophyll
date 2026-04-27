#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIItemDescription.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871F38
   RuntimeId:        2AF3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E72
   VfTable:          000000014236BF18
   Address (Base):   00000001430D8A50
*/
#pragma pack(push, 8)
class UICardPackDescription : public UIItemDescription
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Label; /* 0x0028 */
  FB_CSTRING Description; /* 0x0030 */
  FB_CSTRING ImageName; /* 0x0038 */
  FB_INT32 AudioLevel; /* 0x0040 */
  char pad_0044[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(UICardPackDescription) == 72);

}
