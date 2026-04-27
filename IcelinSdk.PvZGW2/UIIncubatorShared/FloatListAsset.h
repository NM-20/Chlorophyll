#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/ConfigListAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876348
   RuntimeId:        2DA4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0627
   VfTable:          0000000142393470
   Address (Base):   00000001430F4B70
*/
#pragma pack(push, 8)
class FloatListAsset : public ConfigListAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct FloatData) FloatTypes; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(FloatListAsset) == 32);

}
