#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871210
   RuntimeId:        2A37
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          088D
   VfTable:          000000014236CD08
   Address (Base):   00000001430CFCC0
*/
#pragma pack(push, 8)
class UIStickerBookSummonData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct UIStickerBookUnlock) Summons; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UIStickerBookSummonData) == 24);

}
