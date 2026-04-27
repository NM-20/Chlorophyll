#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428767B8
   RuntimeId:        2DDB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0668
   VfTable:          00000001423930A8
   Address (Base):   00000001430CF9C0
*/
#pragma pack(push, 8)
class UIElementStyle : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UIElementStyle) == 24);

}
