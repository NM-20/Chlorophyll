#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856228
   RuntimeId:        18D4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F51
   VfTable:          00000001422C4BF0
   Address (Base):   00000001430FB290
*/
#pragma pack(push, 8)
class DebugOverlaySettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MouseX; /* 0x0010 */
  FB_FLOAT32 MouseY; /* 0x0014 */
  FB_BOOLEAN DebugInfoEnable; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(DebugOverlaySettings) == 32);

}
