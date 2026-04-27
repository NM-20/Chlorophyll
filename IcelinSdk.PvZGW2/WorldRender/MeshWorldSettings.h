#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856248
   RuntimeId:        18D6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E56
   VfTable:          00000001422C4C00
   Address (Base):   00000001430DAA90
*/
#pragma pack(push, 8)
class MeshWorldSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN Dummy; /* 0x0010 */
  char pad_0011[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MeshWorldSettings) == 24);

}
