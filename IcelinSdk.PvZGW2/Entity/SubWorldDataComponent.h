#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C418
   RuntimeId:        09AE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          100C
   VfTable:          00000001422136E0
   Address (Base):   00000001430DC650
*/
#pragma pack(push, 8)
class SubWorldDataComponent : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(SubWorldDataComponent) == 16);

}
