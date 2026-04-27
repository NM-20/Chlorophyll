#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837E90
   RuntimeId:        055E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          118A
   VfTable:          00000001421F9AA8
   Address (Base):   00000001431172B0
*/
#pragma pack(push, 8)
class OverlayControl : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MusicOverlayData) Overlay; /* 0x0010 */
  FB_BOOLEAN Sync; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(OverlayControl) == 32);

}
