#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/ShaderCustomizationUnlockPartCollection.h>

namespace fb
{

/* TypeInfo (Array): 000000014284EA98
   RuntimeId:        123D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F0D
   VfTable:          0000000142272CE8
   Address (Base):   00000001431110D0
*/
#pragma pack(push, 8)
class ShaderColorUnlockPartCollection : public ShaderCustomizationUnlockPartCollection
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ColorReference) DefaultColorReference; /* 0x0028 */
  FB_REFARRAY(class ColorUnlockPartData) UnlockParts; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ShaderColorUnlockPartCollection) == 56);

}
