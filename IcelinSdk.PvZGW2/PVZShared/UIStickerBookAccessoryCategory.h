#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428711F0
   RuntimeId:        2A35
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0887
   VfTable:          000000014236CD18
   Address (Base):   00000001430E25C0
*/
#pragma pack(push, 8)
class UIStickerBookAccessoryCategory : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Label; /* 0x0010 */
  FB_CSTRING Desc; /* 0x0018 */
  FB_STDARRAY(struct UIStickerBookUnlock) Accessories; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UIStickerBookAccessoryCategory) == 40);

}
