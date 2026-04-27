#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/ConfigListAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876308
   RuntimeId:        2DA0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0629
   VfTable:          0000000142393490
   Address (Base):   00000001430F4C30
*/
#pragma pack(push, 8)
class Vec3ListAsset : public ConfigListAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct Vec3Data) Vec3Types; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(Vec3ListAsset) == 32);

}
