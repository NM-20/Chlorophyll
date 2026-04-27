#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A410
   RuntimeId:        2577
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0850
   VfTable:          000000014235B3D0
   Address (Base):   0000000143106C30
*/
#pragma pack(push, 8)
class UIMinimapIconTextureCategory : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(UIMinimapIconTextureCategory) == 16);

}
