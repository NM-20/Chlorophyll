#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B0E8
   RuntimeId:        0F1B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0663
   VfTable:          00000001422616D8
   Address (Base):   0000000143113770
*/
#pragma pack(push, 8)
class UIWorldIconBehavior : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UIWorldIconBehavior) == 24);

}
