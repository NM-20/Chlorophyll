#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/ConfigListAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876368
   RuntimeId:        2DA6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          062A
   VfTable:          0000000142393460
   Address (Base):   00000001430F4B10
*/
#pragma pack(push, 8)
class IntListAsset : public ConfigListAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct IntData) IntTypes; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(IntListAsset) == 32);

}
