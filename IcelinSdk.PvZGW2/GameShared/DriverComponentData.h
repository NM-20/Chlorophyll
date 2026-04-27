#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A698
   RuntimeId:        0E98
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D47
   VfTable:          0000000142266318
   Address (Base):   00000001430DC1D0
*/
#pragma pack(push, 16)
class DriverComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 WantedSpeed; /* 0x0070 */
  char pad_0074[0x0004];
  FB_HANDLE(class DriverSettings) Settings; /* 0x0078 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(DriverComponentData) == 128);

}
