#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/InputActionMapData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B1A8
   RuntimeId:        0F27
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EE7
   VfTable:          0000000142261350
   Address (Base):   00000001430ED540
*/
#pragma pack(push, 8)
class EntryInputActionMapData : public InputActionMapData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(EntryInputActionMapData) == 40);

}
