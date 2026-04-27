#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142859718
   RuntimeId:        1B3C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09DF
   VfTable:          00000001422DC0F8
   Address (Base):   00000001430E8800
*/
#pragma pack(push, 8)
class XboxOneKinectServiceData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(XboxOneKinectServiceData) == 24);

}
