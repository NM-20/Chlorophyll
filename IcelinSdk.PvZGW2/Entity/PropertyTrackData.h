#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BDB0
   RuntimeId:        0952
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FB7
   VfTable:          0000000142212428
   Address (Base):   00000001430EF0A0
*/
#pragma pack(push, 8)
class PropertyTrackData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 Id; /* 0x0010 */
  char pad_0014[0x0004];
  FB_STDARRAY(FB_INT32) Times; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PropertyTrackData) == 32);

}
