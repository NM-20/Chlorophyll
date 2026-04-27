#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871250
   RuntimeId:        2A3B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          060E
   VfTable:          000000014236CC88
   Address (Base):   00000001430CFC60
*/
#pragma pack(push, 8)
class UIStickerBookClassData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class UIStickerBookClass) Classes; /* 0x0010 */
  FB_INT32 CollectionTotal; /* 0x0018 */
  FB_INT32 CollectionUnlocked; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UIStickerBookClassData) == 32);

}
