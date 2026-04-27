#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B748
   RuntimeId:        0F79
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0621
   VfTable:          0000000142268890
   Address (Base):   0000000143113350
*/
#pragma pack(push, 8)
class GameSensingTemplateData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(GameSensingTemplateData) == 24);

}
