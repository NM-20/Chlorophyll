#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142874548
   RuntimeId:        2C5E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1143
   VfTable:          00000001423787A8
   Address (Base):   0000000143104170
*/
#pragma pack(push, 8)
class MovementControl : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 StoppedTimeAfterFiring; /* 0x0010 */
  FB_BOOLEAN StopToFire; /* 0x0014 */
  FB_BOOLEAN EnablePuppetMode; /* 0x0015 */
  char pad_0016[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MovementControl) == 24);

}
