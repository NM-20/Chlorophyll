#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E9E8
   RuntimeId:        1233
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DD8
   VfTable:          0000000142272D50
   Address (Base):   00000001431111F0
*/
#pragma pack(push, 8)
class UnlockableColorCollection : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ColorReference) DefaultValue; /* 0x0010 */
  FB_REFARRAY(class ColorUnlockPartData) PossibleValues; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UnlockableColorCollection) == 32);

}
