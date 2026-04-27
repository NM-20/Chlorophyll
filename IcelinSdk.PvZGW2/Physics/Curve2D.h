#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428510F8
   RuntimeId:        143C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1281
   VfTable:          000000014227F6B0
   Address (Base):   000000014310F510
*/
#pragma pack(push, 8)
class Curve2D : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct Vec2) Curve; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(Curve2D) == 24);

}
