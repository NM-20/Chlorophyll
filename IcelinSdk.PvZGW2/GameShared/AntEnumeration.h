#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F5C8
   RuntimeId:        12D5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E7C
   VfTable:          0000000142276540
   Address (Base):   0000000143110890
*/
#pragma pack(push, 8)
class AntEnumeration : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AntRef AntAsset; /* 0x0010 */
  FB_INT32 Value; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(AntEnumeration) == 40);

}
