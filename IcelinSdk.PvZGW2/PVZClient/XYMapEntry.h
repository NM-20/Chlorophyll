#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePortGroup.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142859510
   RuntimeId:        1B1E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1199
   VfTable:          00000001422DC1E8
   Address (Base):   000000014310C5D0
*/
#pragma pack(push, 8)
class XYMapEntry : public AudioGraphNodePortGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort XMin; /* 0x0010 */
  AudioGraphNodePort XMax; /* 0x0018 */
  AudioGraphNodePort Y; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(XYMapEntry) == 40);

}
