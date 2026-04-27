#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SubWorldDataComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839FF8
   RuntimeId:        073A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          100F
   VfTable:          00000001421FF3B8
   Address (Base):   00000001430FE290
*/
#pragma pack(push, 8)
class EmitterSystemComponent : public SubWorldDataComponent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 dummy; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(EmitterSystemComponent) == 24);

}
