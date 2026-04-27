#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/ConfigListAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876388
   RuntimeId:        2DA8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          062B
   VfTable:          00000001423932D8
   Address (Base):   00000001430F4AB0
*/
#pragma pack(push, 8)
class StringListAsset : public ConfigListAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct StringData) StringTypes; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(StringListAsset) == 32);

}
